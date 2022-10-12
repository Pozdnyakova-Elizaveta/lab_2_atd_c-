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
	cout << "Она дружелюбная? (да - 1, нет - 0)" << endl;
	cin >> character.friendly;
	cout << "Оцените ее обучаемость от 1 до 5 (5 - легко обучаема):" << endl;
	cin >> character.learn;
	return character;
}
void Character::display(Character character) {
	if (character.friendly) cout << "Дружелюбная" << endl;
	else cout << "Агрессивная" << endl;
	cout << "Уровень обучаемости - " << character.learn << endl;
}