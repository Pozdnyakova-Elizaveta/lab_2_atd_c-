#include "ride_character.h"
using namespace std;
template <typename T> Ride_character<T>::Ride_character() {
	speed = 0;
	max_way = 0;
}
template <typename T> Ride_character<T>::~Ride_character() {
}
template <typename T> void Ride_character<T>::read() {
	cout << "����� �������� � ������� ������ (� ��/�)?" << endl;
	cin >> speed;
	cout << "����� ������������ ���������� ����� ���������� �� ����?" << endl;
	cin >> max_way;
}
template <typename T> void Ride_character<T>::display() {
	cout << "�������� ������ - " << this->speed << " ��/�, ����������� � ��� ����� ������ " << this->max_way << " ��" << endl;
}
template <typename T> void Ride_character<T>::set_speed(T a) { speed = a; }
template <typename T> T Ride_character<T>::get_speed() { return speed; }
template <typename T> T Ride_character<T>::get_max_way() { return max_way; }
template <typename T> void Ride_character<T>::set_max_way(T a) { max_way = a; }

