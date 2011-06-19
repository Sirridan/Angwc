#ifndef UICURSES_H
#define UICURSES_H

#include <ncurses.h>
#include "UI.h"

class UICurses
{

public:
	UICurses(Angband *angband);
	~UICurses();

	void displayUpdate(int what);

};

#endif
