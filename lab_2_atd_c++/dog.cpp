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
Dog Dog::read(Dog dog) {
	Inf inf = dog.inf.read();
	Look look = dog.look.read();
	Character character = dog.character.read();
	return dog;
}
void Dog::display(Dog dog) {
	cout << "Ваша собака - " << dog.inf.name << ", порода - " << dog.inf.breed << ", возраст - " << dog.inf.age << endl;
	cout << "Окрас -" << dog.look.color << ", цвет глаз - " << dog.look.eye_color << endl;
	cout << dog.character.friendly << ", уровень обучаемости - " << dog.character.learn << endl;
	cout << "Ваша собака хочет: ";
	if (dog.needs.eat) cout << "есть ";
	if (dog.needs.walk) cout << "гулять";
	cout << endl;
	cout << "Ваша собака знает команды: ";
	if (dog.command_know.sit) cout << "сидеть ";
	if (dog.command_know.to_me) cout << "ко мне ";
	if (dog.command_know.lie) cout << "лежать";
	cout << endl;
}