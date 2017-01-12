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
	��������: InitUI
	����˵��: �����ʼ��
	��������:
		param:NULL
	����ֵ:
		�ɹ�:true
		ʧ��:false
	*/
	bool InitUI(void);

	/*
	��������: InitTableWidget
	����˵��: Table�����ʼ��
	��������:
		param:NULL
	����ֵ:
		�ɹ�:true
		ʧ��:false
	*/
	bool InitTableWidget(void);

	/*
	��������: showProcessDetails
	����˵��: ������ʾ���н�������
	��������:
		param: DataCenter_::ProcessInfo &stProcessInfo 
	����ֵ: 
		�ɹ�:true
		ʧ��:false
	*/
	bool showProcessDetails(DataCenter_::ProcessInfo &stProcessInfo);

private slots:
	/*
	��������: getClickTableItem
	����˵��: ����������ʾtable������¼��ۺ���
	��������:
		param: QTreeWidgetItem* pWidgetItem
	����ֵ:NULL
	*/
	void getClickTableItem(QTreeWidgetItem* pWidgetItem);	

	/*
	��������: DealcellEntered
	����˵��: ��껬��table�¼��ۺ���
	��������:
		param: QTableWidgetItem *item
	����ֵ:NULL
	*/
	void DealcellEntered(QTableWidgetItem *item, int num);

private:
    Ui::MemoryToolClass ui;
	DataCenter_::DataCenter m_datacenter;	//�������ݹ�������
};
