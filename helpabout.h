/*
 * Filename: configurator.h
 *
 * Programmer: Daniel Brook (danb358 [at] gmail.com)
 *
 * Declarations of the Help / About window's objects
 *
 * Last Updated by Daniel Brook on 24-Dec-2012 at 10:30 AM
 */

#ifndef HELPABOUT_H
#define HELPABOUT_H

#include <QDialog>

namespace Ui {
class HelpAbout;
}

class HelpAbout : public QDialog
{
    Q_OBJECT
    
public:
    explicit HelpAbout(QWidget *parent = 0);
    ~HelpAbout();
    
private:
    Ui::HelpAbout *ui;
};

#endif // HELPABOUT_H
