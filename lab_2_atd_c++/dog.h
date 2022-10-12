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
public:
	Inf inf;
	Look look;
	Character character;
	Needs needs;
	Command_know command_know;
	Dog(Inf inf, Look look, Character character, Needs needs, Command_know command_know);
	Dog(Inf inf);
	Dog();
	~Dog();
	Dog read(Dog dog);
	void display(Dog dog);
};
