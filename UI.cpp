#include "UI.h"

UI::UI(Angband *angband)
{
	pAngband = angband;
}

UI::~UI()
{
	delete pAngband;
}

void UI::displayMode(int mode)
{
	displayMode = mode;
}

void UI::playerUpdate()
{
	updateDisplay(UPDATE_PLAYER);
}

void UI::levelUpdate()
{
	updateDisplay(UPDATE_LEVEL);
}

void UI::monsterUpdate()
{
	updateDisplay(UPDATE_MONSTER);
}

