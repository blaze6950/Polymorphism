#pragma once

#include "Header.h"

class Store
{
	vector<Employee*> staff;
public:
	Store();
	void AddEmployee(Employee* empl)
	{
		staff.push_back(empl);
	}
	void Print()
	{
		for (size_t i = 0; i < staff.size(); i++)
		{
			staff[i]->Print();
			cout << endl;
		}
	}
	
};

