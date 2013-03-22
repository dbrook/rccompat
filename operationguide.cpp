/*
 * Filename: operationguide.cpp
 *
 * Programmer: Daniel Brook (danb358 [at] gmail.com)
 *
 * Implementations of the help window's functions and bindings
 *
 * Last Updated by Daniel Brook on 24-Dec-2012 at 10:30 AM
 */

#include "operationguide.h"
#include "ui_operationguide.h"

OperationGuide::OperationGuide(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::OperationGuide)
{
    ui->setupUi(this);
}

OperationGuide::~OperationGuide()
{
    delete ui;
}
