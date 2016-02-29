#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QLayout"

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
    ui->widget->setCurTime();
}

void MainWindow::on_pushButton_clicked()
{
    ui->widget->setDateTime(ui->dateTimeEdit->dateTime());
    //ui->widget->setDate(ui->dateTimeEdit->date());
    //ui->widget->setTime(ui->dateTimeEdit->time());
}
