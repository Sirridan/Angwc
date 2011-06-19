#ifndef COMMAND_H
#define COMMAND_H

#include <vector>
#include <stdarg.h>

using namespace std;

enum Commands
{
	CMD_NONE,
	CMD_QUIT,
	CMD_SEARCH,
	CMD_WALK,
	CMD_RUN	
};

class Command
{
	int mCommand;
	vector<int> *pArgs;
public:
	Command(int cmd, ...);
	~Command();
	int command()       { return mCommand; }
	int numArgs()       { return pArgs->size(); }
	vector<int> *args() { return pArgs; }
	static int lookup_count(int cmd); 
};

#endif
