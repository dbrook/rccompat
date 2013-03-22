/*
 * Filename: helpabout.h
 *
 * Programmer: Daniel Brook (danb358 [at] gmail.com)
 *
 * Implementations and other connections of the Help / About window's objects
 *
 * Last Updated by Daniel Brook on 23-Dec-2012 at 6:50 PM
 */

#include "helpabout.h"
#include "ui_helpabout.h"

HelpAbout::HelpAbout(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::HelpAbout)
{
    ui->setupUi(this);

    ///////////////////////////////////////////////////////////////////////////
    // Extra window features and bindings not provided to us by default
    ///////////////////////////////////////////////////////////////////////////
    ui->lab_version->
            setText( "Release " + QCoreApplication::applicationVersion() );

    // Make the window NOT RESIZEABLE
    window()->layout()->setSizeConstraint( QLayout::SetFixedSize );
}

HelpAbout::~HelpAbout()
{
    delete ui;
}
