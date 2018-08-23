#include "ManagerSeller.h"


ManagerSeller::ManagerSeller()
{
#ifdef TEST
	cout << "ManagerSeller()" << endl;
#endif
}


ManagerSeller::~ManagerSeller()
{
#ifdef TEST
	cout << "~ManagerSeller()" << endl;
#endif
}


void ManagerSeller::Print()
{
	cout << "Manager - seller: ";
	Seller::Print();
}