#include "start_menu_action.h"

StartMenuAciton::StartMenuAction::StartMenuAction()
{
}

StartMenuAciton::StartMenuAction::~StartMenuAction()
{
}

void StartMenuAciton::StartMenuAction::lockScreenAction()
{
	//int result = system("ls -l");
 //   if (result == -1) {
 //       std::cerr << "system call failed" << std::endl;
 //   }
 //   else {
 //       std::cout << "system call succeeded with return code: " << result << std::endl;
 //   }
 //   return;

	//if (!LockWorkStation())
	//{
	//	std::cerr << "Failed to lock the workstation. Error: " << GetLastError() << std::endl;
	//}

	int result = system("rundll32.exe user32.dll,LockWorkStation");
	if (result != 0) {
		std::cerr << "Failed to lock the workstation. Error code: " << result << std::endl;
	}

}


void StartMenuAciton::StartMenuAction::sleepAction()
{
	//// 调用 SetSuspendState 函数将系统置于睡眠状态
	//if (!SetSuspendState(FALSE, FALSE, FALSE)) {
	//	std::cerr << "Failed to put the system to sleep. Error: " << GetLastError() << std::endl;
	//}

	int result = system("rundll32.exe powrprof.dll,SetSuspendState Sleep");
	if (result != 0) {
		std::cerr << "Failed to put the system to sleep. Error code: " << result << std::endl;
	}
}


void StartMenuAciton::StartMenuAction::shutdownAction()
{
	// 调用 ExitWindowsEx 函数来关机
	if (!ExitWindowsEx(EWX_SHUTDOWN | EWX_FORCE, SHTDN_REASON_MAJOR_OTHER)) {
		std::cerr << "Failed to shut down the system. Error: " << GetLastError() << std::endl;
	}

	//int result = system("shutdown /s /f /t 0");
	//if (result != 0) {
	//	std::cerr << "Failed to shut down the system. Error code: " << result << std::endl;
	//}
}


void StartMenuAciton::StartMenuAction::restartAction()
{
	// 调用 ExitWindowsEx 函数来重启
	if (!ExitWindowsEx(EWX_REBOOT | EWX_FORCE, SHTDN_REASON_MAJOR_OTHER)) {
		std::cerr << "Failed to restart the system. Error: " << GetLastError() << std::endl;
	}

	//int result = system("shutdown /r /f /t 0");
	//if (result != 0) {
	//	std::cerr << "Failed to restart the system. Error code: " << result << std::endl;
	//}
}


void StartMenuAciton::StartMenuAction::openDisplaySettings()
{
	//// 使用 ShellExecute 函数打开显示设置界面
	//HINSTANCE result = ShellExecute(NULL, L"open", L"ms-settings:display", NULL, NULL, SW_SHOWNORMAL);
	//if ((int)result <= 32) {
	//	std::cerr << "Failed to open display settings. Error code: " << (int)result << std::endl;
	//}

	// 使用 system 函数打开显示设置界面
	int result = system("start ms-settings:display");
	if (result != 0) {
		std::cerr << "Failed to open display settings. Error code: " << result << std::endl;
	}
}


void StartMenuAciton::StartMenuAction::openSpecificSettings(const wchar_t* uri)
{
	// 使用 ShellExecute 函数打开特定的设置页面
	HINSTANCE result = ShellExecute(NULL, L"open", uri, NULL, NULL, SW_SHOWNORMAL);
	if ((int)result <= 32) {
		std::cerr << "Failed to open settings page. Error code: " << (int)result << std::endl;
	}
}


void StartMenuAciton::StartMenuAction::openPrintSettings()
{
	//HINSTANCE result = ShellExecute(NULL, L"open", L"rundll32.exe", L"shell32.dll,SHHelpShortcuts_RunDLL PrintersFolder", NULL, SW_SHOWNORMAL);
	//if ((int)result <= 32) {
	//	std::cerr << "Failed to open print settings. Error code: " << (int)result << std::endl;
	//}

	int result = system("start ms-settings:printers");
	if (result != 0) {
		std::cerr << "Failed to open print settings. Error code: " << result << std::endl;
	}
}


void StartMenuAciton::StartMenuAction::openSoundSettings()
{
	//HINSTANCE result = ShellExecute(NULL, L"open", L"ms-settings:sound", NULL, NULL, SW_SHOWNORMAL);
	//if ((int)result <= 32) {
	//	std::cerr << "Failed to open sound settings. Error code: " << (int)result << std::endl;
	//}

	int result = system("start ms-settings:sound");
	if (result != 0) {
		std::cerr << "Failed to open sound settings. Error code: " << result << std::endl;
	}
}

void StartMenuAciton::StartMenuAction::openKeyboardSettings()
{
	//int result = system("start ms-settings:keyboard");
	int result = system("start ms-settings:typing");
	if (result != 0) {
		std::cerr << "Failed to open keyboard settings. Error code: " << result << std::endl;
	}
}



void StartMenuAciton::StartMenuAction::openMouseSettings()
{
	int result = system("start ms-settings:mousetouchpad");
	if (result != 0) {
		std::cerr << "Failed to open mouse settings. Error code: " << result << std::endl;
	}
}


void StartMenuAciton::StartMenuAction::openNetWorkSettings()
{
	int result = system("start ms-settings:network");
	if (result != 0) {
		std::cerr << "Failed to open network settings. Error code: " << result << std::endl;
	}
}