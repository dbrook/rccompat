/********************************************************************************
** Form generated from reading UI file 'helpabout.ui'
**
** Created: Sun Jan 13 16:47:28 2013
**      by: Qt User Interface Compiler version 4.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HELPABOUT_H
#define UI_HELPABOUT_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HelpAbout
{
public:
    QGridLayout *gridLayout;
    QLabel *lab_version;
    QDialogButtonBox *buttonBox;
    QHBoxLayout *horizontalLayout;
    QWidget *iconArea;
    QLabel *lab_heading;
    QLabel *label;

    void setupUi(QDialog *HelpAbout)
    {
        if (HelpAbout->objectName().isEmpty())
            HelpAbout->setObjectName(QString::fromUtf8("HelpAbout"));
        HelpAbout->setWindowModality(Qt::ApplicationModal);
        HelpAbout->resize(405, 450);
        gridLayout = new QGridLayout(HelpAbout);
        gridLayout->setContentsMargins(6, 6, 6, 6);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        lab_version = new QLabel(HelpAbout);
        lab_version->setObjectName(QString::fromUtf8("lab_version"));
        lab_version->setStyleSheet(QString::fromUtf8("font-weight: bold;"));

        gridLayout->addWidget(lab_version, 3, 0, 1, 1);

        buttonBox = new QDialogButtonBox(HelpAbout);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Close);

        gridLayout->addWidget(buttonBox, 5, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        iconArea = new QWidget(HelpAbout);
        iconArea->setObjectName(QString::fromUtf8("iconArea"));
        iconArea->setMinimumSize(QSize(64, 64));
        iconArea->setMaximumSize(QSize(64, 64));
        iconArea->setStyleSheet(QString::fromUtf8("image: url(:/appIcon/rccompat3.png);"));

        horizontalLayout->addWidget(iconArea);

        lab_heading = new QLabel(HelpAbout);
        lab_heading->setObjectName(QString::fromUtf8("lab_heading"));

        horizontalLayout->addWidget(lab_heading);


        gridLayout->addLayout(horizontalLayout, 2, 0, 1, 1);

        label = new QLabel(HelpAbout);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 4, 0, 1, 1);


        retranslateUi(HelpAbout);
        QObject::connect(buttonBox, SIGNAL(accepted()), HelpAbout, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), HelpAbout, SLOT(reject()));

        QMetaObject::connectSlotsByName(HelpAbout);
    } // setupUi

    void retranslateUi(QDialog *HelpAbout)
    {
        HelpAbout->setWindowTitle(QApplication::translate("HelpAbout", "About RCcompat3", 0, QApplication::UnicodeUTF8));
        lab_version->setText(QApplication::translate("HelpAbout", "Release _._ (DD-Mmm-YYYY)", 0, QApplication::UnicodeUTF8));
        lab_heading->setText(QApplication::translate("HelpAbout", "<html><head/><body><p><span style=\" font-weight:600;\">Red Cell Compatibility Calculator</span> (Cross Platform)</p><p>A simple tool to estimate how many units of blood should be <br/>antigen-screened to find units compatible with a patient</p></body></html>", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("HelpAbout", "<html><head/><body><p>Copyright \302\251 2013, Daniel Brook &lt;<a href=\"danb358@gmail.com\"><span style=\" text-decoration: underline; color:#0000ff;\">danb358@gmail.com</span></a>&gt;</p><p>RCcompat3 is written in C++ and uses the Qt Application Framework.</p><p><span style=\" font-weight:600;\">Technical Contributors</span></p><ul style=\"margin-top: 0px; margin-bottom: 0px; margin-left: 0px; margin-right: 0px; -qt-list-indent: 1;\"><li style=\" margin-top:12px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Judith A. Brook, MT (ASCP)</li><li style=\" margin-top:0px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Jason A. Viau, MT (ASCP)</li></ul><p><span style=\" font-weight:600;\">Disclaimer</span></p><p>This program is distributed in the hope that it will be useful, but without any<br/>warranty. It is provided &quot;as is&quot; without warranty of any kind, either expressed or<br/>implied, including but not limi"
                        "ted to, the implied warranties of merchantability and<br/>fitness for a particular purpose. The entire risk as to the quality and performance<br/>of the program is with you. Should the program prove defective, you assume the<br/>cost of all necesary servicing, repair, or correction.</p><p><span style=\" font-weight:600;\">License</span></p><p>This program is distributed under the terms of the GNU General Public License<br/>version 3.0. A copy of this license should have been distributed with the program.<br/>If for some reason it was not included, a copy can be found at:</p><p align=\"center\"><a href=\"http://www.gnu.org/licenses/gpl.html\"><span style=\" text-decoration: underline; color:#0000ff;\">http://www.gnu.org/licenses/gpl.html</span></a></p></body></html>", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class HelpAbout: public Ui_HelpAbout {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HELPABOUT_H
