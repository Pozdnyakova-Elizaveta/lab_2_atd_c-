#include "character.h"
#include <iostream>
#include <string.h>
using namespace std;
Character::Character(bool friendly, int learn) {
	this->friendly = friendly;
	this->learn = learn;
}
Character::Character(int learn) {
	this->learn;
}
Character::Character() {

}
Character::~Character() {

}
Character Character::read() {
	Character character;
	cout << "��� �����������? (�� - 1, ��� - 0)" << endl;
	cin >> character.friendly;
	cout << "������� �� ����������� �� 1 �� 5 (5 - ����� ��������):" << endl;
	cin >> character.learn;
	return character;
}
void Character::display(Character character) {
	if (character.friendly) cout << "�����������" << endl;
	else cout << "�����������" << endl;
	cout << "������� ����������� - " << character.learn << endl;
}