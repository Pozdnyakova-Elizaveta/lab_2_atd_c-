#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string.h>
using namespace std;
class Inf {
public:
	string name;
	int age;
	string breed;
	Inf(string name, int age, string breed);
	Inf(string name);
	Inf();
	~Inf();
	Inf read();
	void display();
};
