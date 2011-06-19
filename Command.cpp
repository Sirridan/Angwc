#include "Command.h"


Command::Command(int cmd, ...)
{
	pArgs = new vector<int>();
	va_list argp;
	va_start(argp, cmd);
	for(int i = 0; i <= Command::lookup_count(cmd); i++)
	{
		pArgs->push_back(va_arg(argp, int));
	}
	va_end(argp);
}

Command::~Command()
{
	delete pArgs;
}

int Command::lookup_count(int cmd)
{
	switch(cmd)
	{
		case CMD_WALK:
		case CMD_RUN:
		case CMD_SEARCH:
			return 1;
			break;
		default:
			return 0;
			break;
	}
	/* just in case */
	return 0;
}
