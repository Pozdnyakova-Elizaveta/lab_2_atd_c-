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
#include "dog.h"
using namespace std;
int main() {
	setlocale(LC_ALL, "RUS");
	int func = 0, kom = 0;
	Inf inf = Inf::Inf("name", 0, "breed");
	Look look = Look::Look("color", "color eyes");
	Character character = Character::Character(0, 0);
	Command_know command_know = Command_know::Command_know(0, 0, 0);
	Needs needs = Needs::Needs(0, 0);
	Dog *your_dog = new Dog[2];
	for (int i = 0; i != 2; i++) {
		your_dog[i].read();
		your_dog[i].display();
		Dog::number_dogs();
		cout<<"Год рождения - "<<year_of_birthday(your_dog[i].get_inf())<<endl;
	}
	Dog *search_dog = new Dog;
	string search_name;
	cout << "Введите имя собаки для поиска: " << endl;
	cin >> search_name;
	*search_dog = your_dog->search(your_dog, search_name);
	search_dog->display();
	delete [] your_dog;
	Dog::number_dogs();
	Dog your_dog_1 = Dog::Dog(inf, look, character, needs, command_know);
	your_dog_1.read();
	while (func != 8) {
		cout << "\nНажмите: 1 - для вывода информации о собаке" << endl;
		cout << "2 - погладить собаку" << endl;
		cout << "3 - обучить команде" << endl;
		cout << "4 - покормить" << endl;
		cout << "5 - погулять" << endl;
		cout << "6 - изменить возраст" << endl;
		cout << "7 - помощь кинолога" << endl;
		cout << "8 - завершение" << endl;
		cin >> func;
		switch (func) {
		case 1:
			your_dog_1.display();
			break;
		case 2:
			your_dog_1.touch(your_dog_1);
			break;
		case 3: {
			cout << "Выберите команду: 1. Сидеть" << endl;
			cout << "2. Лежать" << endl;
			cout << "3. Ко мне" << endl;
			cin >> kom;
			switch (kom) {
			case 1:
				your_dog_1.command(&your_dog_1,1);
				break;
			case 2:
				your_dog_1.command(&your_dog_1, 2);
				break;
			case 3:
				your_dog_1.command(&your_dog_1, 3);
				break;
			}
			break;
		}
		case 4:
			your_dog_1.eat(&your_dog_1);
			break;
		case 5:
			your_dog_1.walk(&your_dog_1);
			break;
		case 6: {
			int number;
			int vibor;
			cout << "Введите число, на которое вы хотите изменить возраст " << endl;
			cin >> number;
			cout << "Вы хотите увеличить(1) или уменьшить возраст(0)?" << endl;
			cin >> vibor;
			Inf inf_new;
			if (vibor == 0) {
				inf_new = your_dog_1.get_inf() - number;
				your_dog_1.set_inf(inf_new);
			}
			if (vibor == 1) {
				inf_new = your_dog_1.get_inf() + number;
				your_dog_1.set_inf(inf_new);
			}
			break;
		}
		case 7: {
			int r = rand() % 2;
			Character character_new;
			if (r == 0) {
				character_new=++your_dog_1;
				cout << "Кинолог поработал с собакой, и ее обучаемость стала выше - " << character_new.get_learn()<< endl;
			}
			if (r == 1) {
				character_new = your_dog_1++;
				cout << "У собаки был уровень обучаемости "<<character_new.get_learn()<<", а теперь - "<< your_dog_1.get_character().get_learn() << endl;

			}
			break;
		}

		}
		fflush(stdin);
	}
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
