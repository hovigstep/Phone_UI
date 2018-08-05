#pragma once
#include <string>
#include <iostream>
#include "Service.h"

using namespace std;

class webbrowser : public service
{
public:
	void servicename();
	void can();

	void go();
	void cache();
	void opennewtab();
};