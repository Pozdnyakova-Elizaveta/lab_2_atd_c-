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
void Command_know::display() {
	cout << "���� ������ ����� �������: ";
	if (sit) cout << "������, ";
	if (to_me) cout << "�� ���, ";
	if (lie) cout << "������";
	cout << endl;
}