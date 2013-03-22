/*
 * Filename: mainwindow.h
 *
 * Programmer: Daniel Brook (danb358 [at] gmail.com)
 *
 * Declarations of the MainWindow class's members
 *
 * Last Updated by Daniel Brook on 27-Dec-2012 at 12:15 PM
 */

#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

// Local project includes
#include "redcellantigens.h"
#include "helpabout.h"
#include "operationguide.h"
#include "configurator.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

public slots:
    /*
     * These start sub-windows
     */
    void startAboutWin( void );
    void startHelpWin( void );
    void startConfig( void );

    /*
     * These are helper slots that should be called for operations requiring
     * some massaging before the Main Window's widgets can be updated or else
     * strange conditions end up happening.
     */
    void resetAllHelper( void ); // does a full reset and call rhReset()
    void rhHelper( void );       // sends the proper type to antigens
    void rhReset( void );        // unsets all radio buttons on reset

    void checkThreshold( void ); // checks coloring threshold for output
    
private:
    Ui::MainWindow *ui;
    RedCellAntigens *antigens;

    HelpAbout *aboutWin;
    OperationGuide *helpWin;
    Configurator *config;
};

#endif // MAINWINDOW_H
