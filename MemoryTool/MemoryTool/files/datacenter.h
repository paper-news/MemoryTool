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
		DWORD nProcessID;	//����ID
		HANDLE hHandle;		//���̾��
		int	  nProcessUsedMemory;	//������ռ�õ��ڴ�
		std::string strProcessName;	//��������
		std::string strProcessPath;	//��������·��
	};

	class DataCenter
	{
	public:
		DataCenter();
		~DataCenter();

		/*
		��������: startUp
		����˵��: �������ĳ�ʼ������
		��������:
			param:NULL
		����ֵ: 
			�ɹ�:true
			ʧ��:false
		*/
		bool startUp(void);

		/*
		��������: getProcessUsedMemory
		����˵��: ��ȡ������ռ�õ��ڴ�
		��������:
			param: DWORD nProcessID ����ID
			param: int nUsedMemoryCounters ������ռ�õ��ڴ�
		����ֵ: 
			�ɹ�: true
			ʧ��: false
		*/
		bool getProcessUsedMemory(DWORD nProcessID_, int nUsedMemoryCounters_);

	protected:
	private:
		std::list<ProcessInfo*> m_lstProcessInfo;	//�������н�����Ϣ

		/* ��ֹ�����͸�ֵ */
		DataCenter(DataCenter&);
		void operator= (DataCenter&);
	};
}
#endif