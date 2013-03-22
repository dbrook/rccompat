/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Sun Jan 13 16:40:14 2013
**      by: Qt User Interface Compiler version 4.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QSpinBox>
#include <QtGui/QStatusBar>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionNew_Window;
    QAction *actionConfigure;
    QAction *actionExit;
    QAction *actionOperation;
    QAction *actionAbout;
    QAction *actionAbout_Qt_Framework;
    QAction *actionReset_Marked;
    QAction *actionReset_Antigens;
    QAction *actionReset_Rh_Factor;
    QAction *actionReset_Quantity;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QGroupBox *grp_antigens;
    QGridLayout *gridLayout_4;
    QPushButton *btn_N;
    QPushButton *btn_M;
    QPushButton *btn_C;
    QPushButton *btn_c;
    QPushButton *btn_E;
    QPushButton *btn_e;
    QPushButton *btn_K;
    QPushButton *btn_k;
    QPushButton *btn_Fya;
    QPushButton *btn_S;
    QPushButton *btn_s;
    QPushButton *btn_Fyb;
    QPushButton *btn_Lea;
    QPushButton *btn_Leb;
    QPushButton *btn_Jka;
    QPushButton *btn_Jkb;
    QPushButton *btn_P1;
    QGridLayout *gridLayout_3;
    QGroupBox *grp_Rh;
    QVBoxLayout *verticalLayout_2;
    QRadioButton *rad_pos;
    QRadioButton *rad_neg;
    QGroupBox *grp_qty;
    QGridLayout *gridLayout;
    QSpinBox *spin_qty;
    QLabel *label;
    QGridLayout *gridLayout_5;
    QPushButton *btn_reset;
    QPushButton *btn_quit;
    QHBoxLayout *horizontalLayout;
    QLabel *lab_units;
    QLabel *lab_output;
    QMenuBar *menubar;
    QMenu *menuRCcompat3;
    QMenu *menuHelp;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(345, 242);
        actionNew_Window = new QAction(MainWindow);
        actionNew_Window->setObjectName(QString::fromUtf8("actionNew_Window"));
        actionConfigure = new QAction(MainWindow);
        actionConfigure->setObjectName(QString::fromUtf8("actionConfigure"));
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        actionOperation = new QAction(MainWindow);
        actionOperation->setObjectName(QString::fromUtf8("actionOperation"));
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName(QString::fromUtf8("actionAbout"));
        actionAbout_Qt_Framework = new QAction(MainWindow);
        actionAbout_Qt_Framework->setObjectName(QString::fromUtf8("actionAbout_Qt_Framework"));
        actionReset_Marked = new QAction(MainWindow);
        actionReset_Marked->setObjectName(QString::fromUtf8("actionReset_Marked"));
        actionReset_Antigens = new QAction(MainWindow);
        actionReset_Antigens->setObjectName(QString::fromUtf8("actionReset_Antigens"));
        actionReset_Rh_Factor = new QAction(MainWindow);
        actionReset_Rh_Factor->setObjectName(QString::fromUtf8("actionReset_Rh_Factor"));
        actionReset_Quantity = new QAction(MainWindow);
        actionReset_Quantity->setObjectName(QString::fromUtf8("actionReset_Quantity"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        verticalLayout->setContentsMargins(6, 6, 6, 4);
        grp_antigens = new QGroupBox(centralwidget);
        grp_antigens->setObjectName(QString::fromUtf8("grp_antigens"));
        gridLayout_4 = new QGridLayout(grp_antigens);
        gridLayout_4->setSpacing(0);
        gridLayout_4->setContentsMargins(5, 5, 5, 5);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        btn_N = new QPushButton(grp_antigens);
        btn_N->setObjectName(QString::fromUtf8("btn_N"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(btn_N->sizePolicy().hasHeightForWidth());
        btn_N->setSizePolicy(sizePolicy);
        btn_N->setMinimumSize(QSize(35, 0));
        btn_N->setCheckable(true);

        gridLayout_4->addWidget(btn_N, 1, 1, 1, 1);

        btn_M = new QPushButton(grp_antigens);
        btn_M->setObjectName(QString::fromUtf8("btn_M"));
        sizePolicy.setHeightForWidth(btn_M->sizePolicy().hasHeightForWidth());
        btn_M->setSizePolicy(sizePolicy);
        btn_M->setMinimumSize(QSize(35, 0));
        btn_M->setCheckable(true);

        gridLayout_4->addWidget(btn_M, 1, 0, 1, 1);

        btn_C = new QPushButton(grp_antigens);
        btn_C->setObjectName(QString::fromUtf8("btn_C"));
        sizePolicy.setHeightForWidth(btn_C->sizePolicy().hasHeightForWidth());
        btn_C->setSizePolicy(sizePolicy);
        btn_C->setMinimumSize(QSize(35, 0));
        btn_C->setCheckable(true);

        gridLayout_4->addWidget(btn_C, 0, 0, 1, 1);

        btn_c = new QPushButton(grp_antigens);
        btn_c->setObjectName(QString::fromUtf8("btn_c"));
        sizePolicy.setHeightForWidth(btn_c->sizePolicy().hasHeightForWidth());
        btn_c->setSizePolicy(sizePolicy);
        btn_c->setMinimumSize(QSize(35, 0));
        btn_c->setCheckable(true);

        gridLayout_4->addWidget(btn_c, 0, 1, 1, 1);

        btn_E = new QPushButton(grp_antigens);
        btn_E->setObjectName(QString::fromUtf8("btn_E"));
        sizePolicy.setHeightForWidth(btn_E->sizePolicy().hasHeightForWidth());
        btn_E->setSizePolicy(sizePolicy);
        btn_E->setMinimumSize(QSize(35, 0));
        btn_E->setCheckable(true);

        gridLayout_4->addWidget(btn_E, 0, 2, 1, 1);

        btn_e = new QPushButton(grp_antigens);
        btn_e->setObjectName(QString::fromUtf8("btn_e"));
        sizePolicy.setHeightForWidth(btn_e->sizePolicy().hasHeightForWidth());
        btn_e->setSizePolicy(sizePolicy);
        btn_e->setMinimumSize(QSize(35, 0));
        btn_e->setCheckable(true);

        gridLayout_4->addWidget(btn_e, 0, 3, 1, 1);

        btn_K = new QPushButton(grp_antigens);
        btn_K->setObjectName(QString::fromUtf8("btn_K"));
        sizePolicy.setHeightForWidth(btn_K->sizePolicy().hasHeightForWidth());
        btn_K->setSizePolicy(sizePolicy);
        btn_K->setMinimumSize(QSize(35, 0));
        btn_K->setCheckable(true);

        gridLayout_4->addWidget(btn_K, 0, 4, 1, 1);

        btn_k = new QPushButton(grp_antigens);
        btn_k->setObjectName(QString::fromUtf8("btn_k"));
        sizePolicy.setHeightForWidth(btn_k->sizePolicy().hasHeightForWidth());
        btn_k->setSizePolicy(sizePolicy);
        btn_k->setMinimumSize(QSize(35, 0));
        btn_k->setCheckable(true);

        gridLayout_4->addWidget(btn_k, 0, 5, 1, 1);

        btn_Fya = new QPushButton(grp_antigens);
        btn_Fya->setObjectName(QString::fromUtf8("btn_Fya"));
        sizePolicy.setHeightForWidth(btn_Fya->sizePolicy().hasHeightForWidth());
        btn_Fya->setSizePolicy(sizePolicy);
        btn_Fya->setMinimumSize(QSize(35, 0));
        btn_Fya->setCheckable(true);

        gridLayout_4->addWidget(btn_Fya, 0, 6, 1, 1);

        btn_S = new QPushButton(grp_antigens);
        btn_S->setObjectName(QString::fromUtf8("btn_S"));
        sizePolicy.setHeightForWidth(btn_S->sizePolicy().hasHeightForWidth());
        btn_S->setSizePolicy(sizePolicy);
        btn_S->setMinimumSize(QSize(35, 0));
        btn_S->setCheckable(true);

        gridLayout_4->addWidget(btn_S, 1, 2, 1, 1);

        btn_s = new QPushButton(grp_antigens);
        btn_s->setObjectName(QString::fromUtf8("btn_s"));
        sizePolicy.setHeightForWidth(btn_s->sizePolicy().hasHeightForWidth());
        btn_s->setSizePolicy(sizePolicy);
        btn_s->setMinimumSize(QSize(35, 0));
        btn_s->setCheckable(true);

        gridLayout_4->addWidget(btn_s, 1, 3, 1, 1);

        btn_Fyb = new QPushButton(grp_antigens);
        btn_Fyb->setObjectName(QString::fromUtf8("btn_Fyb"));
        sizePolicy.setHeightForWidth(btn_Fyb->sizePolicy().hasHeightForWidth());
        btn_Fyb->setSizePolicy(sizePolicy);
        btn_Fyb->setMinimumSize(QSize(35, 0));
        btn_Fyb->setCheckable(true);

        gridLayout_4->addWidget(btn_Fyb, 0, 7, 1, 1);

        btn_Lea = new QPushButton(grp_antigens);
        btn_Lea->setObjectName(QString::fromUtf8("btn_Lea"));
        sizePolicy.setHeightForWidth(btn_Lea->sizePolicy().hasHeightForWidth());
        btn_Lea->setSizePolicy(sizePolicy);
        btn_Lea->setMinimumSize(QSize(35, 0));
        btn_Lea->setCheckable(true);

        gridLayout_4->addWidget(btn_Lea, 1, 4, 1, 1);

        btn_Leb = new QPushButton(grp_antigens);
        btn_Leb->setObjectName(QString::fromUtf8("btn_Leb"));
        sizePolicy.setHeightForWidth(btn_Leb->sizePolicy().hasHeightForWidth());
        btn_Leb->setSizePolicy(sizePolicy);
        btn_Leb->setMinimumSize(QSize(35, 0));
        btn_Leb->setCheckable(true);

        gridLayout_4->addWidget(btn_Leb, 1, 5, 1, 1);

        btn_Jka = new QPushButton(grp_antigens);
        btn_Jka->setObjectName(QString::fromUtf8("btn_Jka"));
        sizePolicy.setHeightForWidth(btn_Jka->sizePolicy().hasHeightForWidth());
        btn_Jka->setSizePolicy(sizePolicy);
        btn_Jka->setMinimumSize(QSize(35, 0));
        btn_Jka->setCheckable(true);

        gridLayout_4->addWidget(btn_Jka, 1, 6, 1, 1);

        btn_Jkb = new QPushButton(grp_antigens);
        btn_Jkb->setObjectName(QString::fromUtf8("btn_Jkb"));
        sizePolicy.setHeightForWidth(btn_Jkb->sizePolicy().hasHeightForWidth());
        btn_Jkb->setSizePolicy(sizePolicy);
        btn_Jkb->setMinimumSize(QSize(35, 0));
        btn_Jkb->setCheckable(true);

        gridLayout_4->addWidget(btn_Jkb, 1, 7, 1, 1);

        btn_P1 = new QPushButton(grp_antigens);
        btn_P1->setObjectName(QString::fromUtf8("btn_P1"));
        sizePolicy.setHeightForWidth(btn_P1->sizePolicy().hasHeightForWidth());
        btn_P1->setSizePolicy(sizePolicy);
        btn_P1->setMinimumSize(QSize(35, 0));
        btn_P1->setCheckable(true);

        gridLayout_4->addWidget(btn_P1, 1, 8, 1, 1);


        verticalLayout->addWidget(grp_antigens);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        grp_Rh = new QGroupBox(centralwidget);
        grp_Rh->setObjectName(QString::fromUtf8("grp_Rh"));
        verticalLayout_2 = new QVBoxLayout(grp_Rh);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        rad_pos = new QRadioButton(grp_Rh);
        rad_pos->setObjectName(QString::fromUtf8("rad_pos"));

        verticalLayout_2->addWidget(rad_pos);

        rad_neg = new QRadioButton(grp_Rh);
        rad_neg->setObjectName(QString::fromUtf8("rad_neg"));

        verticalLayout_2->addWidget(rad_neg);


        gridLayout_3->addWidget(grp_Rh, 0, 0, 1, 1);

        grp_qty = new QGroupBox(centralwidget);
        grp_qty->setObjectName(QString::fromUtf8("grp_qty"));
        gridLayout = new QGridLayout(grp_qty);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        spin_qty = new QSpinBox(grp_qty);
        spin_qty->setObjectName(QString::fromUtf8("spin_qty"));
        spin_qty->setStyleSheet(QString::fromUtf8("font-size: 14pt;"));
        spin_qty->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        spin_qty->setMinimum(1);
        spin_qty->setMaximum(999);
        spin_qty->setValue(1);

        gridLayout->addWidget(spin_qty, 0, 1, 1, 1);

        label = new QLabel(grp_qty);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        gridLayout->setColumnStretch(1, 1);

        gridLayout_3->addWidget(grp_qty, 0, 1, 1, 1);

        gridLayout_5 = new QGridLayout();
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        btn_reset = new QPushButton(centralwidget);
        btn_reset->setObjectName(QString::fromUtf8("btn_reset"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(btn_reset->sizePolicy().hasHeightForWidth());
        btn_reset->setSizePolicy(sizePolicy1);

        gridLayout_5->addWidget(btn_reset, 0, 0, 1, 1);

        btn_quit = new QPushButton(centralwidget);
        btn_quit->setObjectName(QString::fromUtf8("btn_quit"));
        sizePolicy1.setHeightForWidth(btn_quit->sizePolicy().hasHeightForWidth());
        btn_quit->setSizePolicy(sizePolicy1);

        gridLayout_5->addWidget(btn_quit, 1, 0, 1, 1);


        gridLayout_3->addLayout(gridLayout_5, 0, 2, 1, 1);

        gridLayout_3->setColumnStretch(1, 1);

        verticalLayout->addLayout(gridLayout_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        lab_units = new QLabel(centralwidget);
        lab_units->setObjectName(QString::fromUtf8("lab_units"));

        horizontalLayout->addWidget(lab_units);

        lab_output = new QLabel(centralwidget);
        lab_output->setObjectName(QString::fromUtf8("lab_output"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(lab_output->sizePolicy().hasHeightForWidth());
        lab_output->setSizePolicy(sizePolicy2);
        lab_output->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"font-size: 14pt;"));
        lab_output->setFrameShape(QFrame::Box);
        lab_output->setFrameShadow(QFrame::Raised);
        lab_output->setLineWidth(1);
        lab_output->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(lab_output);


        verticalLayout->addLayout(horizontalLayout);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 345, 21));
        menuRCcompat3 = new QMenu(menubar);
        menuRCcompat3->setObjectName(QString::fromUtf8("menuRCcompat3"));
        menuHelp = new QMenu(menubar);
        menuHelp->setObjectName(QString::fromUtf8("menuHelp"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);
        QWidget::setTabOrder(btn_C, btn_c);
        QWidget::setTabOrder(btn_c, btn_E);
        QWidget::setTabOrder(btn_E, btn_e);
        QWidget::setTabOrder(btn_e, btn_K);
        QWidget::setTabOrder(btn_K, btn_k);
        QWidget::setTabOrder(btn_k, btn_Fya);
        QWidget::setTabOrder(btn_Fya, btn_Fyb);
        QWidget::setTabOrder(btn_Fyb, btn_M);
        QWidget::setTabOrder(btn_M, btn_N);
        QWidget::setTabOrder(btn_N, btn_S);
        QWidget::setTabOrder(btn_S, btn_s);
        QWidget::setTabOrder(btn_s, btn_Lea);
        QWidget::setTabOrder(btn_Lea, btn_Leb);
        QWidget::setTabOrder(btn_Leb, btn_Jka);
        QWidget::setTabOrder(btn_Jka, btn_Jkb);
        QWidget::setTabOrder(btn_Jkb, btn_P1);
        QWidget::setTabOrder(btn_P1, rad_pos);
        QWidget::setTabOrder(rad_pos, rad_neg);
        QWidget::setTabOrder(rad_neg, spin_qty);
        QWidget::setTabOrder(spin_qty, btn_reset);
        QWidget::setTabOrder(btn_reset, btn_quit);

        menubar->addAction(menuRCcompat3->menuAction());
        menubar->addAction(menuHelp->menuAction());
        menuRCcompat3->addAction(actionReset_Marked);
        menuRCcompat3->addAction(actionReset_Antigens);
        menuRCcompat3->addAction(actionReset_Rh_Factor);
        menuRCcompat3->addAction(actionReset_Quantity);
        menuRCcompat3->addSeparator();
        menuRCcompat3->addAction(actionConfigure);
        menuRCcompat3->addSeparator();
        menuRCcompat3->addAction(actionExit);
        menuHelp->addAction(actionOperation);
        menuHelp->addAction(actionAbout);
        menuHelp->addAction(actionAbout_Qt_Framework);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Red Cell Compatibility Calculator 3", 0, QApplication::UnicodeUTF8));
        actionNew_Window->setText(QApplication::translate("MainWindow", "New Window...", 0, QApplication::UnicodeUTF8));
        actionConfigure->setText(QApplication::translate("MainWindow", "&Configuration...", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        actionConfigure->setStatusTip(QApplication::translate("MainWindow", "Modify application parameters", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        actionConfigure->setShortcut(QApplication::translate("MainWindow", "F2", 0, QApplication::UnicodeUTF8));
        actionExit->setText(QApplication::translate("MainWindow", "E&xit", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        actionExit->setStatusTip(QApplication::translate("MainWindow", "Quits the application, no selections are saved", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        actionExit->setShortcut(QApplication::translate("MainWindow", "Esc", 0, QApplication::UnicodeUTF8));
        actionOperation->setText(QApplication::translate("MainWindow", "&Operation / Use...", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        actionOperation->setStatusTip(QApplication::translate("MainWindow", "Displays help information", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        actionOperation->setShortcut(QApplication::translate("MainWindow", "F1", 0, QApplication::UnicodeUTF8));
        actionAbout->setText(QApplication::translate("MainWindow", "&About RCcompat3...", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        actionAbout->setStatusTip(QApplication::translate("MainWindow", "Displays information about the application", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        actionAbout_Qt_Framework->setText(QApplication::translate("MainWindow", "About the &Qt Framework...", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        actionAbout_Qt_Framework->setStatusTip(QApplication::translate("MainWindow", "Displays information about Qt", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        actionReset_Marked->setText(QApplication::translate("MainWindow", "&Reset All", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        actionReset_Marked->setStatusTip(QApplication::translate("MainWindow", "Clears all selections and sets Quantity to 1", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        actionReset_Marked->setShortcut(QApplication::translate("MainWindow", "F5", 0, QApplication::UnicodeUTF8));
        actionReset_Antigens->setText(QApplication::translate("MainWindow", "Reset &Antigens", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        actionReset_Antigens->setStatusTip(QApplication::translate("MainWindow", "Clears only the Antigen Selections", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        actionReset_Antigens->setShortcut(QApplication::translate("MainWindow", "F6", 0, QApplication::UnicodeUTF8));
        actionReset_Rh_Factor->setText(QApplication::translate("MainWindow", "Reset Rh &Factor", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        actionReset_Rh_Factor->setStatusTip(QApplication::translate("MainWindow", "Clears only the Rh Factor selection", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        actionReset_Rh_Factor->setShortcut(QApplication::translate("MainWindow", "F7", 0, QApplication::UnicodeUTF8));
        actionReset_Quantity->setText(QApplication::translate("MainWindow", "Reset &Quantity", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        actionReset_Quantity->setStatusTip(QApplication::translate("MainWindow", "Sets Quantity back to 1", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        actionReset_Quantity->setShortcut(QApplication::translate("MainWindow", "F8", 0, QApplication::UnicodeUTF8));
        grp_antigens->setTitle(QApplication::translate("MainWindow", "Antigen Selection", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        btn_N->setStatusTip(QApplication::translate("MainWindow", "Anti-N (MNS System)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        btn_N->setText(QApplication::translate("MainWindow", "N", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        btn_M->setStatusTip(QApplication::translate("MainWindow", "Anti-M (MNS System)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        btn_M->setText(QApplication::translate("MainWindow", "M", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        btn_C->setStatusTip(QApplication::translate("MainWindow", "Anti-C (Rhesus Antibody)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        btn_C->setText(QApplication::translate("MainWindow", "C", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        btn_c->setStatusTip(QApplication::translate("MainWindow", "Anti-c (Rhesus Antibody)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        btn_c->setText(QApplication::translate("MainWindow", "c", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        btn_E->setStatusTip(QApplication::translate("MainWindow", "Anti-E (Rhesus Antibody)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        btn_E->setText(QApplication::translate("MainWindow", "E", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        btn_e->setStatusTip(QApplication::translate("MainWindow", "Anti-e (Rhesus Antibody)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        btn_e->setText(QApplication::translate("MainWindow", "e", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        btn_K->setStatusTip(QApplication::translate("MainWindow", "Kell Antigen (Kell System)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        btn_K->setText(QApplication::translate("MainWindow", "K", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        btn_k->setStatusTip(QApplication::translate("MainWindow", "Cellano Antigen (Kell System)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        btn_k->setText(QApplication::translate("MainWindow", "k", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        btn_Fya->setStatusTip(QApplication::translate("MainWindow", "Anti-Fya (Duffy System)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        btn_Fya->setText(QApplication::translate("MainWindow", "Fya", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        btn_S->setStatusTip(QApplication::translate("MainWindow", "Anti-S (MNS System)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        btn_S->setText(QApplication::translate("MainWindow", "S", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        btn_s->setStatusTip(QApplication::translate("MainWindow", "Anti-s (MNS System)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        btn_s->setText(QApplication::translate("MainWindow", "s", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        btn_Fyb->setStatusTip(QApplication::translate("MainWindow", "Anti-Fyb (Duffy System)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        btn_Fyb->setText(QApplication::translate("MainWindow", "Fyb", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        btn_Lea->setStatusTip(QApplication::translate("MainWindow", "Lewis-A Antibody", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        btn_Lea->setText(QApplication::translate("MainWindow", "Lea", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        btn_Leb->setStatusTip(QApplication::translate("MainWindow", "Lewis-B Antibody", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        btn_Leb->setText(QApplication::translate("MainWindow", "Leb", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        btn_Jka->setStatusTip(QApplication::translate("MainWindow", "Anti-Jka (Kidd System)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        btn_Jka->setText(QApplication::translate("MainWindow", "Jka", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        btn_Jkb->setStatusTip(QApplication::translate("MainWindow", "Anti-Jkb (Kidd System)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        btn_Jkb->setText(QApplication::translate("MainWindow", "Jkb", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        btn_P1->setStatusTip(QApplication::translate("MainWindow", "Anti-P1 (P System)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        btn_P1->setText(QApplication::translate("MainWindow", "P1", 0, QApplication::UnicodeUTF8));
        grp_Rh->setTitle(QApplication::translate("MainWindow", "Rh Factor", 0, QApplication::UnicodeUTF8));
        rad_pos->setText(QApplication::translate("MainWindow", "Positive", 0, QApplication::UnicodeUTF8));
        rad_neg->setText(QApplication::translate("MainWindow", "Negative", 0, QApplication::UnicodeUTF8));
        grp_qty->setTitle(QApplication::translate("MainWindow", "Quantity", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        spin_qty->setStatusTip(QApplication::translate("MainWindow", "Number of antigen-negative units for the patient", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        label->setText(QApplication::translate("MainWindow", "# of Units:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        btn_reset->setStatusTip(QApplication::translate("MainWindow", "Restores selections to their original state (F5)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        btn_reset->setText(QApplication::translate("MainWindow", "  Reset All  ", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        btn_quit->setStatusTip(QApplication::translate("MainWindow", "Closes this window and exits the program (Escape)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        btn_quit->setText(QApplication::translate("MainWindow", "  Exit  ", 0, QApplication::UnicodeUTF8));
        lab_units->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\">Units to Antigen-Type:</p></body></html>", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        lab_output->setStatusTip(QApplication::translate("MainWindow", "Automatically updates as selections are made", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        lab_output->setText(QApplication::translate("MainWindow", "<html><head/><body><p/></body></html>", 0, QApplication::UnicodeUTF8));
        menuRCcompat3->setTitle(QApplication::translate("MainWindow", "&Calculator", 0, QApplication::UnicodeUTF8));
        menuHelp->setTitle(QApplication::translate("MainWindow", "&Help", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
