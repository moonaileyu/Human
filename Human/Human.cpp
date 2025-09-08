#include "Human.h"
#include <iostream>
using namespace std;

Human::Human()
{
	name = nullptr;
	surname = nullptr;
	age = 0;
}

Human::Human(const char* n, const char* s, int a)
{
	name = new char[strlen(n) + 1];
	strcpy_s(name, strlen(n) + 1, n);

	surname = new char[strlen(s) + 1];
	strcpy_s(surname, strlen(s) + 1, s);

	age = a;
}

Human::~Human()
{
	delete[] name;
	delete[] surname;
}

//void Human::Input()
//{
//
//}

void Human::Print()
{
	cout << "Name: " << name << "\nSurname: " << surname << "\nAge: " << age;
}

char* Human::GetName()
{
	return nullptr;
}

char* Human::GetSurname()
{
	return nullptr;
}

int Human::GetAge()
{
	return 0;
}

void Human::SetName(const char* NewName)
{
	if (name != nullptr)
	{
		delete[] name;
	}
	name = new char[strlen(NewName) + 1];
	strcpy_s(name, strlen(NewName) + 1, NewName);
}

void Human::SetSurname(const char* NewSurname)
{
	if (surname != nullptr)
	{
		delete[] surname;
	}
	surname = new char[strlen(NewSurname) + 1];
	strcpy_s(surname, strlen(NewSurname) + 1, NewSurname);
}

void Human::SetAge(int NewAge)
{
	if (NewAge < 0)
	{
		age = 0;
	}
	else
	{
		age = NewAge;
	}
}