/********************************************************************************
** Form generated from reading UI file 'operationguide.ui'
**
** Created: Sun Jan 13 16:39:07 2013
**      by: Qt User Interface Compiler version 4.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OPERATIONGUIDE_H
#define UI_OPERATIONGUIDE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>

QT_BEGIN_NAMESPACE

class Ui_OperationGuide
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *OperationGuide)
    {
        if (OperationGuide->objectName().isEmpty())
            OperationGuide->setObjectName(QString::fromUtf8("OperationGuide"));
        OperationGuide->resize(392, 300);
        gridLayout = new QGridLayout(OperationGuide);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(OperationGuide);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1, Qt::AlignTop);

        buttonBox = new QDialogButtonBox(OperationGuide);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Close);

        gridLayout->addWidget(buttonBox, 1, 0, 1, 1);


        retranslateUi(OperationGuide);
        QObject::connect(buttonBox, SIGNAL(accepted()), OperationGuide, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), OperationGuide, SLOT(reject()));

        QMetaObject::connectSlotsByName(OperationGuide);
    } // setupUi

    void retranslateUi(QDialog *OperationGuide)
    {
        OperationGuide->setWindowTitle(QApplication::translate("OperationGuide", "Operation", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("OperationGuide", "<html><head/><body><p><span style=\" font-weight:600;\">Notice: <br/></span>The results produced by this application are only suggestions generated from<br/>available blood antigen statistics. Additional units may need to be tested in <br/>order to find the desired number of compatible units.</p><p><span style=\" font-weight:600;\">Operation<br/></span>To use the application, simply choose the target patient's antigens with the<br/>buttons under &quot;Antigen Selection&quot;. If an antigen from the Rhesus group is <br/>selected, Positive or Negative must be selected for any results to display. <br/>Next, select the quantity of compatible units for the patient to receive by <br/>changing the number under Quantity.</p><p>Results are immediately calculated any time something is changed or selected.<br/>If the &quot;Units to Antigen-Type&quot; area changes to a white-on-red color scheme,<br/>outside resources will likely be needed to obtain the desired matching units of <br/>blood. This configurable threshold is d"
                        "esigned to help save reagents. It <br/>defaults to 10, but can be changed by either pressing F2 or choosing <br/>Configuration... from the Calculator menu.</p></body></html>", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class OperationGuide: public Ui_OperationGuide {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OPERATIONGUIDE_H
