/********************************************************************************
** Form generated from reading UI file 'mainmenu.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINMENU_H
#define UI_MAINMENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainMenu
{
public:
    QWidget *centralwidget;
    QLabel *title;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *start_play;
    QPushButton *exit;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainMenu)
    {
        if (MainMenu->objectName().isEmpty())
            MainMenu->setObjectName(QString::fromUtf8("MainMenu"));
        MainMenu->setEnabled(true);
        MainMenu->resize(300, 311);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainMenu->sizePolicy().hasHeightForWidth());
        MainMenu->setSizePolicy(sizePolicy);
        MainMenu->setMinimumSize(QSize(300, 300));
        MainMenu->setMaximumSize(QSize(800, 800));
        MainMenu->setMouseTracking(false);
        MainMenu->setStyleSheet(QString::fromUtf8("\n"
"   QWidget\n"
"{\n"
"    background-image: url(:/images/rectangle.png);\n"
"    background-repeat: no-repeat;\n"
"    background-position: center;\n"
"    /*border: 2px solid white;  \320\263\321\200\320\260\320\275\320\270\321\206\320\260 */\n"
"    background-attachment: fixed; /* \320\227\320\260\321\204\320\270\320\272\321\201\320\270\321\200\320\276\320\262\320\260\321\202\321\214 \321\204\320\276\320\275\320\276\320\262\320\276\320\265 \320\270\320\267\320\276\320\261\321\200\320\260\320\266\320\265\320\275\320\270\320\265 */\n"
"border: none;\n"
"background-color: transparent; /* \320\224\320\265\320\273\320\260\320\265\321\202 \321\204\320\276\320\275 \320\276\320\272\320\275\320\260 \320\277\321\200\320\276\320\267\321\200\320\260\321\207\320\275\321\213\320\274 */\n"
"    \n"
"    \n"
"\n"
"    \n"
"}\n"
""));
        centralwidget = new QWidget(MainMenu);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        title = new QLabel(centralwidget);
        title->setObjectName(QString::fromUtf8("title"));
        title->setGeometry(QRect(100, 20, 101, 21));
        title->setStyleSheet(QString::fromUtf8("\n"
"     QLabel {\n"
"    background-image: url(:/images/title.png);\n"
"    background-repeat: no-repeat;\n"
"    background-position: center;\n"
"    color: black;\n"
"    font-size: 16px;\n"
"}\n"
""));
        title->setAlignment(Qt::AlignCenter);
        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(60, 80, 181, 191));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        start_play = new QPushButton(verticalLayoutWidget);
        start_play->setObjectName(QString::fromUtf8("start_play"));
        sizePolicy.setHeightForWidth(start_play->sizePolicy().hasHeightForWidth());
        start_play->setSizePolicy(sizePolicy);
        start_play->setMaximumSize(QSize(16777215, 40));
        start_play->setStyleSheet(QString::fromUtf8("\n"
"        QPushButton {\n"
"    background-image: url(:/images/button.png);\n"
"    background-repeat: no-repeat;\n"
"    background-position: center;\n"
"    color: black;\n"
"    font-size: 16px;\n"
"}\n"
""));

        verticalLayout->addWidget(start_play);

        exit = new QPushButton(verticalLayoutWidget);
        exit->setObjectName(QString::fromUtf8("exit"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(exit->sizePolicy().hasHeightForWidth());
        exit->setSizePolicy(sizePolicy1);
        exit->setMaximumSize(QSize(16777215, 40));
        exit->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-image: url(:/images/button.png);\n"
"    background-repeat: no-repeat;\n"
"    background-position: center;\n"
"    color: black;\n"
"    font-size: 16px;\n"
"}"));

        verticalLayout->addWidget(exit);

        MainMenu->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainMenu);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 300, 22));
        MainMenu->setMenuBar(menubar);
        statusbar = new QStatusBar(MainMenu);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        statusbar->setSizeGripEnabled(false);
        MainMenu->setStatusBar(statusbar);

        retranslateUi(MainMenu);

        QMetaObject::connectSlotsByName(MainMenu);
    } // setupUi

    void retranslateUi(QMainWindow *MainMenu)
    {
        MainMenu->setWindowTitle(QCoreApplication::translate("MainMenu", "MainWindow", nullptr));
#if QT_CONFIG(accessibility)
        MainMenu->setAccessibleName(QCoreApplication::translate("MainMenu", "MainMenu", nullptr));
#endif // QT_CONFIG(accessibility)
        title->setText(QCoreApplication::translate("MainMenu", "Mind Sharp", nullptr));
        start_play->setText(QCoreApplication::translate("MainMenu", "Start Play", nullptr));
        exit->setText(QCoreApplication::translate("MainMenu", "Exit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainMenu: public Ui_MainMenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINMENU_H
