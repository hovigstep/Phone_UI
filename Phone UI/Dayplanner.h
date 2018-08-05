#pragma once
#include <string>
#include <iostream>
#include "Service.h"

using namespace std;

class dayplanner : public service
{
public:
	void servicename();
	void can();

	void addentry();
	void modifyentry();
	void deletentry();
};