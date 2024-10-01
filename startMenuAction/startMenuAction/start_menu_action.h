#pragma once
#include <iostream>
//#include <unistd.h>
//#include <stdio.h>
#include <cstdlib>
#include <windows.h>
#include <powrprof.h> // ���˯��ͷ�ļ�
#include <shellapi.h>
#pragma comment(lib, "PowrProf.lib") // ������������
using namespace std;

namespace StartMenuAciton
{
class StartMenuAction
{

public:
	StartMenuAction();
	~StartMenuAction();
	static void lockScreenAction(); // ����
	static void sleepAction(); // ˯��
	static void shutdownAction(); // �ػ�
	static void restartAction(); // ����
	static void openDisplaySettings(); // ����ʾ���ý���
	static void openSpecificSettings(const wchar_t* uri); // ���ض�������ҳ��
	static void openPrintSettings(); // �򿪴�ӡ�����ý���
	static void openSoundSettings(); // ����ӵķ�������
};

}

