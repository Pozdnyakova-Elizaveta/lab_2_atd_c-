#include "Man_with_dog.h"
Man_with_dog::Man_with_dog(string s, Inf inf, Look look, Character character, Needs needs, Command_know command_know, float speed):Man(s) {
	speed_walk = speed;
	his_dog = Dog(inf, look, character, needs, command_know);
}
float Man_with_dog::moving(int hour) {
	float distance = hour * speed_walk;
	return distance;
}
void Man_with_dog::moving_output(float distance) {
	cout << surname << " прошел с собакой " << distance << " км" << endl;
}