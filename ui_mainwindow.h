/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QStackedWidget *stackedWidget;
    QWidget *connexion_page;
    QLineEdit *username_field;
    QLineEdit *password_field;
    QPushButton *local_mode_button;
    QLabel *username_label;
    QLabel *password_label;
    QWidget *local_mode_page;
    QLineEdit *query_field;
    QPushButton *insert_button;
    QPushButton *update_button;
    QPushButton *delete_button;
    QPushButton *select_button;
    QPushButton *select_all_button;
    QPushButton *deletion_button;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1044, 632);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        stackedWidget = new QStackedWidget(centralWidget);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setGeometry(QRect(0, 0, 1041, 581));
        connexion_page = new QWidget();
        connexion_page->setObjectName(QStringLiteral("connexion_page"));
        username_field = new QLineEdit(connexion_page);
        username_field->setObjectName(QStringLiteral("username_field"));
        username_field->setGeometry(QRect(430, 140, 151, 21));
        password_field = new QLineEdit(connexion_page);
        password_field->setObjectName(QStringLiteral("password_field"));
        password_field->setGeometry(QRect(430, 210, 151, 21));
        local_mode_button = new QPushButton(connexion_page);
        local_mode_button->setObjectName(QStringLiteral("local_mode_button"));
        local_mode_button->setGeometry(QRect(470, 280, 81, 31));
        username_label = new QLabel(connexion_page);
        username_label->setObjectName(QStringLiteral("username_label"));
        username_label->setGeometry(QRect(350, 140, 71, 16));
        password_label = new QLabel(connexion_page);
        password_label->setObjectName(QStringLiteral("password_label"));
        password_label->setGeometry(QRect(350, 210, 51, 16));
        stackedWidget->addWidget(connexion_page);
        local_mode_page = new QWidget();
        local_mode_page->setObjectName(QStringLiteral("local_mode_page"));
        query_field = new QLineEdit(local_mode_page);
        query_field->setObjectName(QStringLiteral("query_field"));
        query_field->setGeometry(QRect(200, 460, 631, 31));
        insert_button = new QPushButton(local_mode_page);
        insert_button->setObjectName(QStringLiteral("insert_button"));
        insert_button->setGeometry(QRect(470, 500, 81, 31));
        update_button = new QPushButton(local_mode_page);
        update_button->setObjectName(QStringLiteral("update_button"));
        update_button->setGeometry(QRect(610, 500, 91, 31));
        delete_button = new QPushButton(local_mode_page);
        delete_button->setObjectName(QStringLiteral("delete_button"));
        delete_button->setGeometry(QRect(760, 500, 81, 31));
        select_button = new QPushButton(local_mode_page);
        select_button->setObjectName(QStringLiteral("select_button"));
        select_button->setGeometry(QRect(330, 500, 81, 31));
        select_all_button = new QPushButton(local_mode_page);
        select_all_button->setObjectName(QStringLiteral("select_all_button"));
        select_all_button->setGeometry(QRect(190, 500, 81, 31));
        select_all_button->setStyleSheet(QStringLiteral("<html><bold>select*</bold></html>"));
        deletion_button = new QPushButton(local_mode_page);
        deletion_button->setObjectName(QStringLiteral("deletion_button"));
        deletion_button->setGeometry(QRect(860, 460, 81, 31));
        stackedWidget->addWidget(local_mode_page);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1044, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
#ifndef QT_NO_TOOLTIP
        MainWindow->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Ce bouton sert \303\240 se <span style=\" font-weight:600;\">connecter</span></p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        local_mode_button->setText(QApplication::translate("MainWindow", "Mode Local", nullptr));
        username_label->setText(QApplication::translate("MainWindow", "Username", nullptr));
        password_label->setText(QApplication::translate("MainWindow", "Password", nullptr));
        insert_button->setText(QApplication::translate("MainWindow", "Insert", nullptr));
        update_button->setText(QApplication::translate("MainWindow", "Update", nullptr));
        delete_button->setText(QApplication::translate("MainWindow", "Delete", nullptr));
        select_button->setText(QApplication::translate("MainWindow", "Select", nullptr));
        select_all_button->setText(QApplication::translate("MainWindow", "Select *", nullptr));
        deletion_button->setText(QApplication::translate("MainWindow", "Delete field", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
