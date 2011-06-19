#ifndef ANGBAND_H
#define ANGBAND_H

#include "Location.h"
#include "Command.h"
#include <vector>

using namespace std;

class Angband
{
public:
	Angband *instance();
	void makeSingleton();
	bool queueCommand(Command *pCmd);
	void processCommand();
	bool logCommand(Command *pCmd);
	

private:
	Angband();
	static Angband *pAngband;
	vector<Command*> *pvCommands;
};

#endif
