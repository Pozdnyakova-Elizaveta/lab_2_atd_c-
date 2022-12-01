#pragma once
#include "dog.h"
#include "ride_character.h"
class Sled_dog:public Dog
{
private:
	Ride_character<float> ride_character;
public:
	Sled_dog(Inf inf, Look look, Character character, Needs needs, Command_know command_know, Ride_character<float> ride_character);
	Sled_dog();
	void command();
	void read();
	void operator=(Dog a);
	friend void operator<< (ostream& o, Sled_dog d);
};

