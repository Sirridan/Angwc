/*
 * UI.h
 * This is the header file containing the UI (user interface) abstract class header.  This needs to be impelmented
 * for whatever I/O libraries or systems you are using.
 * Something like UIWin, UICurses, UIMac, UIXWin, UITk ... and so on
*/

#ifndef UI_H
#define UI_H

#define MODE_NONE	-1
#define MODE_MENU	0
#define MODE_LEVEL	1
#define MODE_INVENTORY	2
#define MODE_SPELL	3

#define UPDATE_LEVEL	0x0001
#define UPDATE_PLAYER	0x0002
#define UPDATE_MONSTER	0x0004

class UI
{
	Angband *pAngband;
	int displayMode;
public:
	UI(Angband *angband);
	~UI();

/* display methods */
	virtual void displayUpdate() = 0;

	void displayMode(int mode);

	void playerUpdate();
	void monsterUpdate();
	void levelUpdate();
};

#endif
