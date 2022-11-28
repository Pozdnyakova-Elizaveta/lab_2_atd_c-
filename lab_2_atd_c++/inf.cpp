#include "inf.h"
#include <iostream>
#include <string.h>
#include <windows.h>
using namespace std;
Inf::Inf(string name, int age, string breed) {
	this->name = name;
	this->age = age;
	this->breed = breed;
}
Inf::Inf(string name) {
	this->name=name;
	age = 0;
	breed = "breed";
}
Inf::Inf() {
	name = "name";
	age = 0;
	breed = "breed";
}
Inf::~Inf() {

}
string Inf::get_name() { return name;}
void Inf::set_name(std::string s){ name = s; }
void Inf::set_age(int a) { age = a; }
void Inf::set_breed(string s) { breed = s; }
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
Inf Inf::operator+(int i) {
	Inf dopoln;
	dopoln.age = this->age+i;
	return dopoln;
}
Inf Inf::operator-(int i) {
	Inf dopoln;
	dopoln.age = this->age - i;
	return dopoln;
}
int year_of_birthday(Inf inf) {
	SYSTEMTIME st;
	GetSystemTime(&st);
	int year = st.wYear;
	int birthday = year - inf.age;
	return birthday;
}