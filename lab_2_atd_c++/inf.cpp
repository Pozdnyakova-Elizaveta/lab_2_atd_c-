#include "inf.h"
#include <iostream>
#include <string.h>
using namespace std;
Inf::Inf(string name, int age, string breed) {
	this->name = name;
	this->age = age;
	this->breed = breed;
}
Inf::Inf(string name) {
	this->name=name;
}
Inf::Inf() {

}
Inf::~Inf() {

}
void Inf::read() {
	cout << "������� ������ ������: ";
	cin >> name;
	cout << "������� ������: ";
	cin >> breed;
	cout << "������� �������: ";
	cin >> age;
}
void Inf::display() {
	cout << "���� ������ - " << name << ", ������ - " << breed << ", ������� - " << age << endl;
}