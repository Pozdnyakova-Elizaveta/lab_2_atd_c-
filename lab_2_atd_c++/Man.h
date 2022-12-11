#pragma once
#include <iostream>
#include <string.h>
using namespace std;
class Man {
protected:
	string surname;
public:
	Man(string s);
	virtual float moving(int hour)=0;
	virtual void moving_output(float distance) = 0;
};
