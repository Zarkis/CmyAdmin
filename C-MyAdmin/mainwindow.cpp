#include "mainwindow.h"
#include<sys/stat.h>
#include<unistd.h>
#include <cstdio>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{

    ui->setupUi(this);
   // ui->stackedWidget->setCurrentIndex(0);
    this->setWindowTitle("Bienvenue sur C-My Admin ! :)");
   // connect(select_all_button,,SIGNAL(clicked()),this,SLOT(on_select_all_button_clicked()))

}



MainWindow::~MainWindow()
{
    delete ui;
}

// ZONE CODE PAGE DE CONNEXION ui->stackedWidget->setCurrentIndex(0); pour se déplacer page 1

void MainWindow::on_local_mode_button_clicked()
{
    char*usr;
    char*pwd;
    char buffer[50];
    FILE* connectFile;
    QString valuefield = ui->username_field->text();
    QByteArray enbyte = valuefield.toLocal8Bit();
    char *array = (char *)strdup(enbyte.constData()); // strdup alloue dynamiquement l'espace nécessaire à la copy --> Il faut donc le free
    usr=(char*)malloc(strlen(array)*sizeof(char));
    strcpy(usr,array);
    free(array);
    qDebug() << usr;


    QString valuefield2 = ui->password_field->text();
    QByteArray tobyte = valuefield2.toLocal8Bit();
    array = (char *)strdup(tobyte.constData());
    pwd=(char*)malloc(strlen(array)*sizeof(char));
    strcpy(pwd,array);
    free(array);
    qDebug() << pwd;
    connectFile=fopen("account_data.txt","rb");

    if(connectFile!=NULL){
       QMessageBox::information(this,"Le fichier existe","OUI !");
       fgets(buffer,6,connectFile);
       printf("%s",buffer);
    }else {
        QMessageBox::critical(this,"Le fichier n'existe pas !","Impossible d'ouvrir le fichier !");
    }
}
    //ui->stackedWidget->setCurrentIndex(2);

// FIN ZONE PAGE DE CONNEXION

////////////////////////////////////////////////////////////////////////////////////////

// ZONE CODE PAGE DE REQUÊTE ui->stackedWidget->setCurrentIndex(1); pour se déplacer page 2

void MainWindow::on_select_all_button_clicked()
{
    ui->query_field->setText("SELECT * FROM `table_name`");
}

void MainWindow::on_select_button_clicked()
{
    ui->query_field->setText("SELECT * FROM `attribute_name`");
}

void MainWindow::on_insert_button_clicked()
{
     ui->query_field->setText("INSERT INTO `attribute_name` FROM `table_name` WHERE 1'");
}

void MainWindow::on_update_button_clicked()
{
    ui->query_field->setText("UPDATE `table_name` SET `id`=[value-1],`username`=[value-2],`pwd`=[value-3],`email`=[value-4] WHERE 1");
}

void MainWindow::on_delete_button_clicked()
{
    ui->query_field->setText(" DELETE FROM `table_name` WHERE `value`");
}

void MainWindow::on_deletion_button_clicked()
{
    ui->query_field->setText("");
}

void MainWindow::on_send_query_button_clicked()
{

    FILE* toDownload;
    char* query;
    QString valuefield = ui->query_field->text();
    QByteArray enbyte = valuefield.toLocal8Bit();
    char *array = (char *)strdup(enbyte.constData());
    query=(char*)malloc(strlen(array)*sizeof(char));
    strcpy(query,array);
    free(array);

    qDebug() << query;

    //if (fopen(chemin,"r")!=NULL)
    toDownload = fopen("extactsql.txt","ab+"); //Tous les droits + binarisation car on ne connait pas le format de lecture de mysql


    if(toDownload!=NULL){
        int size=0;
        fputs(query,toDownload);
        QMessageBox::information(this,"Fichier créé !","Le fichier est créé et rempli !");
        size=fseek(toDownload,0,SEEK_END);
        //ftell(size);
        fclose(toDownload);
        free(query);
    }else{
        QMessageBox::critical(this,"Erreur fichier !","On dirait que votre fichier ne s'est pas créé");
        fclose(toDownload);
        free(query);
    }
}

// FIN ZONE CODE PAGE DE REQUÊTE

// DEBUT PAGE DE CREATION DE COMPTE
void MainWindow::on_back_to_login_page_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void MainWindow::on_submit_user_clicked()
{
    char *usr;
    char *pwd;
    FILE* userdata;

    QString usernamefield = ui->username_creation->text();
    QByteArray toByte = usernamefield.toLocal8Bit();  /*https://stackoverflow.com/questions/21857473/convert-qstring-into-unsigned-char-array */
    char *username = (char *)strdup(toByte.constData());

     usr=(char*)malloc(sizeof(char)*strlen(username));

     free(username);

     strcpy(usr,username);

     QString passwordfield = ui->password_creation->text();
     QByteArray arrayByte = passwordfield.toLocal8Bit();
     char *password =  (char *)strdup(arrayByte.constData());

     pwd=(char*)malloc(sizeof(char)*strlen(password));

     strcpy(pwd,password);


     qDebug() << usr;

     qDebug() << pwd;

    userdata = fopen("account_data.txt","ab+"); //Tous les droits ajout !
    if(usr!=NULL && pwd!=NULL){
        fputs(usr,userdata);
        fputs(pwd,userdata);
        fflush(userdata);
        QMessageBox::information(this,"Création de compte réussie","Votre compte est bien créé !!");
        free(usr);
        free(pwd);
        fclose(userdata);
    }else {
        QMessageBox::critical(this,"Erreur d'inscription","Je sais pas gros");
        free(usr);
        free(pwd);
        fclose(userdata);
    }

}
//FIN PAGE CREATION DE COMPTE

