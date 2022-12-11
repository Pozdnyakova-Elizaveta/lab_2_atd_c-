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
protected:
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
	void touch(Dog dog);
	void eat(Dog *dog);
	void walk();
	virtual int number_skills();
	void skills_output();
	void command(Dog* dog, int com);
	friend void operator<< (ostream& o, Dog d);
	Inf get_inf();
	Needs get_needs();
	Command_know get_command_know();
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
