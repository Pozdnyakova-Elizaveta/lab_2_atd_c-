#include "needs.h"
#include <iostream>
#include <string.h>
using namespace std;
Needs::Needs(bool eat, bool walk) {
	this->eat = eat;
	this->walk = walk;
}
Needs::Needs(bool eat) {
	this->eat=eat;
	walk = true;
}
Needs::Needs() {
	eat = false;
	walk = false;

}
Needs::~Needs() {

}
bool Needs::get_eat() { return eat; }
bool Needs::get_walk() { return walk; }
void Needs::set_eat(bool a) { eat = a; }
void Needs::set_walk(bool a) { walk = a; }
void operator<< (ostream& o, Needs n){
	cout << "Ваша собака хочет: ";
	if (!n.eat) cout << "есть, ";
	if (!n.walk) cout << "гулять";
	cout << endl;
}