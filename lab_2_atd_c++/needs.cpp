#include "need.h"
#include <iostream>
#include <string.h>
using namespace std;
Needs::Needs(bool eat, bool walk) {
	this->eat = true;
	this->walk = true;
}
Needs::Needs(bool eat) {
	this->eat;
}
Needs::Needs() {

}
Needs::~Needs() {

}
void Needs::display(Needs needs) {
	cout << "���� ������ �����: ";
	if (needs.eat) cout << "���� ";
	if (needs.walk) cout << "������";
	cout << endl;
}