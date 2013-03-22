/*
 * Filename: operationguide.h
 *
 * Programmer: Daniel Brook (danb358 [at] gmail.com)
 *
 * Declarations of the overall help window's objects
 *
 * Last Updated by Daniel Brook on 24-Dec-2012 at 10:30 AM
 */

#ifndef OPERATIONGUIDE_H
#define OPERATIONGUIDE_H

#include <QDialog>

namespace Ui {
class OperationGuide;
}

class OperationGuide : public QDialog
{
    Q_OBJECT
    
public:
    explicit OperationGuide(QWidget *parent = 0);
    ~OperationGuide();
    
private:
    Ui::OperationGuide *ui;
};

#endif // OPERATIONGUIDE_H
