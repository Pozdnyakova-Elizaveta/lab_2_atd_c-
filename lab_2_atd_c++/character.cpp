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
void Character::read() {
	cout << "��� �����������? (�� - 1, ��� - 0)" << endl;
	cin >> friendly;
	cout << "������� �� ����������� �� 1 �� 5 (5 - ����� ��������):" << endl;
	cin >> learn;
}
void Character::display() {
	if (friendly) cout << "�����������, ";
	else cout << "�����������, ";
	cout << "������� ����������� - " << learn << endl;
}