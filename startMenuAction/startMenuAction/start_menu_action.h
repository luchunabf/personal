#pragma once
#include <iostream>
//#include <unistd.h>
//#include <stdio.h>
#include <cstdlib>
#include <windows.h>
#include <powrprof.h> // 添加睡眠头文件
#include <shellapi.h>
#pragma comment(lib, "PowrProf.lib") // 添加这个库引用
using namespace std;

namespace StartMenuAciton
{
class StartMenuAction
{

public:
	StartMenuAction();
	~StartMenuAction();
	static void lockScreenAction(); // 锁屏
	static void sleepAction(); // 睡眠
	static void shutdownAction(); // 关机
	static void restartAction(); // 重启
	static void openDisplaySettings(); // 打开显示设置界面
	static void openSpecificSettings(const wchar_t* uri); // 打开特定的设置页面
	static void openPrintSettings(); // 打开打印机设置界面
	static void openSoundSettings(); // 新添加的方法声明
};

}

