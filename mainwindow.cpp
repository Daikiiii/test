#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_2_clicked()
{
    QString str1=ui->lineEdit_2->text();
    QString str2=ui->lineEdit_3->text();
    QString str =str1+str2;
    ui->lineEdit->setText(str);
}
