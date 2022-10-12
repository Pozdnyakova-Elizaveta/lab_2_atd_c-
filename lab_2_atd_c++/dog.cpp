#include "dog.h"
#include <iostream>
#include <string.h>
using namespace std;
Dog::Dog(Inf inf, Look look, Character character, Needs needs, Command_know command_know) {
	this->inf = inf;
	this->look = look;
	this->character = character;
	this->needs = needs;
	this->command_know = command_know;
}
Dog::Dog(Inf inf) {
	this->inf;
}
Dog::Dog() {

}
Dog::~Dog() {

}
void Dog::read() {
	inf.read();
	look.read();
	character.read();
}
void Dog::display() {
	inf.display();
	look.display();
	character.display();
	command_know.display();
	needs.display();
}