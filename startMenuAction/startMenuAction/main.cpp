#include "start_menu_action.h"
//using namespace std;

int main()
{
	//StartMenuAciton::StartMenuAction::lockScreenAction();
	//StartMenuAciton::StartMenuAction::sleepAction();
	//StartMenuAciton::StartMenuAction::openDisplaySettings();
	//StartMenuAciton::StartMenuAction::openSpecificSettings(L"ms-settings:display-advanced");
	//StartMenuAciton::StartMenuAction::openPrintSettings();
	//StartMenuAciton::StartMenuAction::openSoundSettings();
	//StartMenuAciton::StartMenuAction::openSpecificSettings(L"ms-settings:mousetouchpad");
	StartMenuAciton::StartMenuAction::openSpecificSettings(L"ms-settings:keyboard");
	cout << "hello world" << endl;
	return 0;
}