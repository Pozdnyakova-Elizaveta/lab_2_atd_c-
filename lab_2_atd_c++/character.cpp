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
void Character::read(Character character) {
	cout << "��� �����������? (�� - 1, ��� - 0)" << endl;
	cin >> character.friendly;
	cout << "������� �� ����������� �� 1 �� 5 (5 - ����� ��������):" << endl;
	cin >> character.learn;
}
void Character::display() {
	if (friendly) cout << "�����������" << endl;
	else cout << "�����������" << endl;
	cout << "������� ����������� - " << learn << endl;
}