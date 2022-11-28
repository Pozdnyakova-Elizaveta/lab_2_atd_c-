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
	Needs needs;
	Command_know command_know;
	Character character;
public:
	static int sum;
	static int sum_friendly;
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
	Inf get_inf();
	void set_inf(Inf inf);
	void set_look(Look look);
	Character get_character();
	Look get_look();
	void set_character(Character character);
	static void number_dogs();
	Character operator++();
	Character operator++(int d);
	Dog& search(Dog* a, string name);
	static void work_massiv(Dog dog[]);
	static int work_massiv_two(Dog (*a)[2]);
};
