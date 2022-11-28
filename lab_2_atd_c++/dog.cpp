#include "dog.h"
#include <iostream>
#include <fstream>
#include <string>
#include <windows.h>
using namespace std;
int Dog::sum = 0;
int Dog::sum_friendly = 0;
Dog::Dog(Inf inf, Look look, Character character, Needs needs, Command_know command_know) {
	this->inf = inf;
	this->look = look;
	this->character = character;
	this->needs = needs;
	this->command_know = command_know;
}
Dog::Dog(Inf inf) {
	this->inf=inf;
}
Dog::Dog() {
}
Dog::~Dog() {
	sum = sum - 1;
	if (this->character.get_friendly()) sum_friendly--;
}
Inf Dog::get_inf() { return inf; }
void Dog::set_inf(Inf inf) { this->inf = inf; }
Character Dog::get_character() { return character; }
void Dog::set_character(Character character) { this->character = character; }
void Dog::number_dogs() {
	int k = sum - sum_friendly;
	printf("����� ����� - %d\n", sum);
	printf("�� ��� ����������� - %d, ����������� - %d\n", sum_friendly,k);
}
void Dog::read() {
	inf.read();
	look.read();
	character.read();
}
void Dog::set_look(Look look) { this->look = look; }
void Dog::display() {
	inf.display();
	look.display();
	character.display();
	command_know.display();
	needs.display();
}
void Dog::touch(Dog dog) {
	if (dog.character.get_friendly()) cout << dog.inf.get_name() << " ���(�)!" << endl;
	else  cout << dog.inf.get_name() << " �� ��������!" << endl;
}
void Dog::eat(Dog* dog) {
	if (!dog->needs.get_eat()) {
		cout << dog->inf.get_name() << " ���������(�)!" << endl;
		dog->needs.set_eat(true);
	}
	else cout << dog->inf.get_name() << " �� ����� ����!" << endl;
}
void Dog::walk(Dog* dog) {
	if (!dog->needs.get_walk()) {
		cout << dog->inf.get_name() << " �������(�)!" << endl;
		dog->needs.set_walk(true);
	}
	else cout << dog->inf.get_name() << " �� ����� ������!" << endl;
}
void Dog::command(Dog* dog, int com) {
	switch (com) {
	case(1): {
		if (dog->command_know.get_sit()) cout << "������ ��� ��� �����" << endl;
		else {
			cout << "����..." << endl;
			Sleep((5 - dog->character.get_learn()) * 4000);
			cout << "������ ������ ����� ��� �������" << endl;
			dog->command_know.set_sit(true);
		}
		break;
	}
	case (2): {
		if (dog->command_know.get_lie()) cout << "������ ��� ��� �����" << endl;
		else {
			cout << "����..." << endl;
			Sleep((5 - dog->character.get_learn()) * 4000);
			cout << "������ ������ ����� ��� �������" << endl;
			dog->command_know.set_lie(true);
		}
		break;
	}
	case(3):
	{
		if (dog->command_know.get_to_me()) cout << "������ ��� ��� �����" << endl;
		else {
			cout << "����..." << endl;
			Sleep((5 - dog->character.get_learn()) * 4000);
			cout << "������ ������ ����� ��� �������" << endl;
			dog->command_know.set_to_me(true);
		}
		break;
	}
	}
	int *k=new int(0);
	k = dog->command_know.count_command(dog->command_know, k);
	cout << "������ ������ ����� " <<*k<<" ������(�)"<< endl;
	delete k;
}
Character Dog::operator++() {
	Character copy = this->get_character();
	int l = copy.get_learn();
	++l;
	copy.set_learn(l);
	this->set_character(copy);
	return this->get_character();
}
Character Dog::operator++(int d) {
	Character copy = this->get_character();
	Character copy_izm = this->get_character();
	int l = copy_izm.get_learn();
	++l;
	copy_izm.set_learn(l);
	this->set_character(copy_izm);
	return copy;
}
Dog& Dog::search(Dog a[], string name) {
	int i = 0;
	while (i != 2 && a[i].get_inf().get_name().compare(name) != 0) i++;
	return a[i];
}
void Dog::work_massiv(Dog dog[]) {
	ifstream in;
	try
	{
		in.open("spisok.txt");
		if (!(in.is_open())) throw 0;
		string name, breed, color, color_eye;
		int age, learn;
		bool friendly;
		int p = 0;
		if (in.peek() == EOF) throw 'e';
		for (int i = 0; i != 2; i++) {
				try {
					if (in.peek() == EOF) throw "error";
					if (!(in >> name)) throw '0';
					if (!(in >> age)) throw 0;
					if (age < 0) throw 1;
					if (!(in >> breed)) throw '1';
					if (!(in >> color)) throw '2';
					if (!(in >> color_eye)) throw '3';
					if (!(in >> friendly)) throw false;
					if (!(in >> learn)) throw 2;
					if (learn < 1 || learn>5) throw 3;
					Inf inf = Inf::Inf(name, age, breed);
					Look look = Look::Look(color, color_eye);
					Character character = Character::Character(friendly, learn);
					dog[i].set_inf(inf);
					dog[i].set_character(character);
					dog[i].set_look(look);
					sum = sum + 1;
					if (dog[i].character.get_friendly()) sum_friendly++;
					dog[i].display();
					cout << "��� �������� - " << year_of_birthday(dog[i].get_inf()) << endl;
				}
				catch (const char* a) {
					if(p==0)cout << "� ����� ������������ ������ ��� ���������� �������" << endl;
				}
				catch (int a) {
					if (a == 0) cout << "�� ������� ������� ��������� �������� ��������" << endl;
					if (a == 1) cout << "������� ������ ���� ������������� ������" << endl;
					if (a==2) cout << "�� ������� ������� ��������� �������� �����������" << endl;
					if (a == 3) cout << "������� ����������� ������ ���� ������ �� 1 �� 5" << endl;
					p = 1;
				}
				catch (char a) {
					cout << "�� ������� ������� ��������� ��������";
					if (&a == "0") cout << " ������" << endl;
					if (&a == "1") cout << " ������" << endl;
					if (&a == "2") cout << " ������" << endl;
					if (&a == "3") cout << " ����� ����" << endl;
					p = 1;
				}
				catch (bool a) {
					cout << "�� ������� ������� ������� �������� �������������" << endl;
					p = 1;
				}
			}
			in.close();
	}
	catch (int b) {
		cout<<"�� ������� ������� ����"<< endl;
	}
	catch (char b) {
		cout << "���� ������" << endl;
	}
}
int Dog::work_massiv_two(Dog (*a)[2]) {
	ifstream in;
	int p = 0;
	try {
		in.open("spisok2.txt");
		if (!(in.is_open())) throw 0;
		string name, breed, color, color_eye;
		int age, learn;
		bool friendly;
		if (in.peek() == EOF) throw '0';
		for (int i = 0; i != 2; i++)
		{
			for (int j = 0; j != 2; j++) {
				try {
					if (in.peek() == EOF) throw "error";
					if (!(in >> name)) throw '0';
					if (!(in >> age)) throw 0;
					if (age < 0) throw 1;
					if (!(in >> breed)) throw '1';
					if (!(in >> color)) throw '2';
					if (!(in >> color_eye)) throw '3';
					if (!(in >> friendly)) throw false;
					if (!(in >> learn)) throw 2;
					if (learn < 1 || learn>5) throw 3;
					Inf inf = Inf::Inf(name, age, breed);
					Look look = Look::Look(color, color_eye);
					Character character = Character::Character(friendly, learn);
					a[i][j].set_inf(inf);
					a[i][j].set_character(character);
					a[i][j].set_look(look);
					sum = sum + 1;
					if (a[i][j].get_character().get_friendly()) sum_friendly++;
					a[i][j].display();
					cout << "��� �������� - " << year_of_birthday(a[i][j].get_inf()) << endl;
				}
				catch (const char* a) {
					if (p == 0) cout << "� ����� ������������ ������ ��� ���������� �������" << endl;
					p = 1;
				}
				catch (int a) {
					if (a == 0) cout << "�� ������� ������� ��������� �������� ��������" << endl;
					if (a == 1) cout << "������� ������ ���� ������������� ������" << endl;
					if (a == 2) cout << "�� ������� ������� ��������� �������� �����������" << endl;
					if (a == 3) cout << "������� ����������� ������ ���� ������ �� 1 �� 5" << endl;
					p = 1;
				}
				catch (char a) {
					cout << "�� ������� ������� ��������� ��������";
					if (&a == "0") cout << " ������" << endl;
					if (&a == "1") cout << " ������" << endl;
					if (&a == "2") cout << " ������" << endl;
					if (&a == "3") cout << " ����� ����" << endl;
					p = 1;
				}
				catch (bool a) {
					cout << "�� ������� ������� ������� �������� �������������" << endl;
					p = 1;
				}
			}
		}
		in.close();
	}
	catch (int b) {
		cout << "�� ������� ������� ����" << endl;
		p = 1;
	}
	catch (char b) {
		cout << "���� ������" << endl;
		p = 1;
	}
	return p;
}
Look Dog::get_look() { return look; }