#include "needs.h"
#include <iostream>
#include <string.h>
using namespace std;
Needs::Needs(bool eat, bool walk) {
	this->eat = true;
	this->walk = true;
}
Needs::Needs(bool eat) {
	this->eat=eat;
}
Needs::Needs() {

}
Needs::~Needs() {

}
void Needs::display() {
	cout << "���� ������ �����: ";
	if (eat) cout << "����, ";
	if (walk) cout << "������";
	cout << endl;
}