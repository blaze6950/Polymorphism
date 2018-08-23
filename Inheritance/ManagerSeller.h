#pragma once

#include "Header.h"

class ManagerSeller : public Manager, public Seller
{
public:
	ManagerSeller();
	~ManagerSeller();

	void Print();
};

