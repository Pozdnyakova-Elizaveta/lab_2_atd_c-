#include "look.h"
#include <iostream>
#include <string.h>
using namespace std;
Look::Look(string color, string eye_color) {
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
void Look::read() {
	cout << "����� � ��� �����? ";
	cin >> color;
	cout << "����� � ��� ���� ����? ";
	cin >> eye_color;
}
void Look::display(){
	cout << "����� -" << color << ", ���� ���� - " << eye_color << endl;
}