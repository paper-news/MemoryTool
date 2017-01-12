#pragma once

#include <QtWidgets/QMainWindow>
#include <QtWidgets/qtreewidget.h>
#include <QtWidgets/qtablewidget.h>
#include "ui_MemoryTool.h"
#include "datacenter.h"

class MemoryTool : public QMainWindow
{
    Q_OBJECT

public:
    MemoryTool(QWidget *parent = Q_NULLPTR);

	/*
	函数名称: InitUI
	函数说明: 界面初始化
	函数参数:
		param:NULL
	返回值:
		成功:true
		失败:false
	*/
	bool InitUI(void);

	/*
	函数名称: InitTableWidget
	函数说明: Table界面初始化
	函数参数:
		param:NULL
	返回值:
		成功:true
		失败:false
	*/
	bool InitTableWidget(void);

	/*
	函数名称: showProcessDetails
	函数说明: 界面显示所有进程数据
	函数参数:
		param: DataCenter_::ProcessInfo &stProcessInfo 
	返回值: 
		成功:true
		失败:false
	*/
	bool showProcessDetails(DataCenter_::ProcessInfo &stProcessInfo);

private slots:
	/*
	函数名称: getClickTableItem
	函数说明: 进程数据显示table鼠标点击事件槽函数
	函数参数:
		param: QTreeWidgetItem* pWidgetItem
	返回值:NULL
	*/
	void getClickTableItem(QTreeWidgetItem* pWidgetItem);	

	/*
	函数名称: DealcellEntered
	函数说明: 鼠标滑过table事件槽函数
	函数参数:
		param: QTableWidgetItem *item
	返回值:NULL
	*/
	void DealcellEntered(QTableWidgetItem *item, int num);

private:
    Ui::MemoryToolClass ui;
	DataCenter_::DataCenter m_datacenter;	//进程数据管理中心
};
