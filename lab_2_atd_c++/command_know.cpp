#include "command_know.h"
#include <iostream>
#include <string.h>
using namespace std;
Command_know::Command_know(bool sit, bool to_me, bool lie) {
	this->sit = false;
	this->to_me = false;
	this->lie = false;
}
Command_know::Command_know(bool sit) {
	this->sit;
}
Command_know::Command_know() {

}
Command_know::~Command_know{

}
void Command_know::display(Command_know commands) {
	cout << "Ваша собака знает команды: ";
	if (commands.sit) cout << "сидеть ";
	if (commands.to_me) cout << "ко мне ";
	if (commands.lie) cout << "лежать";
	cout << endl;
}