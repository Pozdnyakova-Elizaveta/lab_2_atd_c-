#pragma once
#include <iostream>
class Ride_character
{
private:
	float speed;
	float max_way;
public:
	Ride_character(float speed, float max_way);
	Ride_character();
	~Ride_character();
	void read();
	void display();
	void set_speed(float a);
	void set_max_way(float a);
	float get_speed();
	float get_max_way();
};
