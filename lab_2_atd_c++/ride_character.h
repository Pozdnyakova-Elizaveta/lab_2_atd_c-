#pragma once
#include <iostream>
template <typename T>
class Ride_character
{
private:
	T speed;
	T max_way;
public:
	Ride_character(T speed, T max_way) :speed(speed), max_way(max_way) {};
	Ride_character() {};
	~Ride_character() {};
	void read() {
		cout << "Какая скорость у ездовой собаки (в км/ч)?" << endl;
		cin >> speed;
		cout << "Какое максимальное расстояние может преодолеть за день?" << endl;
		cin >> max_way;
	};
	void display() {
		cout << "Скорость собаки - " << this->speed << " км/ч, максимально с ней можно пройти " << this->max_way << " км" << endl;
	};
	void set_speed(T a) { speed = a; };
	void set_max_way(T a) { max_way = a; };
	T get_speed() { return speed; };
	T get_max_way() { return max_way; };
};

