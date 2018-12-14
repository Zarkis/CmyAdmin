/********************************************************************************
** Form generated from reading UI file 'localmod.ui'
**
** Created by: Qt User Interface Compiler version 5.11.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOCALMOD_H
#define UI_LOCALMOD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCommandLinkButton>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LocalMod
{
public:
    QWidget *centralwidget;
    QToolButton *toolButton;
    QRadioButton *radioButton;
    QCommandLinkButton *commandLinkButton;
    QPushButton *pushButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *LocalMod)
    {
        if (LocalMod->objectName().isEmpty())
            LocalMod->setObjectName(QStringLiteral("LocalMod"));
        LocalMod->resize(800, 600);
        centralwidget = new QWidget(LocalMod);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        toolButton = new QToolButton(centralwidget);
        toolButton->setObjectName(QStringLiteral("toolButton"));
        toolButton->setGeometry(QRect(320, 220, 25, 19));
        radioButton = new QRadioButton(centralwidget);
        radioButton->setObjectName(QStringLiteral("radioButton"));
        radioButton->setGeometry(QRect(220, 330, 82, 17));
        commandLinkButton = new QCommandLinkButton(centralwidget);
        commandLinkButton->setObjectName(QStringLiteral("commandLinkButton"));
        commandLinkButton->setGeometry(QRect(390, 130, 172, 41));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(210, 80, 75, 23));
        LocalMod->setCentralWidget(centralwidget);
        menubar = new QMenuBar(LocalMod);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        LocalMod->setMenuBar(menubar);
        statusbar = new QStatusBar(LocalMod);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        LocalMod->setStatusBar(statusbar);

        retranslateUi(LocalMod);

        QMetaObject::connectSlotsByName(LocalMod);
    } // setupUi

    void retranslateUi(QMainWindow *LocalMod)
    {
        LocalMod->setWindowTitle(QApplication::translate("LocalMod", "MainWindow", nullptr));
        toolButton->setText(QApplication::translate("LocalMod", "...", nullptr));
        radioButton->setText(QApplication::translate("LocalMod", "RadioButton", nullptr));
        commandLinkButton->setText(QApplication::translate("LocalMod", "CommandLinkButton", nullptr));
        pushButton->setText(QApplication::translate("LocalMod", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LocalMod: public Ui_LocalMod {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOCALMOD_H
