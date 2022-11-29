#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string.h>
using namespace std;
class Character {
private:
	bool friendly;
	int learn;
public:
	Character(bool friendly, int learn);
	Character(int learn);
	Character();
	~Character();
	void read();
	bool get_friendly();
	void set_learn(int c);
	void set_friendly(bool a);
	int get_learn();
	friend void operator<< (ostream& o, Character c);
};
