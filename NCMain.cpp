#include <ncurses.h>
#include "types.h"
#include "Location.h"
#include "Creature.h"
#include "Command.h"

int finish();
int dir_from_keypress(int);

int main(int argc, char *argv[])
{
	Creature *plr = new Creature();

	initscr();
	keypad(stdscr, TRUE);
	cbreak();
	noecho();

	mvaddch(plr->location()->get_y(), plr->location()->get_x(), '@');
	int ch = getch();
	Command *cmd;
	while(ch != 27)
	{
		mvaddch(plr->location()->get_y(), plr->location()->get_x(), ' ');
		if(ch > '0' && ch <= '9')
			cmd = new Command(CMD_WALK, dir_from_keypress(ch));

		switch(cmd->args()->at(0))
		{
		case DIR_SOUTHWEST:
			plr->location()->move(DIR_SOUTHWEST); break;
		case DIR_SOUTH:
			plr->location()->move(DIR_SOUTH); break;
		case DIR_SOUTHEAST:
			plr->location()->move(DIR_SOUTHEAST); break;
		case DIR_WEST:
			plr->location()->move(DIR_WEST); break;
		case DIR_NONE:
			plr->location()->move(DIR_NONE); break;
		case DIR_EAST:
			plr->location()->move(DIR_EAST); break;
		case DIR_NORTHWEST:
			plr->location()->move(DIR_NORTHWEST); break;
		case DIR_NORTH:
			plr->location()->move(DIR_NORTH); break;
		case DIR_NORTHEAST:
			plr->location()->move(DIR_NORTHEAST); break;
		}
		mvaddch(plr->location()->get_y(), plr->location()->get_x(), '@');
		ch = getch();
		delete cmd;
	}
	delete plr;
	finish();	
}

int finish()
{
	endwin();
	return 0;
}

int dir_from_keypress(int key)
{
	switch(key)
	{
	case '8': return DIR_NORTH;
	case '2': return DIR_SOUTH;
	case '4': return DIR_WEST;
	case '6': return DIR_EAST;
	case '1': return DIR_SOUTHWEST;
	case '3': return DIR_SOUTHEAST;
	case '7': return DIR_NORTHWEST;
	case '9': return DIR_NORTHEAST;
	}
	return DIR_NONE;
}

/*
Command *command_from_keypress(int key)
{
	switch(key)
	{
		case '8':
		case '2':
		case '4':
		case '6':
	}
}*/
