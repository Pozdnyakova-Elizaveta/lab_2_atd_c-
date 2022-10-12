#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string.h>
using namespace std;
class Needs {
public:
	bool eat;
	bool walk;
	Needs(bool eat, bool walk);
	Needs(bool eat);
	Needs();
	~Needs();
	void display();
};
