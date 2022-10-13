#include "dog.h"
#include <iostream>
#include <string.h>
#include <windows.h>
using namespace std;
Dog::Dog(Inf inf, Look look, Character character, Needs needs, Command_know command_know) {
	this->inf = inf;
	this->look = look;
	this->character = character;
	this->needs = needs;
	this->command_know = command_know;
}
Dog::Dog(Inf inf) {
	this->inf=inf;
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
void Dog::touch(Dog dog) {
	if (dog.character.friendly) cout << dog.inf.name << " рад(а)!" << endl;
	else  cout << dog.inf.name << " не нравится!" << endl;
}
void Dog::eat(Dog* dog) {
	if (dog->needs.eat) {
		cout << dog->inf.name << " накормлен(а)!" << endl;
		dog->needs.eat = false;
	}
	else cout << dog->inf.name << " не хочет есть!" << endl;
}
void Dog::walk(Dog* dog) {
	if (dog->needs.walk) {
		cout << dog->inf.name << " погулял(а)!" << endl;
		dog->needs.walk = false;
	}
	else cout << dog->inf.name << " не хочет гулять!" << endl;
}
void Dog::command(Dog* dog, int com) {
	switch (com) {
	case(1): {
		if (dog->command_know.sit) cout << "Собака уже это умеет" << endl;
		else {
			cout << "Учим..." << endl;
			Sleep((5 - dog->character.learn) * 4000);
			cout << "Теперь собака знает эту команду" << endl;
			dog->command_know.sit = true;
		}
		break;
	}
	case (2): {
		if (dog->command_know.lie) cout << "Собака уже это умеет" << endl;
		else {
			cout << "Учим..." << endl;
			Sleep((5 - dog->character.learn) * 4000);
			cout << "Теперь собака знает эту команду" << endl;
			dog->command_know.lie = true;
		}
		break;
	}
	case(3):
	{
		if (dog->command_know.to_me) cout << "Собака уже это умеет" << endl;
		else {
			cout << "Учим..." << endl;
			Sleep((5 - dog->character.learn) * 4000);
			cout << "Теперь собака знает эту команду" << endl;
			dog->command_know.to_me = true;
		}
		break;
	}
	}
}
