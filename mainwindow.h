#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtWidgets/QApplication>
#include <QWidget>
#include <QtWidgets/QPushButton>
#include <QMessageBox>
#include <QApplication>
#include <QDebug>
#include <QWindow>

#include <QMessageBox>
#include <QDialog>
#include <QObject>
#include <QLineEdit>
#include <QLine>

#include <QSqlDatabase>
#include "ui_mainwindow.h"
#include <iostream>
#include <stdio.h>
#include <string.h>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

  /////////////////////////////////////
    struct Helder{
        char array[10]="Heldeer";
        int age=19;
        char *name;
    };
 //////////////////////////////////////

private slots:

    void on_select_all_button_clicked(); // Ecrit la forme de base d'une requête SELECT * dans le chanp query_field

    void on_local_mode_button_clicked(); // Nous fait passer sur une page de simulation de requête

    void on_select_button_clicked();  // Ecrit la forme de base d'une requête SELECT dans le chanp query_field

    void on_insert_button_clicked();  // Ecrit la forme de base d'une requête INSERT dans le chanp query_field

    void on_update_button_clicked();  // Ecrit la forme de base d'une requête UPDATE dans le chanp query_field

    void on_delete_button_clicked();  // Ecrit la forme de base d'une requête DELETE dans le chanp query_field

    void on_deletion_button_clicked(); // Vide le champ de requête

    void on_send_query_button_clicked();

    void on_back_to_login_page_clicked();

    void on_submit_user_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
