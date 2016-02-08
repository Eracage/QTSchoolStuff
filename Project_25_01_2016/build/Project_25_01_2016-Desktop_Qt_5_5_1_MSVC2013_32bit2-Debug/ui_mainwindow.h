/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QTextEdit *textEdit;
    QLCDNumber *lcdNumber;
    QTextBrowser *textBrowser;
    QGridLayout *gridLayout;
    QPushButton *B9;
    QPushButton *BClear;
    QPushButton *B6;
    QPushButton *B4;
    QPushButton *BDiv;
    QPushButton *B5;
    QPushButton *B3;
    QPushButton *BMul;
    QPushButton *BDot;
    QPushButton *B7;
    QPushButton *B8;
    QPushButton *B2;
    QPushButton *B1;
    QPushButton *BSubs;
    QPushButton *BAdd;
    QPushButton *BEqual;
    QPushButton *B0;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(562, 595);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        textEdit = new QTextEdit(centralWidget);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setFocusPolicy(Qt::StrongFocus);

        verticalLayout->addWidget(textEdit);

        lcdNumber = new QLCDNumber(centralWidget);
        lcdNumber->setObjectName(QStringLiteral("lcdNumber"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lcdNumber->sizePolicy().hasHeightForWidth());
        lcdNumber->setSizePolicy(sizePolicy);
        lcdNumber->setMinimumSize(QSize(0, 50));
        lcdNumber->setMaximumSize(QSize(16777215, 100));
        lcdNumber->setDigitCount(10);

        verticalLayout->addWidget(lcdNumber);

        textBrowser = new QTextBrowser(centralWidget);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));

        verticalLayout->addWidget(textBrowser);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        B9 = new QPushButton(centralWidget);
        B9->setObjectName(QStringLiteral("B9"));
        sizePolicy.setHeightForWidth(B9->sizePolicy().hasHeightForWidth());
        B9->setSizePolicy(sizePolicy);
        B9->setMinimumSize(QSize(0, 0));

        gridLayout->addWidget(B9, 1, 2, 1, 1);

        BClear = new QPushButton(centralWidget);
        BClear->setObjectName(QStringLiteral("BClear"));
        sizePolicy.setHeightForWidth(BClear->sizePolicy().hasHeightForWidth());
        BClear->setSizePolicy(sizePolicy);
        BClear->setMinimumSize(QSize(0, 0));

        gridLayout->addWidget(BClear, 0, 0, 1, 1);

        B6 = new QPushButton(centralWidget);
        B6->setObjectName(QStringLiteral("B6"));
        sizePolicy.setHeightForWidth(B6->sizePolicy().hasHeightForWidth());
        B6->setSizePolicy(sizePolicy);
        B6->setMinimumSize(QSize(0, 0));

        gridLayout->addWidget(B6, 2, 2, 1, 1);

        B4 = new QPushButton(centralWidget);
        B4->setObjectName(QStringLiteral("B4"));
        sizePolicy.setHeightForWidth(B4->sizePolicy().hasHeightForWidth());
        B4->setSizePolicy(sizePolicy);
        B4->setMinimumSize(QSize(0, 0));

        gridLayout->addWidget(B4, 2, 0, 1, 1);

        BDiv = new QPushButton(centralWidget);
        BDiv->setObjectName(QStringLiteral("BDiv"));
        sizePolicy.setHeightForWidth(BDiv->sizePolicy().hasHeightForWidth());
        BDiv->setSizePolicy(sizePolicy);
        BDiv->setMinimumSize(QSize(0, 0));

        gridLayout->addWidget(BDiv, 0, 1, 1, 1);

        B5 = new QPushButton(centralWidget);
        B5->setObjectName(QStringLiteral("B5"));
        sizePolicy.setHeightForWidth(B5->sizePolicy().hasHeightForWidth());
        B5->setSizePolicy(sizePolicy);
        B5->setMinimumSize(QSize(0, 0));

        gridLayout->addWidget(B5, 2, 1, 1, 1);

        B3 = new QPushButton(centralWidget);
        B3->setObjectName(QStringLiteral("B3"));
        sizePolicy.setHeightForWidth(B3->sizePolicy().hasHeightForWidth());
        B3->setSizePolicy(sizePolicy);
        B3->setMinimumSize(QSize(0, 0));

        gridLayout->addWidget(B3, 3, 2, 1, 1);

        BMul = new QPushButton(centralWidget);
        BMul->setObjectName(QStringLiteral("BMul"));
        sizePolicy.setHeightForWidth(BMul->sizePolicy().hasHeightForWidth());
        BMul->setSizePolicy(sizePolicy);
        BMul->setMinimumSize(QSize(0, 0));

        gridLayout->addWidget(BMul, 0, 2, 1, 1);

        BDot = new QPushButton(centralWidget);
        BDot->setObjectName(QStringLiteral("BDot"));
        sizePolicy.setHeightForWidth(BDot->sizePolicy().hasHeightForWidth());
        BDot->setSizePolicy(sizePolicy);
        BDot->setMinimumSize(QSize(0, 0));

        gridLayout->addWidget(BDot, 4, 2, 1, 1);

        B7 = new QPushButton(centralWidget);
        B7->setObjectName(QStringLiteral("B7"));
        sizePolicy.setHeightForWidth(B7->sizePolicy().hasHeightForWidth());
        B7->setSizePolicy(sizePolicy);
        B7->setMinimumSize(QSize(0, 0));

        gridLayout->addWidget(B7, 1, 0, 1, 1);

        B8 = new QPushButton(centralWidget);
        B8->setObjectName(QStringLiteral("B8"));
        sizePolicy.setHeightForWidth(B8->sizePolicy().hasHeightForWidth());
        B8->setSizePolicy(sizePolicy);
        B8->setMinimumSize(QSize(0, 0));

        gridLayout->addWidget(B8, 1, 1, 1, 1);

        B2 = new QPushButton(centralWidget);
        B2->setObjectName(QStringLiteral("B2"));
        sizePolicy.setHeightForWidth(B2->sizePolicy().hasHeightForWidth());
        B2->setSizePolicy(sizePolicy);
        B2->setMinimumSize(QSize(0, 0));

        gridLayout->addWidget(B2, 3, 1, 1, 1);

        B1 = new QPushButton(centralWidget);
        B1->setObjectName(QStringLiteral("B1"));
        sizePolicy.setHeightForWidth(B1->sizePolicy().hasHeightForWidth());
        B1->setSizePolicy(sizePolicy);
        B1->setMinimumSize(QSize(0, 0));

        gridLayout->addWidget(B1, 3, 0, 1, 1);

        BSubs = new QPushButton(centralWidget);
        BSubs->setObjectName(QStringLiteral("BSubs"));
        sizePolicy.setHeightForWidth(BSubs->sizePolicy().hasHeightForWidth());
        BSubs->setSizePolicy(sizePolicy);
        BSubs->setMinimumSize(QSize(0, 0));

        gridLayout->addWidget(BSubs, 0, 3, 1, 1);

        BAdd = new QPushButton(centralWidget);
        BAdd->setObjectName(QStringLiteral("BAdd"));
        sizePolicy.setHeightForWidth(BAdd->sizePolicy().hasHeightForWidth());
        BAdd->setSizePolicy(sizePolicy);
        BAdd->setMinimumSize(QSize(0, 0));

        gridLayout->addWidget(BAdd, 1, 3, 2, 1);

        BEqual = new QPushButton(centralWidget);
        BEqual->setObjectName(QStringLiteral("BEqual"));
        sizePolicy.setHeightForWidth(BEqual->sizePolicy().hasHeightForWidth());
        BEqual->setSizePolicy(sizePolicy);
        BEqual->setMinimumSize(QSize(0, 0));

        gridLayout->addWidget(BEqual, 3, 3, 2, 1);

        B0 = new QPushButton(centralWidget);
        B0->setObjectName(QStringLiteral("B0"));
        sizePolicy.setHeightForWidth(B0->sizePolicy().hasHeightForWidth());
        B0->setSizePolicy(sizePolicy);
        B0->setMinimumSize(QSize(0, 0));

        gridLayout->addWidget(B0, 4, 0, 1, 2);


        verticalLayout->addLayout(gridLayout);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 562, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        BEqual->setDefault(true);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        B9->setText(QApplication::translate("MainWindow", "9", 0));
        BClear->setText(QApplication::translate("MainWindow", "C", 0));
        B6->setText(QApplication::translate("MainWindow", "6", 0));
        B4->setText(QApplication::translate("MainWindow", "4", 0));
        BDiv->setText(QApplication::translate("MainWindow", "/", 0));
        B5->setText(QApplication::translate("MainWindow", "5", 0));
        B3->setText(QApplication::translate("MainWindow", "3", 0));
        BMul->setText(QApplication::translate("MainWindow", "*", 0));
        BDot->setText(QApplication::translate("MainWindow", ",", 0));
        B7->setText(QApplication::translate("MainWindow", "7", 0));
        B8->setText(QApplication::translate("MainWindow", "8", 0));
        B2->setText(QApplication::translate("MainWindow", "2", 0));
        B1->setText(QApplication::translate("MainWindow", "1", 0));
        BSubs->setText(QApplication::translate("MainWindow", "-", 0));
        BAdd->setText(QApplication::translate("MainWindow", "+", 0));
        BEqual->setText(QApplication::translate("MainWindow", "=", 0));
        B0->setText(QApplication::translate("MainWindow", "0", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
