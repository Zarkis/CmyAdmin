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
#include <QtWidgets/QRadioButton>
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
    QWidget *user_creation_page;
    QLineEdit *username_creation;
    QLineEdit *password_creation;
    QPushButton *submit_user;
    QPushButton *back_to_login_page;
    QLabel *username_label_2;
    QLabel *password_label_2;
    QWidget *local_mode_page;
    QLineEdit *query_field;
    QPushButton *insert_button;
    QPushButton *update_button;
    QPushButton *delete_button;
    QPushButton *select_button;
    QPushButton *select_all_button;
    QPushButton *deletion_button;
    QPushButton *send_query_button;
    QWidget *creation_db_page;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QRadioButton *radioButton;
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
        user_creation_page = new QWidget();
        user_creation_page->setObjectName(QStringLiteral("user_creation_page"));
        username_creation = new QLineEdit(user_creation_page);
        username_creation->setObjectName(QStringLiteral("username_creation"));
        username_creation->setGeometry(QRect(440, 140, 171, 21));
        password_creation = new QLineEdit(user_creation_page);
        password_creation->setObjectName(QStringLiteral("password_creation"));
        password_creation->setGeometry(QRect(440, 180, 171, 20));
        submit_user = new QPushButton(user_creation_page);
        submit_user->setObjectName(QStringLiteral("submit_user"));
        submit_user->setGeometry(QRect(490, 220, 75, 23));
        back_to_login_page = new QPushButton(user_creation_page);
        back_to_login_page->setObjectName(QStringLiteral("back_to_login_page"));
        back_to_login_page->setGeometry(QRect(440, 270, 171, 51));
        username_label_2 = new QLabel(user_creation_page);
        username_label_2->setObjectName(QStringLiteral("username_label_2"));
        username_label_2->setGeometry(QRect(370, 140, 51, 20));
        password_label_2 = new QLabel(user_creation_page);
        password_label_2->setObjectName(QStringLiteral("password_label_2"));
        password_label_2->setGeometry(QRect(370, 180, 51, 20));
        stackedWidget->addWidget(user_creation_page);
        local_mode_page = new QWidget();
        local_mode_page->setObjectName(QStringLiteral("local_mode_page"));
        query_field = new QLineEdit(local_mode_page);
        query_field->setObjectName(QStringLiteral("query_field"));
        query_field->setGeometry(QRect(140, 410, 781, 31));
        insert_button = new QPushButton(local_mode_page);
        insert_button->setObjectName(QStringLiteral("insert_button"));
        insert_button->setGeometry(QRect(420, 450, 81, 31));
        update_button = new QPushButton(local_mode_page);
        update_button->setObjectName(QStringLiteral("update_button"));
        update_button->setGeometry(QRect(560, 450, 91, 31));
        delete_button = new QPushButton(local_mode_page);
        delete_button->setObjectName(QStringLiteral("delete_button"));
        delete_button->setGeometry(QRect(710, 450, 81, 31));
        select_button = new QPushButton(local_mode_page);
        select_button->setObjectName(QStringLiteral("select_button"));
        select_button->setGeometry(QRect(270, 450, 81, 31));
        select_all_button = new QPushButton(local_mode_page);
        select_all_button->setObjectName(QStringLiteral("select_all_button"));
        select_all_button->setGeometry(QRect(140, 450, 81, 31));
        select_all_button->setStyleSheet(QStringLiteral("<html><bold>select*</bold></html>"));
        deletion_button = new QPushButton(local_mode_page);
        deletion_button->setObjectName(QStringLiteral("deletion_button"));
        deletion_button->setGeometry(QRect(840, 450, 81, 31));
        send_query_button = new QPushButton(local_mode_page);
        send_query_button->setObjectName(QStringLiteral("send_query_button"));
        send_query_button->setGeometry(QRect(500, 510, 81, 31));
        stackedWidget->addWidget(local_mode_page);
        creation_db_page = new QWidget();
        creation_db_page->setObjectName(QStringLiteral("creation_db_page"));
        pushButton = new QPushButton(creation_db_page);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(660, 480, 75, 23));
        pushButton_2 = new QPushButton(creation_db_page);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(490, 490, 75, 23));
        pushButton_3 = new QPushButton(creation_db_page);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(380, 340, 75, 23));
        radioButton = new QRadioButton(creation_db_page);
        radioButton->setObjectName(QStringLiteral("radioButton"));
        radioButton->setGeometry(QRect(280, 280, 82, 17));
        stackedWidget->addWidget(creation_db_page);
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
        submit_user->setText(QApplication::translate("MainWindow", "Soumettre", nullptr));
        back_to_login_page->setText(QApplication::translate("MainWindow", "Back at login page", nullptr));
        username_label_2->setText(QApplication::translate("MainWindow", "Username", nullptr));
        password_label_2->setText(QApplication::translate("MainWindow", "Password", nullptr));
        insert_button->setText(QApplication::translate("MainWindow", "Insert", nullptr));
        update_button->setText(QApplication::translate("MainWindow", "Update", nullptr));
        delete_button->setText(QApplication::translate("MainWindow", "Delete", nullptr));
        select_button->setText(QApplication::translate("MainWindow", "Select", nullptr));
        select_all_button->setText(QApplication::translate("MainWindow", "Select *", nullptr));
        deletion_button->setText(QApplication::translate("MainWindow", "Delete field", nullptr));
        send_query_button->setText(QApplication::translate("MainWindow", "Send Query", nullptr));
        pushButton->setText(QApplication::translate("MainWindow", "PushButton", nullptr));
        pushButton_2->setText(QApplication::translate("MainWindow", "PushButton", nullptr));
        pushButton_3->setText(QApplication::translate("MainWindow", "PushButton", nullptr));
        radioButton->setText(QApplication::translate("MainWindow", "RadioButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
