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
	cout << "���� ������ - " << dog.inf.name << ", ������ - " << dog.inf.breed << ", ������� - " << dog.inf.age << endl;
	cout << "����� -" << dog.look.color << ", ���� ���� - " << dog.look.eye_color << endl;
	cout << dog.character.friendly << ", ������� ����������� - " << dog.character.learn << endl;
	cout << "���� ������ �����: ";
	if (dog.needs.eat) cout << "���� ";
	if (dog.needs.walk) cout << "������";
	cout << endl;
	cout << "���� ������ ����� �������: ";
	if (dog.command_know.sit) cout << "������ ";
	if (dog.command_know.to_me) cout << "�� ��� ";
	if (dog.command_know.lie) cout << "������";
	cout << endl;
}