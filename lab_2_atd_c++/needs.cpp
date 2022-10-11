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
	cout << "Ваша собака хочет: ";
	if (needs.eat) cout << "есть ";
	if (needs.walk) cout << "гулять";
	cout << endl;
}