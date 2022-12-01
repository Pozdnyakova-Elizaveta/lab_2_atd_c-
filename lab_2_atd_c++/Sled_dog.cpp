#include "Sled_dog.h"
#include <windows.h>
Sled_dog::Sled_dog(Inf inf, Look look, Character character, Needs needs, Command_know command_know, Ride_character<float> ride_character):Dog(inf,look,character,needs,command_know) {
	this->ride_character = ride_character;
}
Sled_dog::Sled_dog() {

}
void Sled_dog::command() {
	cout << "Тренируем..." << endl;
	Sleep((5 - character.get_learn()) * 4000);
	ride_character.set_speed(ride_character.get_speed()+1);
}
void Sled_dog::read() {
	inf.read();
	look.read();
	character.read();
	ride_character.read();
}
void operator<< (ostream& o, Sled_dog d) {
	cout << d.inf;
	cout << d.look;
	cout << d.character;
	cout << d.command_know;
	cout << d.needs;
	d.ride_character.display();
}
void Sled_dog::operator=(Dog a) {
	this->inf = a.get_inf();
	this->look = a.get_look();
	this->character = a.get_character();
	this->needs = a.get_needs();
	this->command_know = a.get_command_know();
	this->ride_character.set_speed(3);
	this->ride_character.set_max_way(30);
}