#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string.h>
using namespace std;
class Look {
private:
	string color;
	string eye_color;
public:
	Look(string color; string eye_color);
	Look(string color);
	Look();
	~Look();
	Look read();
	void display(Look look);
};