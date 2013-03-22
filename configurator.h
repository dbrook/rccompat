/*
 * Filename: configurator.h
 *
 * Programmer: Daniel Brook (danb358 [at] gmail.com)
 *
 * Declarations of the Configurator window's objects
 *
 * Last Updated by Daniel Brook on 04-Jan-2013 at  9:30 AM
 */

#ifndef CONFIGURATOR_H
#define CONFIGURATOR_H

#include <QDialog>
#include <QSettings>

namespace Ui {
class Configurator;
}

class Configurator : public QDialog
{
    Q_OBJECT
    
public:
    explicit Configurator(QWidget *parent = 0);
    ~Configurator();

    /*
     * Re-figures-out the settings from the settings file.
     * It would be wise to call this before doing a show() on this window so
     * the application state currently being used is actually present!
     */
    void reloadSettings( void );

    /*
     * Checks if the INI file holding the app's settings is read/write
     *
     * RETURNS:
     *   TRUE if the file can be opened read/write
     *   FALSE if the file can only be read (like it's located in an area where
     *      only an administrator can change it).
     */
    bool fileWritable( void );

    ///////////////////////////////////////////////////////////////////////////
    //       ACCESSOR + MUTATOR FUNCTIONS FOR APPLICATION PARAMETERS         //
    ///////////////////////////////////////////////////////////////////////////

    // color change cutoff threshold for the main window's output label widget
    int      getColorCutoff     ( void )                 const;
    void     setColorCutoff     ( int cutoff );          // Must be >= 1

public slots:
    /*
     * Saves the application settings to the INI file. This doesn't do any
     * error checking, so running fileWritable() first is a good move.
     */
    void writeOut( void );
    
private:
    Ui::Configurator *ui;
    QSettings *set;

    // Settings Members
    int colorCutoff;
};

#endif // CONFIGURATOR_H
