#include "dog.h"
#include <iostream>
#include <string.h>
#include <windows.h>
using namespace std;
int Dog::sum = 0;
int Dog::sum_friendly = 0;
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
	sum = sum - 1;
	if (this->character.get_friendly()) sum_friendly--;
}
Inf Dog::get_inf() { return inf; }
void Dog::set_inf(Inf inf) { this->inf = inf; }
Character Dog::get_character() { return character; }
void Dog::set_character(Character character) { this->character = character; }
void Dog::number_dogs() {
	int k = sum - sum_friendly;
	printf("Всего собак - %d\n", sum);
	printf("Из них дружелюбных - %d, агрессивных - %d\n", sum_friendly,k);
}
void Dog::read() {
	inf.read();
	look.read();
	character.read();
	sum = sum + 1;
	if (this->character.get_friendly()) sum_friendly++;
}
void Dog::display() {
	inf.display();
	look.display();
	character.display();
	command_know.display();
	needs.display();
}
void Dog::touch(Dog dog) {
	if (dog.character.get_friendly()) cout << dog.inf.get_name() << " рад(а)!" << endl;
	else  cout << dog.inf.get_name() << " не нравится!" << endl;
}
void Dog::eat(Dog* dog) {
	if (!dog->needs.get_eat()) {
		cout << dog->inf.get_name() << " накормлен(а)!" << endl;
		dog->needs.set_eat(true);
	}
	else cout << dog->inf.get_name() << " не хочет есть!" << endl;
}
void Dog::walk(Dog* dog) {
	if (!dog->needs.get_walk()) {
		cout << dog->inf.get_name() << " погулял(а)!" << endl;
		dog->needs.set_walk(true);
	}
	else cout << dog->inf.get_name() << " не хочет гулять!" << endl;
}
void Dog::command(Dog* dog, int com) {
	switch (com) {
	case(1): {
		if (dog->command_know.get_sit()) cout << "Собака уже это умеет" << endl;
		else {
			cout << "Учим..." << endl;
			Sleep((5 - dog->character.get_learn()) * 4000);
			cout << "Теперь собака знает эту команду" << endl;
			dog->command_know.set_sit(true);
		}
		break;
	}
	case (2): {
		if (dog->command_know.get_lie()) cout << "Собака уже это умеет" << endl;
		else {
			cout << "Учим..." << endl;
			Sleep((5 - dog->character.get_learn()) * 4000);
			cout << "Теперь собака знает эту команду" << endl;
			dog->command_know.set_lie(true);
		}
		break;
	}
	case(3):
	{
		if (dog->command_know.get_to_me()) cout << "Собака уже это умеет" << endl;
		else {
			cout << "Учим..." << endl;
			Sleep((5 - dog->character.get_learn()) * 4000);
			cout << "Теперь собака знает эту команду" << endl;
			dog->command_know.set_to_me(true);
		}
		break;
	}
	}
	int *k=new int(0);
	k = dog->command_know.count_command(dog->command_know, k);
	cout << "Сейчас собака знает " <<*k<<" команд(ы)"<< endl;
	delete k;
}
Character Dog::operator++() {
	Character copy = this->get_character();
	int l = copy.get_learn();
	++l;
	copy.set_learn(l);
	this->set_character(copy);
	return this->get_character();
}
Character Dog::operator++(int d) {
	Character copy = this->get_character();
	Character copy_izm = this->get_character();
	int l = copy_izm.get_learn();
	++l;
	copy_izm.set_learn(l);
	this->set_character(copy_izm);
	return copy;
}
Dog& Dog::search(Dog a[], string name) {
	int i = 0;
	while (i != 2 && a[i].get_inf().get_name().compare(name) != 0) i++;
	return a[i];
}