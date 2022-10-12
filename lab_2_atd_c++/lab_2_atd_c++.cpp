﻿// lab_2_atd_c++.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <windows.h>
#include "inf.h"
#include "character.h"
#include "needs.h"
#include "look.h"
#include "command_know.h"
#include "dog.h"
using namespace std;
void touch(Dog dog);
void eat(Dog *dog);
void walk(Dog *dog);
void command(bool *a, int zn);
int main() {
	setlocale(LC_ALL, "RUS");
	int func = 0, kom = 0;
	Inf inf = Inf::Inf("name", 0, "breed");
	Look look = Look::Look("color", "color eyes");
	Character character = Character::Character(0, 0);
	Command_know command_know = Command_know::Command_know(0, 0, 0);
	Needs needs = Needs::Needs(0, 0);
	Dog* your_dog;
	your_dog = new Dog;
	*your_dog = Dog::Dog(inf, look, character, needs, command_know);
	your_dog->display();
	your_dog->read(your_dog);
	while (func != 6) {
		cout << "Нажмите: 1 - для вывода информации о собаке" << endl;
		cout << "2 - погладить собаку" << endl;
		cout << "3 - обучить команде" << endl;
		cout << "4 - покормить" << endl;
		cout << "5 - погулять" << endl;
		cout << "6 - завершение" << endl;
		cin >> func;
		switch (func) {
		case 1:
			your_dog->display();
			break;
		case 2:
			touch(*your_dog);
			break;
		case 3: {
			cout << "Выберите команду: 1. Сидеть" << endl;
			cout << "2. Лежать" << endl;
			cout << "3. Ко мне" << endl;
			cin >> kom;
			switch (kom) {
			case 1:
				command(&your_dog->command_know.sit, your_dog->character.learn);
				break;
			case 2:
				command(&your_dog->command_know.lie, your_dog->character.learn);
				break;
			case 3:
				command(&your_dog->command_know.to_me, your_dog->character.learn);
				break;
			}
			break;
		}
		case 4:
			eat(your_dog);
			break;
		case 5:
			walk(your_dog);
			break;
		}
		fflush(stdin);
	}
}
void touch(Dog dog) {
	if (dog.character.friendly) cout << dog.inf.name << " рад(а)!" << endl;
	else  cout << dog.inf.name << " не нравится!" << endl;
}
void eat(Dog *dog) {
	if (dog->needs.eat) {
		cout << dog->inf.name << " накормлен(а)!" << endl;
		dog->needs.eat = false;
	}
	else cout << dog->inf.name << " не хочет есть!" << endl;
}
void walk(Dog *dog) {
	if (dog->needs.walk) {
		cout << dog->inf.name << " погулял(а)!" << endl;
		dog->needs.walk = false;
	}
	else cout << dog->inf.name << " не хочет гулять!" << endl;
}
void command(bool *a, int zn) {
	if (*a) cout << "Собака уже это умеет" << endl;
	else {
		cout<<"Учим..."<<endl;
		Sleep((5 - zn) * 4000);
		cout<<"Теперь собака знает эту команду"<<endl;
		*a = true;
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
