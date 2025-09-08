#pragma once
class Human
{
	char* name;
	char* surname;
	int age;

public:
	Human();
	Human(const char* n, const char* s, int a);
	~Human();
	//void Input();
	void Print();

	char* GetName();
	char* GetSurname();
	int GetAge();

	void SetName(const char* NewName);
	void SetSurname(const char* NewSurname);
	void SetAge(int NewAge);
};