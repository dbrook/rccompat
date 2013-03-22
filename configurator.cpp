/*
 * Filename: configurator.h
 *
 * Programmer: Daniel Brook (danb358 [at] gmail.com)
 *
 * Implementation, bindings, and other features of the configurator window
 *
 * Last Updated by Daniel Brook on 04-Jan-2013 at  9:30 AM
 */

#include "configurator.h"
#include "ui_configurator.h"

#include <QFile>

Configurator::Configurator(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Configurator)
{
    ui->setupUi(this);

    // Don't load the settings at instantiation. We want to reload it manually
    // each time the reloadSettings() member function is called.
    set = NULL;

    ///////////////////////////////////////////////////////////////////////////
    // Enhancements on top of base widget rendering
    ///////////////////////////////////////////////////////////////////////////

    /*
     * Make the "OK" button trigger a write-out to the config file.
     *
     * (We don't really care about the cancel button, because each time this
     * window is started (which is really just a "re-showing" of its single
     * instance), we are *HOPING* that the caller triggers a reloadSettings()
     * beforehand. Otherwise, the the displayed parameters won't be accurate.
     */
    connect( ui->buttonBox, SIGNAL(accepted()),
             this, SLOT(writeOut()) );

    // Make the window NOT RESIZEABLE
    window()->layout()->setSizeConstraint( QLayout::SetFixedSize );
}

Configurator::~Configurator()
{
    delete ui;
}

void Configurator::reloadSettings( void )
{
    // Go get the settings
    set = new QSettings( "appConfig.ini", QSettings::IniFormat );

    ///////////////////////////////////////////////////////////////////////////
    // ACTUALLY PULL THE SETTINGS IN HERE:
    // How this works: basically a parameter is loaded in, then its
    // corresponding widget is "setValue"d to that value. SIMPLE.
    ///////////////////////////////////////////////////////////////////////////

    // colorCutoff
    colorCutoff = set->value( "ColorCutoffInteger", "10" ).toString().toInt();
    ui->spin_colorChange->setValue( colorCutoff );


    // NO MORE SETTINGS IN THIS VERSION


    // Clean up after ingesting all the settings
    delete set;
    set = NULL;
}

bool Configurator::fileWritable( void )
{
    // Tries to open the file read/write. If unable, then false is returned.
    QFile testing( "appConfig.ini" );
    if (testing.open( QIODevice::ReadWrite ) == false)
        return false;
    if (testing.isWritable() == false)
        return false;
    return true;
}

/////////// ACCESSORS / MUTATORS //////////////////////
int Configurator::getColorCutoff( void ) const
{
    return this->colorCutoff;
}

void Configurator::setColorCutoff( int cutoff )
{
    if (cutoff <= 0) cutoff = 1;
    this->colorCutoff = cutoff;
}



//////////// SLOTS ////////////////////////////////////
void Configurator::writeOut( void )
{
    /*
     * COLOR CUTOFF VALUE
     */
    // Grab whatever is in the color cutoff spinbox and write it to the INI
    int tempCC = ui->spin_colorChange->value();
    QString tempColorCutoff;
    tempColorCutoff.append( QString("%1").arg( tempCC ) );

    set = new QSettings( "appConfig.ini", QSettings::IniFormat );
    set->setValue( "ColorCutoffInteger", tempColorCutoff );

    this->colorCutoff = tempCC;      // Save it to this object, too!


    // No other parameters in this version

    // Clean up
    delete set;
    set = NULL;
}
