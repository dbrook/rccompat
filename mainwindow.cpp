/*
 * Filename: mainwindow.cpp
 *
 * Programmer: Daniel Brook (danb358 [at] gmail.com)
 *
 * This file contains the primary window's interaction code, including binding
 * of GUI elements to the relavent backend's features.
 *
 * Last Updated by Daniel Brook on 27-Dec-2012 at 12:15 PM
 */

#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    /*
     * Qt Creator supplied this. The remaining code is our implementation!
     */
    ui->setupUi(this);

    /*
     * Set the application icon. This isn't really for Windows (where this will
     * undoubtedly spend most of its life) but for other platforms like Linux.
     */
    this->setWindowIcon( QIcon( ":/appIcon/rccompat3.png" ) );

    /*
     * Create an object that will be able to do the computations
     */
    this->antigens = new RedCellAntigens( this );

    /*
     * Avoid segmentation faults by setting pointers to NULL first!
     */
    this->aboutWin = NULL;
    this->helpWin  = NULL;

    // Now we'll ALWAYS keep a configurator present, since we'll go through
    // it to access application settings. This probably isn't the best way to
    // accomplish this but it'll have to do for now.
    this->config   = new Configurator( this );
    this->config->reloadSettings();            // get app defaults going


    ///////////////////////////////////////////////////////////////////////////
    // INTERFACE SETUP AND SIGNAL/SLOT BINDINGS
    ///////////////////////////////////////////////////////////////////////////
    //
    // The Help menu
    //
    connect( ui->actionAbout_Qt_Framework, SIGNAL(triggered()),
             qApp, SLOT(aboutQt()) );
    ui->actionAbout_Qt_Framework->setIcon( QIcon( ":/appIcon/qt.png" ) );

    connect( ui->actionAbout, SIGNAL(triggered()),
             this, SLOT(startAboutWin()) );
    ui->actionAbout->setIcon( QIcon( ":/appIcon/rccompat3.png" ) );

    connect( ui->actionOperation, SIGNAL(triggered()),
             this, SLOT(startHelpWin()) );
    ui->actionOperation->setIcon( QIcon( ":/appIcon/help.png" ) );

    //
    // The RCcompat3 Menu (Main Menu)
    //
    connect( ui->actionExit, SIGNAL(triggered()),
             this, SLOT(close()) );
    ui->actionExit->setIcon( QIcon( ":/appIcon/exit.png" ) );

    connect( ui->actionConfigure, SIGNAL(triggered()),
             this, SLOT(startConfig()) );
    ui->actionConfigure->setIcon( QIcon( ":/appIcon/config.png" ) );

    connect( ui->actionReset_Quantity, SIGNAL(triggered()),
             this->antigens, SLOT(resetQuantity()) );
    //ui->actionReset_Quantity->setIcon();

    connect( ui->actionReset_Rh_Factor, SIGNAL(triggered()),
             this, SLOT(rhReset()) );
    //ui->actionReset_Rh_Factor->setIcon();

    connect( ui->actionReset_Antigens, SIGNAL(triggered()),
             this->antigens, SLOT(resetAntigens()) );
    //ui->actionReset_Antigens->setIcon();

    connect( ui->actionReset_Marked, SIGNAL(triggered()),
             this, SLOT(resetAllHelper()) );
    ui->actionReset_Marked->setIcon( QIcon( ":/appIcon/reset.png" ) );


    //
    // The Antigen Selection group area. The pattern is as follows:
    //  FIRST:  the interface to the backend
    //  SECOND: the backend's emit to watch for from the interface
    //
    connect( ui->btn_C, SIGNAL(toggled(bool)),
             this->antigens, SLOT(enable_C(bool)) );
    connect( this->antigens, SIGNAL(C_set(bool)),
             ui->btn_C, SLOT(setChecked(bool)) );

    connect( ui->btn_c, SIGNAL(toggled(bool)),
             this->antigens, SLOT(enable_c(bool)) );
    connect( this->antigens, SIGNAL(c_set(bool)),
             ui->btn_c, SLOT(setChecked(bool)) );

    connect( ui->btn_E, SIGNAL(toggled(bool)),
             this->antigens, SLOT(enable_E(bool)) );
    connect( this->antigens, SIGNAL(E_set(bool)),
             ui->btn_E, SLOT(setChecked(bool)) );

    connect( ui->btn_e, SIGNAL(toggled(bool)),
             this->antigens, SLOT(enable_e(bool)) );
    connect( this->antigens, SIGNAL(e_set(bool)),
             ui->btn_e, SLOT(setChecked(bool)) );

    connect( ui->btn_K, SIGNAL(toggled(bool)),
             this->antigens, SLOT(enable_K(bool)) );
    connect( this->antigens, SIGNAL(K_set(bool)),
             ui->btn_K, SLOT(setChecked(bool)) );

    connect( ui->btn_k, SIGNAL(toggled(bool)),
             this->antigens, SLOT(enable_k(bool)) );
    connect( this->antigens, SIGNAL( k_set(bool)),
             ui->btn_k, SLOT(setChecked(bool)) );

    connect( ui->btn_Fya, SIGNAL(toggled(bool)),
             this->antigens, SLOT(enable_Fya(bool)) );
    connect( this->antigens, SIGNAL(Fya_set(bool)),
             ui->btn_Fya, SLOT(setChecked(bool)) );

    connect( ui->btn_Fyb, SIGNAL(toggled(bool)),
             this->antigens, SLOT(enable_Fyb(bool)) );
    connect( this->antigens, SIGNAL(Fyb_set(bool)),
             ui->btn_Fyb, SLOT(setChecked(bool)) );

    connect( ui->btn_M, SIGNAL(toggled(bool)),
             this->antigens, SLOT(enable_M(bool)) );
    connect( this->antigens, SIGNAL(M_set(bool)),
             ui->btn_M, SLOT(setChecked(bool)) );

    connect( ui->btn_N, SIGNAL(toggled(bool)),
             this->antigens, SLOT(enable_N(bool)) );
    connect( this->antigens, SIGNAL(N_set(bool)),
             ui->btn_N, SLOT(setChecked(bool)) );

    connect( ui->btn_S, SIGNAL(toggled(bool)),
             this->antigens, SLOT(enable_S(bool)) );
    connect( this->antigens, SIGNAL(S_set(bool)),
             ui->btn_S, SLOT(setChecked(bool)) );

    connect( ui->btn_s, SIGNAL(toggled(bool)),
             this->antigens, SLOT(enable_s(bool)) );
    connect( this->antigens, SIGNAL(s_set(bool)),
             ui->btn_s, SLOT(setChecked(bool)) );

    connect( ui->btn_Lea, SIGNAL(toggled(bool)),
             this->antigens, SLOT(enable_Lea(bool)) );
    connect( this->antigens, SIGNAL(Lea_set(bool)),
             ui->btn_Lea, SLOT(setChecked(bool)) );

    connect( ui->btn_Leb, SIGNAL(toggled(bool)),
             this->antigens, SLOT(enable_Leb(bool)) );
    connect( this->antigens, SIGNAL(Leb_set(bool)),
             ui->btn_Leb, SLOT(setChecked(bool)) );

    connect( ui->btn_Jka, SIGNAL(toggled(bool)),
             this->antigens, SLOT(enable_Jka(bool)) );
    connect( this->antigens, SIGNAL(Jka_set(bool)),
             ui->btn_Jka, SLOT(setChecked(bool)) );

    connect( ui->btn_Jkb, SIGNAL(toggled(bool)),
             this->antigens, SLOT(enable_Jkb(bool)) );
    connect( this->antigens, SIGNAL(Jkb_set(bool)),
             ui->btn_Jkb, SLOT(setChecked(bool)) );

    connect( ui->btn_P1, SIGNAL(toggled(bool)),
             this->antigens, SLOT(enable_P1(bool)) );
    connect( this->antigens, SIGNAL(P1_set(bool)),
             ui->btn_P1, SLOT(setChecked(bool)) );


    //
    // The Rh Factor selection area
    //
    connect( this->antigens, SIGNAL(needsRh(bool)),
             ui->grp_Rh, SLOT(setEnabled(bool)) );
    connect( ui->rad_pos, SIGNAL(clicked()),
             this, SLOT(rhHelper()) );
    connect( ui->rad_neg, SIGNAL(clicked()),
             this, SLOT(rhHelper()) );


    //
    // The quantity selection
    //
    connect( ui->spin_qty, SIGNAL(valueChanged(int)),
             this->antigens, SLOT(setQuantity(int)) );
    connect( this->antigens, SIGNAL(newQuantity(int)),
             ui->spin_qty, SLOT(setValue(int)) );


    //
    // The results label widget
    //
    connect( this->antigens, SIGNAL(needToTest(QString)),
             ui->lab_output, SLOT(setText(QString)) );
    connect( this->antigens, SIGNAL(needToTest(QString)),
             this, SLOT(checkThreshold()) );


    //
    // The reset and exit buttons
    //
    connect( ui->btn_quit, SIGNAL(clicked()),
             this, SLOT(close()) );
    connect( ui->btn_reset, SIGNAL(clicked()),
             this, SLOT(resetAllHelper()) );


    /* That should do it for widget setups, now make sure things are init'd */
    this->antigens->resetAll();
}

