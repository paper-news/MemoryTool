#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_MemoryTool.h"
#include "datacenter.h"

class MemoryTool : public QMainWindow
{
    Q_OBJECT

public:
    MemoryTool(QWidget *parent = Q_NULLPTR);

private:
    Ui::MemoryToolClass ui;
	DataCenter_::DataCenter m_datacenter;	//进程数据管理中心
};
