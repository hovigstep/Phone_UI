#pragma once
#include <string>
#include <iostream>
#include "Service.h"

using namespace std;

class phone : public service
{
public:
	void placeCall(int);
	void recievecall();
	void setvoicevolume(int);
	void declinecall();

	void servicename();
	void can();
};