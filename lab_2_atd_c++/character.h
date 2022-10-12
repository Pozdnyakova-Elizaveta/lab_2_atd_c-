#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string.h>
using namespace std;
class Character {
public:
	bool friendly;
	int learn;
	Character(bool friendly, int learn);
	Character(int learn);
	Character();
	~Character();
	void read(Character character);
	void display();
};
