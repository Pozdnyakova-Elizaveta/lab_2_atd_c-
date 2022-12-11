#include "Man_with_sled_dog.h"
Man_with_sled_dog::Man_with_sled_dog(string s, Inf inf, Look look, Character character, Needs needs, Command_know command_know, Ride_character<float> ride_character):Man(s) {
	his_sled_dog = Sled_dog(inf, look, character, needs, command_know, ride_character);
}
float Man_with_sled_dog::moving(int hour) {
	float distance = hour * his_sled_dog.get_ride_character().get_speed();
	return distance;
}
void Man_with_sled_dog::moving_output(float distance) {
	cout << surname << " проехал в упряжке " << distance << " км" << endl;
}