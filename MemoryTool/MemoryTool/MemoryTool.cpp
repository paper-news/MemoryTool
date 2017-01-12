#include "MemoryTool.h"
#include "qdebug.h"

MemoryTool::MemoryTool(QWidget *parent)
	: QMainWindow(parent)
{
	bool ret = true;
	ui.setupUi(this);

	do{ 
		/* ��ʼ���������� */
		if (!m_datacenter.startUp()){
			ret = false;
		}

		/* ��ʼ������ */
		if (!InitUI()){
			ret = false;
		}

	} while (0);
}

void test()
{
	Sleep(100);
}
bool MemoryTool::InitUI(void)
{
	bool ret = true;

	do{
		/* ��ʼ��table */
		if (!InitTableWidget())
		{
			ret = false;
			break;
		}
	} while (false);

	return ret;
}

bool MemoryTool::InitTableWidget(void)
{
	bool ret = true;

	//ui.tasklist_tableWidget->setWindowTitle("nihao00");

	QStringList header;
	/* ����table��ͷ */
	header << "name" << "CPU time" << "network" << "net" << "something";

	ui.tasklist_tableWidget->setColumnCount(5);
	ui.tasklist_tableWidget->setRowCount(20);
	ui.tasklist_tableWidget->setHorizontalHeaderLabels(header);
	ui.tasklist_tableWidget->insertColumn(5);
	ui.tasklist_tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
	ui.tasklist_tableWidget->setShowGrid(false);
	ui.tasklist_tableWidget->setHidden(true);
	ui.tasklist_tableWidget->verticalHeader()->setVisible(false);

	ui.tasklist_tableWidget->setItem(0, 0, new QTableWidgetItem("test.exe"));
	ui.tasklist_tableWidget->setItem(0, 1, new QTableWidgetItem("0:00:00"));
	ui.tasklist_tableWidget->setItem(0, 2, new QTableWidgetItem("0.1 MB"));
	ui.tasklist_tableWidget->setItem(0, 3, new QTableWidgetItem("0"));


	ui.tasklist_tableWidget->show();

	/* ����table�¼��ۺ��� */							  
	connect(ui.tasklist_tableWidget, SIGNAL(itemDoubleClicked(QTableWidgetItem *item)), this, SLOT(DealcellEntered(QTableWidgetItem *item, int num)));
	connect(ui.tasklist_tableWidget, SIGNAL(itemClicked(QTableWidgetItem *item)), this, SLOT(getClickTableItem(QTableWidgetItem *item)));
	return ret;
}

bool MemoryTool::showProcessDetails(DataCenter_::ProcessInfo & stProcessInfo)
{
	bool ret = false;
	//����table name
	ui.tasklist_tableWidget->setWindowTitle("nihao00");
	QStringList header;
	header << "Month" << "Desription";
	ui.tasklist_tableWidget->setHorizontalHeaderLabels(header);
	ui.tasklist_tableWidget->insertColumn(2);
	ui.tasklist_tableWidget->setItem(0, 0, new QTableWidgetItem("jan"));
	ui.tasklist_tableWidget->show();

	return ret;
}

void MemoryTool::getClickTableItem(QTreeWidgetItem* pWidgetItem)
{
	qDebug() << "getClickTableItem ----";
	return;
}

void MemoryTool::DealcellEntered(QTableWidgetItem *item, int num)
{
	qDebug() << "DealCellEntered";
	return;
}
