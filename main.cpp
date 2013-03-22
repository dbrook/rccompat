/*
 * Filename: main.cpp
 *
 * Programmer: Daniel Brook (danb358 [at] gmail.com)
 *
 * This file contains main(), which serves to set application version
 * information and launch the Qt GUI that will serve as the application's
 * primary frontend.
 *
 * Last Updated by Daniel Brook on 20-Jan-2013 at  1:00 PM
 */

#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    /*
     * Setup some application-wide parameters here.
     */
    a.setApplicationName( "Red Cell Compatibility Calculator" );
    a.setApplicationVersion( "3.0  (20-Jan-2013)" );

    // Needs to be forced in order to display icons in the menu
    a.setAttribute( Qt::AA_DontShowIconsInMenus, false );

    return a.exec();
}
