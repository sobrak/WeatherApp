/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.10.1
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
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *WeatherLabel;
    QLineEdit *LineLocation;
    QLabel *CLabel_2;
    QPushButton *ConfirmButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(397, 211);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        WeatherLabel = new QLabel(centralwidget);
        WeatherLabel->setObjectName("WeatherLabel");
        WeatherLabel->setGeometry(QRect(10, 50, 531, 51));
        QFont font;
        font.setPointSize(24);
        WeatherLabel->setFont(font);
        LineLocation = new QLineEdit(centralwidget);
        LineLocation->setObjectName("LineLocation");
        LineLocation->setGeometry(QRect(120, 10, 113, 31));
        CLabel_2 = new QLabel(centralwidget);
        CLabel_2->setObjectName("CLabel_2");
        CLabel_2->setGeometry(QRect(10, 0, 111, 51));
        QFont font1;
        font1.setPointSize(18);
        CLabel_2->setFont(font1);
        ConfirmButton = new QPushButton(centralwidget);
        ConfirmButton->setObjectName("ConfirmButton");
        ConfirmButton->setGeometry(QRect(240, 10, 91, 31));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 397, 23));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        WeatherLabel->setText(QCoreApplication::translate("MainWindow", "?\302\260C", nullptr));
        CLabel_2->setText(QCoreApplication::translate("MainWindow", "Location:", nullptr));
        ConfirmButton->setText(QCoreApplication::translate("MainWindow", "Confirm", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
