// lab_2_atd_c++.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <string.h>
#include <conio.h>
#include "inf.h"
#include "character.h"
#include "needs.h"
#include "look.h"
#include "command_know.h"
#include <fstream>
#include "Sled_dog.h"
#include "Man_with_dog.h"
#include "Man_with_sled_dog.h"
#include <algorithm>
#include <vector>
using namespace std;
bool con(Dog* a, Dog* b) {
	if (a->get_inf().get_age() < b->get_inf().get_age()) return true;
	else return false;
}
bool cond(Dog* d) {
	return(d->get_inf().get_age() > 3 && d->get_inf().get_age() < 5);
}
int main() {
	vector <Dog*> all_dog;
	vector<Dog*>::iterator it;
	setlocale(LC_ALL, "RUS");
	int func = 0, num=0,kom = 0;
	Inf inf;
	Look look;
	Character character;
	Command_know command_know = Command_know::Command_know(0, 0, 0);
	Needs needs = Needs::Needs(0, 0);
	Dog* your_dog = new Dog[2];
	Sled_dog* your_sled_dog = new Sled_dog[2];
	for (int i = 0; i != 2; i++) {
		your_dog[i].read();
			your_sled_dog[i].read();
	}
	for (int i = 0; i != 2; i++) {
		all_dog.push_back(&your_dog[i]);
		all_dog.push_back(&your_sled_dog[i]);
	}
	while (func != 7) {
		cout << "Работа с контейнером" << endl;
		cout << "1 - вывод всех собак" << endl;
		cout << "2 - добавить собаку" << endl;
		cout << "3 - удалить собаку из списка" << endl;
		cout << "4 - общее количество собак" << endl;
		cout << "5 - поиск" << endl;
		cout << "6 - сортировка" << endl;
		cout << "7 - завершить работу с контейнером" << endl;
		cin >> func;
		switch (func) {
		case 1: {
			for (it = all_dog.begin(); it != all_dog.end(); ++it) {
				if (dynamic_cast<Sled_dog*>(*it)) cout << "\nЕздовая собака: ";
				else cout << "\nОбычная собака: ";
				(*it)->display();
			}
			break;
			}
		case 2: {
			cout << "Введите 1 или 2: 1 - добавить обычную собаку, 2 - добавить ездовую собаку" << endl;
			cin >> num;
			if (num == 1) {
				Dog* dog = new Dog;
				dog->read();
				all_dog.emplace_back(dog);
			}
			if (num == 2) {
				Sled_dog* dog = new Sled_dog;
				dog->read();
				all_dog.emplace_back(dog);
				delete dog;
			}
			break;
		}
		case 3: {
			cout << "Введите номер собаки для удаления (от 1 до " << all_dog.size() << ")" << endl;
			cin >> num;
			if (num < all_dog.size() || num == all_dog.size()) {
				it = all_dog.begin();
				it = it + num;
				all_dog.erase(it);
			}
			else cout << "Номер был введен неправильно" << endl;
			break;
		}
		case 4: {
			cout << "Всего собак - " << all_dog.size() << endl;
			break;
		}
		case 5: {
			vector<Dog*>::iterator find;
			find = find_if(all_dog.begin(), all_dog.end(), cond);
			if (find != all_dog.end()) (*find)->display();
			break;
		}
		case 6: {
			sort(all_dog.begin(), all_dog.end(), con);
			cout << "Сортировка по возрастанию возраста выполнена" << endl;
		}
		}
	}
	all_dog.clear();
	vector<Dog*> tmp = all_dog;
	all_dog.swap(tmp);

}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
