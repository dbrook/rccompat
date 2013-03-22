/********************************************************************************
** Form generated from reading UI file 'configs.ui'
**
** Created: Sun Dec 23 16:26:59 2012
**      by: Qt User Interface Compiler version 4.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONFIGS_H
#define UI_CONFIGS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QGridLayout *gridLayout;
    QGroupBox *grp_thresholds;
    QGridLayout *gridLayout_2;
    QLabel *lab_outside;
    QSpinBox *spin_outside;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->resize(280, 115);
        gridLayout = new QGridLayout(Dialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        grp_thresholds = new QGroupBox(Dialog);
        grp_thresholds->setObjectName(QString::fromUtf8("grp_thresholds"));
        gridLayout_2 = new QGridLayout(grp_thresholds);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        lab_outside = new QLabel(grp_thresholds);
        lab_outside->setObjectName(QString::fromUtf8("lab_outside"));

        gridLayout_2->addWidget(lab_outside, 0, 0, 1, 1);

        spin_outside = new QSpinBox(grp_thresholds);
        spin_outside->setObjectName(QString::fromUtf8("spin_outside"));
        spin_outside->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        spin_outside->setMinimum(1);
        spin_outside->setMaximum(999);

        gridLayout_2->addWidget(spin_outside, 0, 1, 1, 1);


        gridLayout->addWidget(grp_thresholds, 0, 0, 1, 1);

        buttonBox = new QDialogButtonBox(Dialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 1, 0, 1, 1);


        retranslateUi(Dialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), Dialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), Dialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "Dialog", 0, QApplication::UnicodeUTF8));
        grp_thresholds->setTitle(QApplication::translate("Dialog", "Thresholds", 0, QApplication::UnicodeUTF8));
        lab_outside->setText(QApplication::translate("Dialog", "Check outside provider", 0, QApplication::UnicodeUTF8));
        spin_outside->setSuffix(QApplication::translate("Dialog", " units", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONFIGS_H
