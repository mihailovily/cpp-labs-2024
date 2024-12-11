/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *pushButtonAdd;
    QPushButton *allDataViewButton;
    QPushButton *filterDataButton;
    QPushButton *filterData2Button;
    QPushButton *pushButtonRem;
    QLabel *surname_label;
    QTableView *tableView;
    QLabel *university_label;
    QLabel *id_label;
    QLineEdit *lineEditID;
    QLineEdit *lineEditUniversity;
    QLineEdit *lineEditName;
    QLineEdit *lineEditYear;
    QLabel *year_label;
    QLabel *faculty_label;
    QLineEdit *lineEditFaculty;
    QPushButton *pushButtonSort;
    QMenuBar *menubar;
    QMenu *menuLab_7;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1045, 735);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        pushButtonAdd = new QPushButton(centralwidget);
        pushButtonAdd->setObjectName("pushButtonAdd");
        pushButtonAdd->setGeometry(QRect(900, 470, 121, 61));
        allDataViewButton = new QPushButton(centralwidget);
        allDataViewButton->setObjectName("allDataViewButton");
        allDataViewButton->setGeometry(QRect(10, 570, 121, 61));
        filterDataButton = new QPushButton(centralwidget);
        filterDataButton->setObjectName("filterDataButton");
        filterDataButton->setGeometry(QRect(160, 570, 121, 61));
        filterData2Button = new QPushButton(centralwidget);
        filterData2Button->setObjectName("filterData2Button");
        filterData2Button->setGeometry(QRect(310, 570, 121, 61));
        pushButtonRem = new QPushButton(centralwidget);
        pushButtonRem->setObjectName("pushButtonRem");
        pushButtonRem->setGeometry(QRect(900, 620, 121, 61));
        surname_label = new QLabel(centralwidget);
        surname_label->setObjectName("surname_label");
        surname_label->setGeometry(QRect(790, 20, 111, 41));
        QFont font;
        font.setPointSize(16);
        surname_label->setFont(font);
        tableView = new QTableView(centralwidget);
        tableView->setObjectName("tableView");
        tableView->setGeometry(QRect(10, 20, 691, 511));
        university_label = new QLabel(centralwidget);
        university_label->setObjectName("university_label");
        university_label->setGeometry(QRect(790, 130, 121, 41));
        university_label->setFont(font);
        id_label = new QLabel(centralwidget);
        id_label->setObjectName("id_label");
        id_label->setGeometry(QRect(780, 500, 91, 41));
        id_label->setFont(font);
        lineEditID = new QLineEdit(centralwidget);
        lineEditID->setObjectName("lineEditID");
        lineEditID->setGeometry(QRect(790, 560, 231, 41));
        lineEditUniversity = new QLineEdit(centralwidget);
        lineEditUniversity->setObjectName("lineEditUniversity");
        lineEditUniversity->setGeometry(QRect(790, 190, 231, 41));
        lineEditName = new QLineEdit(centralwidget);
        lineEditName->setObjectName("lineEditName");
        lineEditName->setGeometry(QRect(790, 70, 231, 41));
        lineEditYear = new QLineEdit(centralwidget);
        lineEditYear->setObjectName("lineEditYear");
        lineEditYear->setGeometry(QRect(790, 410, 231, 41));
        year_label = new QLabel(centralwidget);
        year_label->setObjectName("year_label");
        year_label->setGeometry(QRect(790, 350, 91, 41));
        year_label->setFont(font);
        faculty_label = new QLabel(centralwidget);
        faculty_label->setObjectName("faculty_label");
        faculty_label->setGeometry(QRect(790, 240, 91, 41));
        faculty_label->setFont(font);
        lineEditFaculty = new QLineEdit(centralwidget);
        lineEditFaculty->setObjectName("lineEditFaculty");
        lineEditFaculty->setGeometry(QRect(790, 290, 231, 41));
        pushButtonSort = new QPushButton(centralwidget);
        pushButtonSort->setObjectName("pushButtonSort");
        pushButtonSort->setGeometry(QRect(470, 572, 181, 61));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1045, 20));
        menuLab_7 = new QMenu(menubar);
        menuLab_7->setObjectName("menuLab_7");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuLab_7->menuAction());

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        pushButtonAdd->setText(QCoreApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \320\227\320\260\320\277\320\270\321\201\321\214", nullptr));
        allDataViewButton->setText(QCoreApplication::translate("MainWindow", "\320\222\321\213\320\262\320\265\321\201\321\202\320\270 \320\262\321\201\320\265", nullptr));
        filterDataButton->setText(QCoreApplication::translate("MainWindow", "\320\232\321\203\321\200\321\201 > 2", nullptr));
        filterData2Button->setText(QCoreApplication::translate("MainWindow", "\320\232\321\203\321\200\321\201 <= 2", nullptr));
        pushButtonRem->setText(QCoreApplication::translate("MainWindow", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214 \320\267\320\260\320\277\320\270\321\201\321\214", nullptr));
        surname_label->setText(QCoreApplication::translate("MainWindow", "Surname", nullptr));
        university_label->setText(QCoreApplication::translate("MainWindow", "University", nullptr));
        id_label->setText(QCoreApplication::translate("MainWindow", "ID", nullptr));
        year_label->setText(QCoreApplication::translate("MainWindow", "Year", nullptr));
        faculty_label->setText(QCoreApplication::translate("MainWindow", "Faculty", nullptr));
        pushButtonSort->setText(QCoreApplication::translate("MainWindow", "\320\241\320\276\321\200\321\202\320\270\321\200\320\276\320\262\320\260\321\202\321\214 \320\277\320\276 \320\272\321\203\321\200\321\201\321\203", nullptr));
        menuLab_7->setTitle(QCoreApplication::translate("MainWindow", "Lab 7", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
