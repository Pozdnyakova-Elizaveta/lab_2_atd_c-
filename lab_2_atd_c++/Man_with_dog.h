#pragma once
#include "Man.h"
#include "dog.h"
class Man_with_dog :public Man {
protected:
	Dog his_dog;
	float speed_walk;
public:
	Man_with_dog(string s, Inf inf, Look look, Character character, Needs needs, Command_know command_know, float speed);
	float moving(int hour);
	void moving_output(float distance);
};