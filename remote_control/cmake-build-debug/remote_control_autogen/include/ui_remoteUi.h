/********************************************************************************
** Form generated from reading UI file 'remoteUi.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REMOTEUI_H
#define UI_REMOTEUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
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
    QGridLayout *gridLayout_3;
    QGridLayout *gridLayout;
    QPushButton *pushButton_4;
    QPushButton *pushButton_16;
    QPushButton *pushButton_2;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton;
    QLabel *label;
    QPushButton *pushButton_9;
    QPushButton *pushButton_3;
    QPushButton *pushButton_15;
    QPushButton *pushButton_18;
    QPushButton *pushButton_7;
    QPushButton *pushButton_10;
    QPushButton *pushButton_8;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QPushButton *pushButton_17;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(262, 580);
        QFont font;
        font.setFamily(QString::fromUtf8("Modern"));
        MainWindow->setFont(font);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color:rgb(154, 156, 200)"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout_3 = new QGridLayout(centralwidget);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton_4->sizePolicy().hasHeightForWidth());
        pushButton_4->setSizePolicy(sizePolicy);
        QFont font1;
        font1.setPointSize(16);
        pushButton_4->setFont(font1);
        pushButton_4->setStyleSheet(QString::fromUtf8("background-color:rgb(219, 255, 213)"));

        gridLayout->addWidget(pushButton_4, 5, 1, 1, 1);

        pushButton_16 = new QPushButton(centralwidget);
        pushButton_16->setObjectName(QString::fromUtf8("pushButton_16"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushButton_16->sizePolicy().hasHeightForWidth());
        pushButton_16->setSizePolicy(sizePolicy1);
        pushButton_16->setFont(font1);
        pushButton_16->setStyleSheet(QString::fromUtf8("background-color:rgb(43, 66, 40);\n"
"color:rgb(255, 255, 255)"));

        gridLayout->addWidget(pushButton_16, 8, 0, 1, 1);

        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        sizePolicy.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy);
        pushButton_2->setFont(font1);
        pushButton_2->setStyleSheet(QString::fromUtf8("background-color:rgb(219, 255, 213)"));

        gridLayout->addWidget(pushButton_2, 0, 1, 1, 1);

        lineEdit_2 = new QLineEdit(centralwidget);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        sizePolicy.setHeightForWidth(lineEdit_2->sizePolicy().hasHeightForWidth());
        lineEdit_2->setSizePolicy(sizePolicy);
        QFont font2;
        font2.setPointSize(12);
        lineEdit_2->setFont(font2);
        lineEdit_2->setStyleSheet(QString::fromUtf8("background-color:rgb(255, 255, 255)\n"
""));
        lineEdit_2->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(lineEdit_2, 11, 2, 1, 1);

        pushButton_5 = new QPushButton(centralwidget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        sizePolicy1.setHeightForWidth(pushButton_5->sizePolicy().hasHeightForWidth());
        pushButton_5->setSizePolicy(sizePolicy1);
        pushButton_5->setFont(font1);
        pushButton_5->setStyleSheet(QString::fromUtf8("background-color:rgb(219, 255, 213)"));

        gridLayout->addWidget(pushButton_5, 5, 0, 1, 1);

        pushButton_6 = new QPushButton(centralwidget);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        sizePolicy.setHeightForWidth(pushButton_6->sizePolicy().hasHeightForWidth());
        pushButton_6->setSizePolicy(sizePolicy);
        pushButton_6->setFont(font1);
        pushButton_6->setStyleSheet(QString::fromUtf8("background-color:rgb(219, 255, 213)"));

        gridLayout->addWidget(pushButton_6, 5, 2, 1, 1);

        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        sizePolicy1.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy1);
        pushButton->setFont(font1);
        pushButton->setStyleSheet(QString::fromUtf8("background-color:rgb(219, 255, 213)"));

        gridLayout->addWidget(pushButton, 0, 0, 1, 1);

        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy2);
        QFont font3;
        font3.setPointSize(11);
        label->setFont(font3);
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 9, 0, 1, 1);

        pushButton_9 = new QPushButton(centralwidget);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
        sizePolicy.setHeightForWidth(pushButton_9->sizePolicy().hasHeightForWidth());
        pushButton_9->setSizePolicy(sizePolicy);
        pushButton_9->setFont(font1);
        pushButton_9->setStyleSheet(QString::fromUtf8("background-color:rgb(219, 255, 213)"));

        gridLayout->addWidget(pushButton_9, 6, 2, 1, 1);

        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        sizePolicy.setHeightForWidth(pushButton_3->sizePolicy().hasHeightForWidth());
        pushButton_3->setSizePolicy(sizePolicy);
        pushButton_3->setFont(font1);
        pushButton_3->setStyleSheet(QString::fromUtf8("background-color:rgb(219, 255, 213)"));

        gridLayout->addWidget(pushButton_3, 0, 2, 1, 1);

        pushButton_15 = new QPushButton(centralwidget);
        pushButton_15->setObjectName(QString::fromUtf8("pushButton_15"));
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(pushButton_15->sizePolicy().hasHeightForWidth());
        pushButton_15->setSizePolicy(sizePolicy3);
        pushButton_15->setFont(font1);
        pushButton_15->setStyleSheet(QString::fromUtf8("background-color:rgb(43, 66, 40);\n"
"color:rgb(255, 255, 255)"));

        gridLayout->addWidget(pushButton_15, 10, 2, 1, 1);

        pushButton_18 = new QPushButton(centralwidget);
        pushButton_18->setObjectName(QString::fromUtf8("pushButton_18"));
        sizePolicy1.setHeightForWidth(pushButton_18->sizePolicy().hasHeightForWidth());
        pushButton_18->setSizePolicy(sizePolicy1);
        pushButton_18->setFont(font1);
        pushButton_18->setStyleSheet(QString::fromUtf8("background-color:rgb(43, 66, 40);\n"
"color:rgb(255, 255, 255)"));

        gridLayout->addWidget(pushButton_18, 10, 0, 1, 1);

        pushButton_7 = new QPushButton(centralwidget);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        sizePolicy1.setHeightForWidth(pushButton_7->sizePolicy().hasHeightForWidth());
        pushButton_7->setSizePolicy(sizePolicy1);
        pushButton_7->setFont(font1);
        pushButton_7->setStyleSheet(QString::fromUtf8("background-color:rgb(219, 255, 213)"));

        gridLayout->addWidget(pushButton_7, 6, 0, 1, 1);

        pushButton_10 = new QPushButton(centralwidget);
        pushButton_10->setObjectName(QString::fromUtf8("pushButton_10"));
        sizePolicy.setHeightForWidth(pushButton_10->sizePolicy().hasHeightForWidth());
        pushButton_10->setSizePolicy(sizePolicy);
        pushButton_10->setFont(font1);
        pushButton_10->setStyleSheet(QString::fromUtf8("background-color:rgb(219, 255, 213)"));

        gridLayout->addWidget(pushButton_10, 7, 1, 1, 1);

        pushButton_8 = new QPushButton(centralwidget);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        sizePolicy.setHeightForWidth(pushButton_8->sizePolicy().hasHeightForWidth());
        pushButton_8->setSizePolicy(sizePolicy);
        pushButton_8->setFont(font1);
        pushButton_8->setStyleSheet(QString::fromUtf8("background-color:rgb(219, 255, 213)"));

        gridLayout->addWidget(pushButton_8, 6, 1, 1, 1);

        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        sizePolicy2.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy2);
        QFont font4;
        font4.setFamily(QString::fromUtf8("MS Shell Dlg 2"));
        font4.setPointSize(8);
        font4.setBold(false);
        font4.setItalic(false);
        font4.setWeight(9);
        label_2->setFont(font4);
        label_2->setStyleSheet(QString::fromUtf8("font: 75 8pt \"MS Shell Dlg 2\";"));
        label_2->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_2, 9, 2, 1, 1);

        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        sizePolicy.setHeightForWidth(lineEdit->sizePolicy().hasHeightForWidth());
        lineEdit->setSizePolicy(sizePolicy);
        lineEdit->setFont(font3);
        lineEdit->setStyleSheet(QString::fromUtf8("background-color:rgb(255, 255, 255)\n"
""));
        lineEdit->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(lineEdit, 11, 0, 1, 1);

        pushButton_17 = new QPushButton(centralwidget);
        pushButton_17->setObjectName(QString::fromUtf8("pushButton_17"));
        sizePolicy3.setHeightForWidth(pushButton_17->sizePolicy().hasHeightForWidth());
        pushButton_17->setSizePolicy(sizePolicy3);
        pushButton_17->setFont(font1);
        pushButton_17->setStyleSheet(QString::fromUtf8("background-color:rgb(43, 66, 40);\n"
"color:rgb(255, 255, 255)"));

        gridLayout->addWidget(pushButton_17, 8, 2, 1, 1);


        gridLayout_3->addLayout(gridLayout, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 262, 20));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);
        QObject::connect(pushButton, SIGNAL(clicked()), MainWindow, SLOT(set1()));
        QObject::connect(pushButton_2, SIGNAL(clicked()), MainWindow, SLOT(set2()));
        QObject::connect(pushButton_3, SIGNAL(clicked()), MainWindow, SLOT(set3()));
        QObject::connect(pushButton_5, SIGNAL(clicked()), MainWindow, SLOT(set4()));
        QObject::connect(pushButton_4, SIGNAL(clicked()), MainWindow, SLOT(set5()));
        QObject::connect(pushButton_6, SIGNAL(clicked()), MainWindow, SLOT(set6()));
        QObject::connect(pushButton_7, SIGNAL(clicked()), MainWindow, SLOT(set7()));
        QObject::connect(pushButton_8, SIGNAL(clicked()), MainWindow, SLOT(set8()));
        QObject::connect(pushButton_9, SIGNAL(clicked()), MainWindow, SLOT(set9()));
        QObject::connect(pushButton_10, SIGNAL(clicked()), MainWindow, SLOT(set0()));
        QObject::connect(pushButton_16, SIGNAL(clicked()), MainWindow, SLOT(volUp()));
        QObject::connect(pushButton_18, SIGNAL(clicked()), MainWindow, SLOT(volDown()));
        QObject::connect(pushButton_17, SIGNAL(clicked()), MainWindow, SLOT(progUp()));
        QObject::connect(pushButton_15, SIGNAL(clicked()), MainWindow, SLOT(progDown()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        pushButton_16->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        lineEdit_2->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        pushButton_5->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        pushButton_6->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "level", nullptr));
        pushButton_9->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        pushButton_15->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        pushButton_18->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        pushButton_7->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        pushButton_10->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        pushButton_8->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "programm", nullptr));
        lineEdit->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        pushButton_17->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REMOTEUI_H
