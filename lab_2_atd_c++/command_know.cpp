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
	this->sit;
}
Command_know::Command_know() {

}
Command_know::~Command_know(){

}
void Command_know::display(Command_know commands) {
	cout << "���� ������ ����� �������: ";
	if (commands.sit) cout << "������ ";
	if (commands.to_me) cout << "�� ��� ";
	if (commands.lie) cout << "������";
	cout << endl;
}