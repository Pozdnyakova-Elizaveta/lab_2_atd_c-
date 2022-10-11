#include "look.h"
#include <iostream>
#include <string.h>
using namespace std;
Look::Look(string color; string eye_color) {
	this->color = color;
	this->eye_color = eye_color;
}
Look::Look(string color) {
	this->color;
}
Look::Look() {

}
Look::~Look() {

}
Look Look::read() {
	Look look;
	cout << "Какой у нее окрас? ";
	cin >> look.color;
	cout << "Какой у нее цвет глаз? ";
	cin >> look.eye.color;
	return look;
}
void Look::display(Look look){
	cout << "Окрас -" << dog.look.color << ", цвет глаз - " << dog.look.color_eye << endl;
}