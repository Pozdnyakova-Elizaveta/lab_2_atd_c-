#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string.h>
using namespace std;
class Needs {
private:
	bool eat;
	bool walk;
public:
	Needs(bool eat, bool walk);
	Needs(bool eat);
	Needs();
	~Needs();
	void display();
	bool get_eat();
	bool get_walk();
	void set_eat(bool a);
	void set_walk(bool a);
};
