#include <iostream>
#include "Human.h"
using namespace std;

int main()
{
	Human obj1;

	cout << "\nSetters: " << endl;
	obj1.SetName("Liza");
	obj1.SetSurname("Vviivi");
	obj1.SetAge(22);

	obj1.Print();

	cout << "\nGetters: " << endl;
	cout << "Name: " << obj1.GetName() << endl;
	cout << "Surname: " << obj1.GetSurname() << endl;
	cout << "Age: " << obj1.GetAge() << endl;
}