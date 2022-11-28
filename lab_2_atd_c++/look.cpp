#include "look.h"
#include <iostream>
#include <string.h>
using namespace std;
Look::Look(string color, string eye_color) {
	this->color = color;
	this->eye_color = eye_color;
}
Look::Look(string color) {
	this->color=color;
	eye_color = "eye_color";
}
Look::Look() {
	color = "color";
	eye_color = "eye_color";
}
Look::~Look() {

}
void Look::read() {
	cout << "Какой у нее окрас? ";
	cin >> color;
	cout << "Какой у нее цвет глаз? ";
	cin >> eye_color;
}
void Look::display(){
	cout << "Окрас -" << color << ", цвет глаз - " << eye_color << endl;
}
void Look::set_color(string s) { color = s; }
void Look::set_eye_color(string s) { eye_color = s; }