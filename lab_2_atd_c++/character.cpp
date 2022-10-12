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