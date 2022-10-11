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
	if (dog.command_know.sit) cout << "сидеть ";
	if (dog.command_know.to_me) cout << "ко мне ";
	if (dog.command_know.lie) cout << "лежать";
	cout << endl;
}