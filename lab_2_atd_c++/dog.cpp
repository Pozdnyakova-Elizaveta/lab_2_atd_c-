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
	cout << "���� ������ - " << inf.name << ", ������ - " << inf.breed << ", ������� - " << inf.age << endl;
	cout << "����� - " << look.color << ", ���� ���� - " << look.eye_color << endl;
	if (needs.eat) cout << "����������� ";
	else cout << "����������� ";
	cout<< ", ������� ����������� - " << character.learn << endl;
	cout << "���� ������ �����: ";
	if (needs.eat) cout << "���� ";
	if (needs.walk) cout << "������";
	cout << endl;
	cout << "���� ������ ����� �������: ";
	if (command_know.sit) cout << "������ ";
	if (command_know.to_me) cout << "�� ��� ";
	if (command_know.lie) cout << "������";
	cout << endl;
}