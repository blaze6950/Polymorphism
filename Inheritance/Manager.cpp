#include "Header.h"


Manager::Manager()
{
#ifdef TEST
	cout << "Manager()" << endl;
#endif
}


void Manager::AddSlave(Seller* empl)
{
	slaves.push_back(empl);
}

void Manager::Print()
{
	cout << "Manager: ";
	Employee::Print();

	if (!slaves.empty())
	{
		cout << "Slaves: " << endl;
		for (int i = 0; i < slaves.size(); i++)
		{
			slaves[i]->Print();
		}
	}
}

