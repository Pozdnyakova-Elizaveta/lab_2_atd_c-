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
	cout << "����� � ��� �����? ";
	cin >> look.color;
	cout << "����� � ��� ���� ����? ";
	cin >> look.eye.color;
	return look;
}
void Look::display(Look look){
	cout << "����� -" << dog.look.color << ", ���� ���� - " << dog.look.color_eye << endl;
}