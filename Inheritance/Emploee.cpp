#include "Header.h"


Employee::Employee(string name, string surname, int age)
{
	_name = name;
	_surname = surname;
	_age = age;	

#ifdef TEST
	cout << "Employee(params)" << endl;
#endif
}

void Employee::Print()
{
	cout << _name << " " << _surname << " age: " << _age << endl;
}


void Employee::SetName(string name)
{
	_name = name;
}
void Employee::SetSurname(string surname)
{
	_surname = surname;
}
void Employee::SetAge(int age)
{
	_age = age;
}

