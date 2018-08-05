#pragma once
#include <string>
#include <iostream>
#include "Service.h"

using namespace std;

class emailclient : public service
{
public:
	void servicename();
	void can();

	void send();
	void recie();
	void reply();
	void forward();

};