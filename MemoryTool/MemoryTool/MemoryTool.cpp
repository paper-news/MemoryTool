#include "MemoryTool.h"

MemoryTool::MemoryTool(QWidget *parent)
	: QMainWindow(parent)
{
	bool ret = true;

	do{ 
		ui.setupUi(this);

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

bool MemoryTool::InitUI(void)
{
	bool ret = false;

	return ret;
}

bool MemoryTool::showProcessDetails(DataCenter_::ProcessInfo & stProcessInfo)
{
	bool ret = false;

	return ret;
}

void MemoryTool::getClickTableItem(QTreeWidgetItem* pWidgetItem, int num)
{
	return;
}
