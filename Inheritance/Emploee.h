#pragma once

#include "Header.h"

class Employee
{
public:
	Employee()
	{
#ifdef TEST
		cout << "Employee()" << endl;
#endif
	}
	Employee(string name, string surname, int age);

	~Employee()
	{
#ifdef TEST
		cout << "~Employee()" << endl;
#endif
	}
	
	void SetName(string name);
	void SetSurname(string surname);
	void SetAge(int age);

	string GetName() const
	{
		return _name;
	}
	string GetSurname() const
	{
		return _surname;
	}
	int GetAge() const
	{
		return _age;
	}
	
	virtual void Print();
private:
	string _name;
	string _surname;
	int _age = 0;	

};

