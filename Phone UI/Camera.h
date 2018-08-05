#pragma once
#include <string>
#include <iostream>
#include "Service.h"

using namespace std;

class camera : public service
{
public:
	void servicename();
	void can();
	
	void load();
	void save();
};