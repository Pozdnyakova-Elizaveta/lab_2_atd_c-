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
using namespace std;
int main() {
	setlocale(LC_ALL, "RUS");
	int func = 0, kom = 0;
	Inf inf;
	Look look;
	Character character;
	Command_know command_know = Command_know::Command_know(0, 0, 0);
	Needs needs = Needs::Needs(0, 0);
	cout<<"Использование шаблона класса"<< endl;
	Ride_character<float> ride = Ride_character<float>::Ride_character(1.5, 40);
	Ride_character<string> ride_2 = Ride_character<string>::Ride_character("тридцать", "пять");
	ride.display();
	ride_2.display();
	Sled_dog s_dog;
	s_dog=Sled_dog::Sled_dog(inf, look, character, needs, command_know, ride);
	cout << "\nВведите информцию об ездовой собаке" << endl;
	s_dog.read();
	cout << s_dog;
	cout<<"\nВведите информцию об обычной собаке"<< endl;
	inf.read();
	look.read();
	character.read();
	Dog* dog1 = new Dog(inf, look, character, needs, command_know);
	Sled_dog* s_dog1 = new Sled_dog;
	*s_dog1 = s_dog;
	cout << "\nКоличество навыков" << endl;
	s_dog1->skills_output();
	dog1->skills_output();
	Man_with_dog* man1 = new Man_with_dog("Ivanov",inf, look, character, needs, command_know, 2.5);
	Man_with_sled_dog* man2 = new Man_with_sled_dog("Sidorov", s_dog.get_inf(), s_dog.get_look(), s_dog.get_character(), needs, command_know, s_dog.get_ride_character());
	cout<<"\nВладелец собаки и пройденное расстояние"<< endl;
	man1->moving_output(man1->moving(3));
	man2->moving_output(man2->moving(3));
	delete dog1;
	delete s_dog1;
	delete man1;
	delete man2;
	/*/Dog* your_dog = new Dog[2];
	Dog::work_massiv(your_dog);
	delete [] your_dog;
	Dog your_dog2[2][2];
	cout << "\n\n\n" << "Работа с двумерным массивом" << "\n\n\n";
	if (Dog::work_massiv_two(your_dog2)==1) 
	{
		func = 8;
		cout << "\n\nИсправьте ошибку в файле для дальнейшей работы" << endl;
	}
	Dog* search_dog = new Dog;
	string search_name;
	cout << "Введите имя собаки для поиска: " << endl;
	cin >> search_name;
	*search_dog = your_dog->search(your_dog, search_name);
	search_dog->display();
	delete[] your_dog;
	int a1, a2;
	if (func != 8) {
		Dog your_dog_1;
		cout << "Введите индексы элемента для дальнейшей работы" << endl;
		int p = 0;
		cin.exceptions(ios_base::failbit);
		while (p != 1) {
			try {
				cin >> a1;
				cin >> a2;
				if (a1 < 0 || a1>1 || a2 < 0 || a2>1) throw 0;
				p = 1;
			}
			catch (...) {
				cout << "Введите индексы числами от 0 до 1" << endl;
				cin.clear();
				cin.ignore(100,'\n');
			}
		}
		your_dog_1 = your_dog2[a1][a2];
		while (func != 8){
		cout << "\nНажмите: 1 - для вывода информации о собаке" << endl;
		cout << "2 - погладить собаку" << endl;
		cout << "3 - обучить команде" << endl;
		cout << "4 - покормить" << endl;
		cout << "5 - погулять" << endl;
		cout << "6 - изменить возраст" << endl;
		cout << "7 - помощь кинолога" << endl;
		cout << "8 - завершение" << endl;
		p = 0;
		while (p != 1) {
			try {
				cin >> func;
				if (func < 1 || func>8) throw 0;
				p = 1;
			}
			catch (...) {
				cout << "Введите число от 1 до 8" << endl;
				cin.clear();
				cin.ignore(100, '\n');
			}
		}
		switch (func) {
		case 1:
			cout<<your_dog_1;
			break;
		case 2:
			your_dog_1.touch(your_dog_1);
			break;
		case 3: {
			cout << "Выберите команду: 1. Сидеть" << endl;
			cout << "2. Лежать" << endl;
			cout << "3. Ко мне" << endl;
			p = 0;
			while (p != 1) {
				try {
					cin >> kom;
					if (kom < 1 || kom>3) throw 0;
					p = 1;
				}
				catch (...) {
					cout << "Введите число от 1 до 3" << endl;
					cin.clear();
					cin.ignore(100, '\n');
				}
			}
			switch (kom) {
			case 1:
				your_dog_1.command(&your_dog_1, 1);
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
			your_dog_1.walk();
			break;
		case 6: {
			int number;
			int vibor;
			cout << "Введите число, на которое вы хотите изменить возраст " << endl;
			p = 0;
			while (p != 1) {
				try {
					cin >> number;
					p = 1;
				}
				catch (...) {
					cout << "Введите число" << endl;
					cin.clear();
					cin.ignore(100, '\n');
				}
			}
			cout << "Вы хотите увеличить(1) или уменьшить возраст(0)?" << endl;
			p = 0;
			while (p != 1) {
				try {
					cin >> vibor;
					if (vibor < 0 || vibor>1) throw 0;
					p = 1;
				}
				catch (...) {
					cout << "Введите число 0 или 1" << endl;
					cin.clear();
					cin.ignore(100, '\n');
				}
			}
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
				character_new = ++your_dog_1;
				cout << "Кинолог поработал с собакой, и ее обучаемость стала выше - " << character_new.get_learn() << endl;
			}
			if (r == 1) {
				character_new = your_dog_1++;
				cout << "У собаки был уровень обучаемости " << character_new.get_learn() << ", а теперь - " << your_dog_1.get_character().get_learn() << endl;

			}
			break;
		}

		}
		fflush(stdin);
	}
	}/*/
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
