/********************************************************************************
** Form generated from reading UI file 'menu_start_play.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MENU_START_PLAY_H
#define UI_MENU_START_PLAY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MenuStartPlay
{
public:
    QWidget *centralwidget;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *info;
    QLineEdit *input;
    QPushButton *run;
    QPushButton *back;
    QMenuBar *menubar;
    QLabel *title;

    void setupUi(QWidget *MenuStartPlay)
    {
        if (MenuStartPlay->objectName().isEmpty())
            MenuStartPlay->setObjectName(QString::fromUtf8("MenuStartPlay"));
        MenuStartPlay->setEnabled(true);
        MenuStartPlay->resize(300, 311);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MenuStartPlay->sizePolicy().hasHeightForWidth());
        MenuStartPlay->setSizePolicy(sizePolicy);
        MenuStartPlay->setMinimumSize(QSize(300, 300));
        MenuStartPlay->setMaximumSize(QSize(800, 800));
        MenuStartPlay->setMouseTracking(false);
        MenuStartPlay->setStyleSheet(QString::fromUtf8("\n"
"   QWidget\n"
"{\n"
"    background-image: url(:/images/rectangle.png);\n"
"    background-repeat: no-repeat;\n"
"    background-position: center;\n"
"    /*border: 2px solid white;  \320\263\321\200\320\260\320\275\320\270\321\206\320\260 */\n"
"    background-attachment: fixed; /* \320\227\320\260\321\204\320\270\320\272\321\201\320\270\321\200\320\276\320\262\320\260\321\202\321\214 \321\204\320\276\320\275\320\276\320\262\320\276\320\265 \320\270\320\267\320\276\320\261\321\200\320\260\320\266\320\265\320\275\320\270\320\265 */\n"
"border: none;\n"
"background-color: transparent; /* \320\224\320\265\320\273\320\260\320\265\321\202 \321\204\320\276\320\275 \320\276\320\272\320\275\320\260 \320\277\321\200\320\276\320\267\321\200\320\260\321\207\320\275\321\213\320\274 */\n"
"  \n"
"    \n"
"}\n"
""));
        centralwidget = new QWidget(MenuStartPlay);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setGeometry(QRect(0, 20, 300, 311));
        centralwidget->setStyleSheet(QString::fromUtf8("QWidget\n"
"{\n"
"	background-image: url(:/images/rectangle.png);\n"
"    background-repeat: no-repeat;\n"
"    background-position: center;\n"
"    /*border: 2px solid white;  \320\263\321\200\320\260\320\275\320\270\321\206\320\260 */\n"
"    background-attachment: fixed; /* \320\227\320\260\321\204\320\270\320\272\321\201\320\270\321\200\320\276\320\262\320\260\321\202\321\214 \321\204\320\276\320\275\320\276\320\262\320\276\320\265 \320\270\320\267\320\276\320\261\321\200\320\260\320\266\320\265\320\275\320\270\320\265 */\n"
"	border: none;\n"
"	background-color: transparent; /* \320\224\320\265\320\273\320\260\320\265\321\202 \321\204\320\276\320\275 \320\276\320\272\320\275\320\260 \320\277\321\200\320\276\320\267\321\200\320\260\321\207\320\275\321\213\320\274 */\n"
"}"));
        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(40, 10, 221, 251));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        info = new QLabel(verticalLayoutWidget);
        info->setObjectName(QString::fromUtf8("info"));
        sizePolicy.setHeightForWidth(info->sizePolicy().hasHeightForWidth());
        info->setSizePolicy(sizePolicy);
        info->setMinimumSize(QSize(0, 0));
        info->setMaximumSize(QSize(16777215, 120));
        QFont font;
        info->setFont(font);
        info->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"   background-image: url(:/images/button.png);\n"
"    border: none;\n"
"    background-repeat: no-repeat;\n"
"    background-position: center;\n"
"    color: black;\n"
"    \n"
"}"));
        info->setScaledContents(false);
        info->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(info);

        input = new QLineEdit(verticalLayoutWidget);
        input->setObjectName(QString::fromUtf8("input"));
        input->setMaximumSize(QSize(16777215, 20));
        input->setStyleSheet(QString::fromUtf8("QLineEdit\n"
" {\n"
"    background-image: url(:/images/button.png);\n"
"    background-repeat: no-repeat;\n"
"    background-position: center;\n"
"    color: black;\n"
"    font-size: 16px;\n"
"}"));

        verticalLayout->addWidget(input);

        run = new QPushButton(verticalLayoutWidget);
        run->setObjectName(QString::fromUtf8("run"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(run->sizePolicy().hasHeightForWidth());
        run->setSizePolicy(sizePolicy1);
        run->setMaximumSize(QSize(16777215, 20));
        run->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-image: url(:/images/button.png);\n"
"    background-repeat: no-repeat;\n"
"    background-position: center;\n"
"    color: black;\n"
"    font-size: 16px;\n"
"}"));

        verticalLayout->addWidget(run);

        back = new QPushButton(centralwidget);
        back->setObjectName(QString::fromUtf8("back"));
        back->setGeometry(QRect(90, 260, 121, 21));
        sizePolicy1.setHeightForWidth(back->sizePolicy().hasHeightForWidth());
        back->setSizePolicy(sizePolicy1);
        back->setMaximumSize(QSize(16777215, 40));
        back->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-image: url(:/images/rectangle.png);\n"
"    background-repeat: no-repeat;\n"
"    background-position: center;\n"
"    color: black;\n"
"    font-size: 13px;\n"
"}"));
        menubar = new QMenuBar(MenuStartPlay);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 300, 22));
        title = new QLabel(MenuStartPlay);
        title->setObjectName(QString::fromUtf8("title"));
        title->setGeometry(QRect(100, 0, 101, 16));
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

        retranslateUi(MenuStartPlay);

        QMetaObject::connectSlotsByName(MenuStartPlay);
    } // setupUi

    void retranslateUi(QWidget *MenuStartPlay)
    {
        MenuStartPlay->setWindowTitle(QCoreApplication::translate("MenuStartPlay", "MainWindow", nullptr));
#if QT_CONFIG(accessibility)
        MenuStartPlay->setAccessibleName(QCoreApplication::translate("MenuStartPlay", "MainMenu", nullptr));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        info->setAccessibleName(QCoreApplication::translate("MenuStartPlay", "info", nullptr));
#endif // QT_CONFIG(accessibility)
        info->setText(QCoreApplication::translate("MenuStartPlay", "TextLabel", nullptr));
#if QT_CONFIG(accessibility)
        input->setAccessibleName(QCoreApplication::translate("MenuStartPlay", "input", nullptr));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        run->setAccessibleName(QCoreApplication::translate("MenuStartPlay", "back", nullptr));
#endif // QT_CONFIG(accessibility)
        run->setText(QCoreApplication::translate("MenuStartPlay", "Run", nullptr));
#if QT_CONFIG(accessibility)
        back->setAccessibleName(QCoreApplication::translate("MenuStartPlay", "back", nullptr));
#endif // QT_CONFIG(accessibility)
        back->setText(QCoreApplication::translate("MenuStartPlay", "Return", nullptr));
        title->setText(QCoreApplication::translate("MenuStartPlay", "Mind Sharp", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MenuStartPlay: public Ui_MenuStartPlay {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MENU_START_PLAY_H
