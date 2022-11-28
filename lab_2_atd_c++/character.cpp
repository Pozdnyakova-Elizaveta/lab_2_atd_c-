#include "character.h"
#include <iostream>
#include <string.h>
using namespace std;
Character::Character(bool friendly, int learn) {
	this->friendly = friendly;
	this->learn = learn;
}
Character::Character(int learn) {
	this->learn=learn;
	friendly = true;
}
Character::Character() {
	learn = 0;
	friendly = true;
}
Character::~Character() {

}
bool Character::get_friendly() {
	return friendly;
}
int Character::get_learn() {
	return learn;
}
void Character::read() {
	cout << "Она дружелюбная? (да - 1, нет - 0)" << endl;
	cin >> friendly;
	cout << "Оцените ее обучаемость от 1 до 5 (5 - легко обучаема):" << endl;
	cin >> learn;
}
void Character::display() {
	if (friendly) cout << "Дружелюбная, ";
	else cout << "Агрессивная, ";
	cout << "уровень обучаемости - " << learn << endl;
}
void Character::set_learn(int c) { learn = c; }
void Character::set_friendly(bool a) { friendly = a; }