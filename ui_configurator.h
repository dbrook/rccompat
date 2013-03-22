/********************************************************************************
** Form generated from reading UI file 'configurator.ui'
**
** Created: Wed Jan 9 12:39:37 2013
**      by: Qt User Interface Compiler version 4.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONFIGURATOR_H
#define UI_CONFIGURATOR_H

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

class Ui_Configurator
{
public:
    QGridLayout *gridLayout;
    QGroupBox *grp_thresholds;
    QGridLayout *gridLayout_2;
    QLabel *lab_colorChange;
    QSpinBox *spin_colorChange;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *Configurator)
    {
        if (Configurator->objectName().isEmpty())
            Configurator->setObjectName(QString::fromUtf8("Configurator"));
        Configurator->resize(300, 100);
        Configurator->setModal(true);
        gridLayout = new QGridLayout(Configurator);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        grp_thresholds = new QGroupBox(Configurator);
        grp_thresholds->setObjectName(QString::fromUtf8("grp_thresholds"));
        gridLayout_2 = new QGridLayout(grp_thresholds);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        lab_colorChange = new QLabel(grp_thresholds);
        lab_colorChange->setObjectName(QString::fromUtf8("lab_colorChange"));

        gridLayout_2->addWidget(lab_colorChange, 0, 0, 1, 1);

        spin_colorChange = new QSpinBox(grp_thresholds);
        spin_colorChange->setObjectName(QString::fromUtf8("spin_colorChange"));
        spin_colorChange->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        spin_colorChange->setMinimum(1);
        spin_colorChange->setMaximum(999);

        gridLayout_2->addWidget(spin_colorChange, 0, 1, 1, 1);


        gridLayout->addWidget(grp_thresholds, 0, 0, 1, 1);

        buttonBox = new QDialogButtonBox(Configurator);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 1, 0, 1, 1);


        retranslateUi(Configurator);
        QObject::connect(buttonBox, SIGNAL(accepted()), Configurator, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), Configurator, SLOT(reject()));

        QMetaObject::connectSlotsByName(Configurator);
    } // setupUi

    void retranslateUi(QDialog *Configurator)
    {
        Configurator->setWindowTitle(QApplication::translate("Configurator", "RCcompat3 Configuration", 0, QApplication::UnicodeUTF8));
        grp_thresholds->setTitle(QApplication::translate("Configurator", "Thresholds", 0, QApplication::UnicodeUTF8));
        lab_colorChange->setText(QApplication::translate("Configurator", "\"Units to Antigen-Type\" Color Change", 0, QApplication::UnicodeUTF8));
        spin_colorChange->setSuffix(QApplication::translate("Configurator", " units", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Configurator: public Ui_Configurator {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONFIGURATOR_H
