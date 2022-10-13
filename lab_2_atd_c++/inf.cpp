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
	cout << "Введите кличку собаки: ";
	cin >> name;
	cout << "Введите породу: ";
	cin >> breed;
	cout << "Введите возраст: ";
	cin >> age;
}
void Inf::display() {
	cout << "Ваша собака - " << name << ", порода - " << breed << ", возраст - " << age << endl;
}