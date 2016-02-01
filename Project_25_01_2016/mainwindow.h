#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:

    void on_B0_clicked();

    void on_B1_clicked();

    void on_B2_clicked();

    void on_B3_clicked();

    void on_B4_clicked();

    void on_B5_clicked();

    void on_B6_clicked();

    void on_B7_clicked();

    void on_B8_clicked();

    void on_B9_clicked();

    void on_BClear_clicked();

    void on_BDiv_clicked();

    void on_BMul_clicked();

    void on_BSubs_clicked();

    void on_BAdd_clicked();

    void on_BDot_clicked();

    void on_BEqual_clicked();

private:

    void AddString(QString display);

    void UpdateString();

    QString Calculate(QString in);

    QVector<QString> strings;

    bool dotClicked;

    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
