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
	cout << "����� �������� � ������� ������ (� ��/�)?" << endl;
	cin >> speed;
	cout << "����� ������������ ���������� ����� ���������� �� ����?" << endl;
	cin >> max_way;
}
void Ride_character::display() {
	cout << "�������� ������ - " << this->speed << " ��/�, ����������� � ��� ����� ������ " << this->max_way << " ��" << endl;
}
void Ride_character::set_speed(float a) { speed = a; }
float Ride_character::get_speed() { return speed; }
float Ride_character::get_max_way() { return max_way; }
void Ride_character::set_max_way(float a) { max_way = a; }
