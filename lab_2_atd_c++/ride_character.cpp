#include "ride_character.h"
using namespace std;
template <typename T> Ride_character<T>::Ride_character() {
	speed = 0;
	max_way = 0;
}
template <typename T> Ride_character<T>::~Ride_character() {
}
template <typename T> void Ride_character<T>::read() {
	cout << "Какая скорость у ездовой собаки (в км/ч)?" << endl;
	cin >> speed;
	cout << "Какое максимальное расстояние может преодолеть за день?" << endl;
	cin >> max_way;
}
template <typename T> void Ride_character<T>::display() {
	cout << "Скорость собаки - " << this->speed << " км/ч, максимально с ней можно пройти " << this->max_way << " км" << endl;
}
template <typename T> void Ride_character<T>::set_speed(T a) { speed = a; }
template <typename T> T Ride_character<T>::get_speed() { return speed; }
template <typename T> T Ride_character<T>::get_max_way() { return max_way; }
template <typename T> void Ride_character<T>::set_max_way(T a) { max_way = a; }

