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
		cout << "����� �������� � ������� ������ (� ��/�)?" << endl;
		cin >> speed;
		cout << "����� ������������ ���������� ����� ���������� �� ����?" << endl;
		cin >> max_way;
	};
	void display() {
		cout << "�������� ������ - " << this->speed << " ��/�, ����������� � ��� ����� ������ " << this->max_way << " ��" << endl;
	};
	void set_speed(T a) { speed = a; };
	void set_max_way(T a) { max_way = a; };
	T get_speed() { return speed; };
	T get_max_way() { return max_way; };
};

