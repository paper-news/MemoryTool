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
#include <QtWidgets/QLabel>
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
    QLabel *titile_label;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;

    void setupUi(QMainWindow *MemoryToolClass)
    {
        if (MemoryToolClass->objectName().isEmpty())
            MemoryToolClass->setObjectName(QStringLiteral("MemoryToolClass"));
        MemoryToolClass->resize(1087, 828);
        MemoryToolClass->setDocumentMode(false);
        centralWidget = new QWidget(MemoryToolClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        tasklist_tableWidget = new QTableWidget(centralWidget);
        if (tasklist_tableWidget->columnCount() < 1)
            tasklist_tableWidget->setColumnCount(1);
        if (tasklist_tableWidget->rowCount() < 1)
            tasklist_tableWidget->setRowCount(1);
        tasklist_tableWidget->setObjectName(QStringLiteral("tasklist_tableWidget"));
        tasklist_tableWidget->setGeometry(QRect(0, 30, 1081, 761));
        tasklist_tableWidget->setMidLineWidth(0);
        tasklist_tableWidget->setDragDropOverwriteMode(false);
        tasklist_tableWidget->setSelectionMode(QAbstractItemView::SingleSelection);
        tasklist_tableWidget->setVerticalScrollMode(QAbstractItemView::ScrollPerPixel);
        tasklist_tableWidget->setHorizontalScrollMode(QAbstractItemView::ScrollPerPixel);
        tasklist_tableWidget->setShowGrid(false);
        tasklist_tableWidget->setGridStyle(Qt::DashDotLine);
        tasklist_tableWidget->setRowCount(1);
        tasklist_tableWidget->setColumnCount(1);
        tasklist_tableWidget->horizontalHeader()->setHighlightSections(false);
        tasklist_tableWidget->horizontalHeader()->setProperty("showSortIndicator", QVariant(false));
        tasklist_tableWidget->verticalHeader()->setVisible(false);
        titile_label = new QLabel(centralWidget);
        titile_label->setObjectName(QStringLiteral("titile_label"));
        titile_label->setGeometry(QRect(10, 1, 591, 21));
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
        titile_label->setText(QApplication::translate("MemoryToolClass", "TextLabel", 0));
    } // retranslateUi

};

namespace Ui {
    class MemoryToolClass: public Ui_MemoryToolClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MEMORYTOOL_H
