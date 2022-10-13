#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string.h>
#include "command_know.h"
#include "needs.h"
#include "inf.h"
#include "look.h"
#include "character.h"
using namespace std;
class Dog {
private:
	Inf inf;
	Look look;
	Character character;
	Needs needs;
	Command_know command_know;
public:	
	Dog(Inf inf, Look look, Character character, Needs needs, Command_know command_know);
	Dog(Inf inf);
	Dog();
	~Dog();
	void read();
	void display();
	void touch(Dog dog);
	void eat(Dog *dog);
	void walk(Dog* dog);
	void command(Dog* dog, int com);
};
