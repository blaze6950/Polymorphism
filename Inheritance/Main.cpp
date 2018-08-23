#include "Header.h"

int main()
{
	//cout << sizeof(Employee) << endl;
	
	Seller seller1;
	seller1.SetName("Igor");
	seller1.SetSurname("Sidorov");
	seller1.SetAge(25);
	seller1.SetDepartment("Milk");
	seller1.Print();

	cout << endl;
	Manager manager1;
	manager1.SetName("Olga");
	manager1.SetSurname("Petrova");
	manager1.SetAge(34);
	manager1.AddSlave(&seller1);
	manager1.Print();

	Store store;
	cout << endl << "Store: " << endl << endl;
	int choise;
	
	do
	{
		cout << "1. Add seller" << endl;
		cout << "2. Add manager" << endl;

		cin >> choise;

		switch (choise)
		{
		case 1:
		{
			auto s = new Seller();
			s->SetName("Igor");
			s->SetSurname("Sidorov");
			s->SetAge(25);
			s->SetDepartment("Milk");
			//init
			store.AddEmployee(s);

			break;

		}

		case 2:
		{
			auto m = new Manager();
			m->SetName("Olga");
			m->SetSurname("Petrova");
			m->SetAge(34);
			store.AddEmployee(m);
			break;
		}
		}
	} while (choise == 1 || choise == 2);

	store.Print();
}