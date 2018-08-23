#pragma once

#include "Header.h"

class Manager : public Employee
{
public:
	Manager();
	~Manager()
	{
#ifdef TEST
		cout << "~Manager()" << endl;
#endif
	}
	void AddSlave(Seller* empl);
	void Print();
private:
	vector<Seller*> slaves;
};

