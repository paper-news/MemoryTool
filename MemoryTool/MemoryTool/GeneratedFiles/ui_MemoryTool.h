/********************************************************************************
** Form generated from reading UI file 'MemoryTool.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MEMORYTOOL_H
#define UI_MEMORYTOOL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MemoryToolClass
{
public:
    QWidget *centralWidget;
    QTableWidget *tasklist_tableWidget;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;

    void setupUi(QMainWindow *MemoryToolClass)
    {
        if (MemoryToolClass->objectName().isEmpty())
            MemoryToolClass->setObjectName(QStringLiteral("MemoryToolClass"));
        MemoryToolClass->resize(1087, 828);
        centralWidget = new QWidget(MemoryToolClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        tasklist_tableWidget = new QTableWidget(centralWidget);
        tasklist_tableWidget->setObjectName(QStringLiteral("tasklist_tableWidget"));
        tasklist_tableWidget->setGeometry(QRect(0, 0, 921, 801));
        MemoryToolClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MemoryToolClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1087, 23));
        MemoryToolClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MemoryToolClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MemoryToolClass->addToolBar(Qt::TopToolBarArea, mainToolBar);

        retranslateUi(MemoryToolClass);

        QMetaObject::connectSlotsByName(MemoryToolClass);
    } // setupUi

    void retranslateUi(QMainWindow *MemoryToolClass)
    {
        MemoryToolClass->setWindowTitle(QApplication::translate("MemoryToolClass", "MemoryTool", 0));
    } // retranslateUi

};

namespace Ui {
    class MemoryToolClass: public Ui_MemoryToolClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MEMORYTOOL_H
