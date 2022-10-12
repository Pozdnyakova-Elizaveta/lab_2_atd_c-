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
	cout << "Введите кличку собаки: ";
	cin >> inf.name;
	cout << "Введите породу: ";
	cin >> inf.breed;
	cout << "Введите возраст: ";
	cin >> inf.age;
	return inf;
}
void Inf::display(Inf inf) {
	cout << "Ваша собака - " << inf.name << ", порода - " << inf.breed << ", возраст - " << inf.age << endl;
}