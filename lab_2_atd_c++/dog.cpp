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
void Dog::read(Dog *dog) {
	dog->inf.read();
	dog->look.read();
	dog->character.read(dog->character);
}
void Dog::display() {
	cout << "Ваша собака - " << inf.name << ", порода - " << inf.breed << ", возраст - " << inf.age << endl;
	cout << "Окрас - " << look.color << ", цвет глаз - " << look.eye_color << endl;
	if (needs.eat) cout << "Дружелюбная ";
	else cout << "Агрессивная ";
	cout<< ", уровень обучаемости - " << character.learn << endl;
	cout << "Ваша собака хочет: ";
	if (needs.eat) cout << "есть ";
	if (needs.walk) cout << "гулять";
	cout << endl;
	cout << "Ваша собака знает команды: ";
	if (command_know.sit) cout << "сидеть ";
	if (command_know.to_me) cout << "ко мне ";
	if (command_know.lie) cout << "лежать";
	cout << endl;
}