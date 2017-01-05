#include "MemoryTool.h"

MemoryTool::MemoryTool(QWidget *parent)
	: QMainWindow(parent)
{
	bool ret = true;

	do{ 
		ui.setupUi(this);

		/* 初始化数据中心 */
		if (!m_datacenter.startUp()){
			ret = false;
		}

		/* 初始化界面 */
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
