#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string.h>
using namespace std;
class Command_know {
public:
	bool sit;
	bool to_me;
	bool lie;
	Command_know(bool sit, bool to_me, bool lie);
	Command_know(bool sit);
	Command_know();
	~Command_know();
	void display();
};
