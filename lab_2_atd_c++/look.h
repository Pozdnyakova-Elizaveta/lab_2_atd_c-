#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string.h>
using namespace std;
class Look {
public:
	string color;
	string eye_color;
	Look(string color, string eye_color);
	Look(string color);
	Look();
	~Look();
	void read();
	void display();
};