MainWindow::~MainWindow()
{
    delete ui;
    delete antigens;
    delete aboutWin;
    delete helpWin;
    delete config;
}

// Local SLOTS
void MainWindow::startAboutWin( void )
{
    if (!aboutWin)
        aboutWin = new HelpAbout( this );
    aboutWin->show();
}

void MainWindow::startHelpWin( void )
{
    if (!helpWin)
        helpWin = new OperationGuide( this );
    helpWin->show();
}

void MainWindow::startConfig( void )
{
    /*
     * Does the user have read/write access to the application's configuration
     * file? If they don't a firmly-worded message is in order, otherwise just
     * continue to launch the configurator window.
     */
    if (config->fileWritable() == false) {
        QMessageBox *noAccess = new QMessageBox( this );
        noAccess->setWindowTitle( "Access Denied" );
        noAccess->setText("You don't write-access to the configuration file.");
        noAccess->show();
        return;
    }
    config->reloadSettings();  // Must do this first! Otherwise old value stays
    config->show();
}

void MainWindow::resetAllHelper( void )
{
    antigens->resetAll();
    this->rhReset();
}

void MainWindow::rhHelper( void )
{
    if (ui->rad_pos->isChecked())
        antigens->setRhFactor( POSITIVE );
    else if (ui->rad_neg->isChecked())
        antigens->setRhFactor( NEGATIVE );
}

