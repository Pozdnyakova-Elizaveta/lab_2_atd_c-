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
	this->name;
}
Inf::Inf() {

}
Inf::~Inf() {

}
Inf Inf::read() {
	Inf inf;
	cout << "������� ������ ������: ";
	cin >> inf.name;
	cout << "������� ������: ";
	cin >> inf.breed;
	cout << "������� �������: ";
	cin >> inf.age;
	return inf;
}
void Inf::display(Inf inf) {
	cout << "���� ������ - " << inf.name << ", ������ - " << inf.breed << ", ������� - " << inf.age << endl;
}