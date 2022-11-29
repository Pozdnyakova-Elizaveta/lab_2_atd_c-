#include "command_know.h"
#include <iostream>
#include <string.h>
using namespace std;
Command_know::Command_know(bool sit, bool to_me, bool lie) {
	this->sit = sit;
	this->to_me = to_me;
	this->lie = lie;
}
Command_know::Command_know(bool sit) {
	this->sit=sit;
	to_me = false;
	lie = false;
}
Command_know::Command_know() {
	sit = false;
	to_me = false;
	lie = false;

}
Command_know::~Command_know(){

}
bool Command_know::get_sit() { return sit; }
bool Command_know::get_to_me() { return to_me; }
bool Command_know::get_lie() { return lie; }
void Command_know::set_sit(bool a) { sit = a; }
void Command_know::set_to_me(bool a) { to_me = a; }
void Command_know::set_lie(bool a) { lie = a; }
void operator<< (ostream& o, Command_know c) {
	cout << "Ваша собака знает команды: ";
	if (c.sit) cout << "сидеть, ";
	if (c.to_me) cout << "ко мне, ";
	if (c.lie) cout << "лежать";
	cout << endl;
}
int* Command_know::count_command(Command_know a, int* k) {
	*k = 0;
	if (a.get_lie()) *k = *k + 1;
	if (a.get_to_me()) *k = *k + 1;
	if (a.get_sit()) *k = *k + 1;
	return k;
}