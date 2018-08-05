#pragma once
#include <string>
#include <iostream>
#include "Service.h"

using namespace std;

class gameconsole : public service
{
public:
	void servicename();
	void can();

	void play();
	void stop();
	void savegame();
	void loadgame();
};