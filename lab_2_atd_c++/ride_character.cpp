#include "ride_character.h"
using namespace std;
Ride_character::Ride_character(float speed, float max_way){
}
Ride_character::Ride_character() {
	speed = 0;
	max_way = 0;
}
Ride_character::~Ride_character() {
}
void Ride_character::read() {
	cout << "Какая скорость у ездовой собаки (в км/ч)?" << endl;
	cin >> speed;
	cout << "Какое максимальное расстояние может преодолеть за день?" << endl;
	cin >> max_way;
}
void Ride_character::display() {
	cout << "Скорость собаки - " << this->speed << " км/ч, максимально с ней можно пройти " << this->max_way << " км" << endl;
}
void Ride_character::set_speed(float a) { speed = a; }
float Ride_character::get_speed() { return speed; }
float Ride_character::get_max_way() { return max_way; }
void Ride_character::set_max_way(float a) { max_way = a; }
