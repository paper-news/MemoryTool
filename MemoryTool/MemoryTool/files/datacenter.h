#pragma once
#ifndef __DATACENTER_H__
#define __DATACENTER_H__

#include <iostream>
#include <Windows.h>
#include <list>

namespace DataCenter_
{
	struct ProcessInfo
	{
		DWORD nProcessID;	//进程ID
		HANDLE hHandle;		//进程句柄
		int	  nProcessUsedMemory;	//进程所占用的内存
		std::string strProcessName;	//进程名称
		std::string strProcessPath;	//进程所在路径
	};

	class DataCenter
	{
	public:
		DataCenter();
		~DataCenter();

		/*
		函数名称: startUp
		函数说明: 数据中心初始化操作
		函数参数:
			param:NULL
		返回值: 
			成功:true
			失败:false
		*/
		bool startUp(void);

		/*
		函数名称: getProcessUsedMemory
		函数说明: 获取进程所占用的内存
		函数参数:
			param: DWORD nProcessID 进程ID
			param: int nUsedMemoryCounters 进程所占用的内存
		返回值: 
			成功: true
			失败: false
		*/
		bool getProcessUsedMemory(DWORD nProcessID_, int nUsedMemoryCounters_);

	protected:
	private:
		std::list<ProcessInfo*> m_lstProcessInfo;	//管理所有进程信息

		/* 禁止拷贝和赋值 */
		DataCenter(DataCenter&);
		void operator= (DataCenter&);
	};
}
#endif