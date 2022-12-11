#pragma once
#include "Man.h"
#include "Sled_dog.h"
class Man_with_sled_dog :public Man {
protected:
	Sled_dog his_sled_dog;
public:
	Man_with_sled_dog(string s, Inf inf, Look look, Character character, Needs needs, Command_know command_know, Ride_character<float> ride_character);
	float moving(int hour);
	void moving_output(float distance);

};