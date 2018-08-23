#include "Employee1.h"


Employee1::Employee1()
{
}

Employee1::Employee1(string name, string surname, int age, double salary, Posts post)
{
	_name = name;
	_surname = surname;
	_age = age;
	_salary = salary;
	_post = post;
}

void Employee1::AddSubordinate(Employee1&  empl)
{
	if (_post == Posts::Manager && empl._post != Posts::Director
		|| _post == Posts::Director)
		subordinates.push_back(empl);
}


void Employee1::Print()
{
	cout << _name << " " << _surname << endl;
	cout << "  age: " << _age << endl;
	cout << "  salary: " << _salary << endl;
	cout << "  post: " << _post << endl;

	if (!subordinates.empty())
	{
		cout << "  subordinates: " << endl;
		for (int i = 0; i < subordinates.size(); i++)
		{
			subordinates[i].Print();
			cout << endl;
		}
	}
}

ostream& operator << (ostream& cout, Posts post)
{
	string arr[3] = { "Seller", "Manager", "Director" };
	cout << arr[(int)post];
	return cout;
}
