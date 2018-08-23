#pragma once

#include "Header.h"


class Seller : public Employee
{
public:
	Seller();
	Seller(string name, string surname, int age, string department);

	~Seller()
	{
#ifdef TEST
		cout << "~Seller()" << endl;
#endif
	}

	void SetDepartment(string department);
	string GetDepartment() const
	{
		return _department;
	}

	virtual void Print();
	
private:
	string _department;
};

