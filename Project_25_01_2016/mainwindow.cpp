#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    AddString("0");
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::AddString(QString display)
{
    strings.push_back(QString());
    dotClicked = false;
    ui->lcdNumber->display(display);

    ui->textBrowser->setText("");

    foreach(auto t, strings)
    {
        ui->textBrowser->setText(ui->textBrowser->document()->toPlainText() + t);
    }
}

void MainWindow::UpdateString()
{
    ui->lcdNumber->display(strings.back());

    ui->textBrowser->setText("");

    foreach(auto t, strings)
    {
        ui->textBrowser->setText(ui->textBrowser->document()->toPlainText() + t);
    }
}

QString MainWindow::Calculate(QString in)
{
    QString retVal = "";
    bool ok = false;
    retVal = in.toDouble(&ok);
    if (ok)
        return retVal;
    else
        return "1337";
}

void MainWindow::on_B0_clicked()
{
    strings.back() += "0";
    UpdateString();
}

void MainWindow::on_B1_clicked()
{
    strings.back() += "1";
    UpdateString();
}

void MainWindow::on_B2_clicked()
{
    strings.back() += "2";
    UpdateString();
}

void MainWindow::on_B3_clicked()
{
    strings.back() += "3";
    UpdateString();
}

void MainWindow::on_B4_clicked()
{
    strings.back() += "4";
    UpdateString();
}

void MainWindow::on_B5_clicked()
{
    strings.back() += "5";
    UpdateString();
}

void MainWindow::on_B6_clicked()
{
    strings.back() += "6";
    UpdateString();
}

void MainWindow::on_B7_clicked()
{
    strings.back() += "7";
    UpdateString();
}

void MainWindow::on_B8_clicked()
{
    strings.back() += "8";
    UpdateString();
}

void MainWindow::on_B9_clicked()
{
    strings.back() += "9";
    UpdateString();
}

void MainWindow::on_BClear_clicked()
{
    strings.clear();
    AddString("0");
    ui->lcdNumber->display("0");
}

void MainWindow::on_BDiv_clicked()
{
    if (strings.back().length() > 1)
    {
        strings.back() += "/";
        AddString("/");
    }
}

void MainWindow::on_BMul_clicked()
{
    if (strings.back().length() > 1)
    {
        strings.back() += "*";
        AddString("*");
    }
}

void MainWindow::on_BSubs_clicked()
{
    if (strings.back().length() > 1)
    {
        strings.back() += "-";
        AddString("-");
    }
}

void MainWindow::on_BAdd_clicked()
{
    if (strings.back().length() > 1)
    {
        strings.back() += "+";
        AddString("+");
    }
}

void MainWindow::on_BDot_clicked()
{
    if (!dotClicked)
    {
        strings.back() += ".";
        UpdateString();
        dotClicked = true;
    }
}

void MainWindow::on_BEqual_clicked()
{
    QString str = "";

    foreach(auto t, strings)
    {
        str += t;
    }

    Calculate(str);

    on_BClear_clicked();

    strings.back() += str;
    UpdateString();
}
