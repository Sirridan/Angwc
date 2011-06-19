#include "Angband.h"

Angband::Angband()
{
	pvCommands = new vector<Command*>();
}

Angband::~Angband()
{
	//for each, blah blah
	delete pvCommands;
}

bool Angband::logCommand(Command *pCmd)
{
	return true;
}

void Angband::processCommand(Command *pCmd)
{
	if(!logCommand(pCmd))
	{
	}
	switch(pCmd->command())
	{
		case CMD_WALK:
			doCmdWalk(pCmd->args()->at(0));
			break;
		default:
			break;
	}
}

void Angband::doCmdWalk(direction_t dir)
{

}

void Angband::makeSingleton()
{
	pAngband = new Angband();
}

Angband *Angband::instance()
{
	if(pAngband == NULL)
		pAngband = new Angband();
	return pAngband;
}
