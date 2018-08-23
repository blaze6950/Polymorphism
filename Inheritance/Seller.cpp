#include "Header.h"


Seller::Seller():Employee("", "", 0)
{	
	_department = "";
#ifdef TEST
	cout << "Seller()" << endl;
#endif
}

Seller::Seller(string name, string surname, int age, string department) :
	Employee(name, surname, age)
{
	_department = department;
#ifdef TEST
	cout << "Seller(params)" << endl;
#endif
}

void Seller::SetDepartment(string department)
{
	_department = department;
}

void Seller::Print()
{
	cout << "Seller ";
	Employee::Print();
	cout << "department: " << _department << endl;
}