void MainWindow::rhReset( void )
{
    // This is basically required since Qt likes to bind together the radio
    // buttons making it impossible to deselect ALL of them (back to their
    // initial state). So we'll also do the call to reset here!

    ui->rad_neg->setAutoExclusive(false);
    ui->rad_pos->setAutoExclusive(false);
    ui->rad_neg->setChecked(false);
    ui->rad_pos->setChecked(false);
    ui->rad_neg->setAutoExclusive(true);
    ui->rad_pos->setAutoExclusive(true);

    this->antigens->resetRhFactor();
}

void MainWindow::checkThreshold( void )
{
    // In order to change the color of a widget its stylesheet needs to be
    // updated. In our case, this requires getting an actual number to do the
    // arithmetic comparisons. This should be called each time an update is
    // sent to the output label!

    // NOW updated to check the config parameters, allowing the user to set
    // what color cutoff they want before things go from cyan to red.

    if (antigens->getReqToTest() <= config->getColorCutoff())
        ui->lab_output->
                setStyleSheet(
                    QString::fromUtf8(
                        "background-color: rgb(85, 255, 255); font-size: 14pt"));
    else
        ui->lab_output->
                setStyleSheet(
                    QString::fromUtf8(
                        "background-color: rgb(220, 75, 75); color: rgb(255, 255, 255); font-size: 14pt"));
}
