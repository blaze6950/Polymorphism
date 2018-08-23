#pragma once
#include "Header.h"

enum class Posts{
	Seller,
	Manager,
	Director
};


class Employee1
{
	string _name;
	string _surname;
	int _age;
	double _salary;
	Posts _post;

	vector<Employee1> subordinates;
public:
	Employee1();
	Employee1(string name, string surname, int age, double salary, Posts post);
	
	void Print();
	void AddSubordinate(Employee1&  empl);

};

ostream& operator << (ostream& cout, Posts post);
