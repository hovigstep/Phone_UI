#pragma once
#include <string>
#include <iostream>
#include "Service.h"
#include "Player.h"

using namespace std;

class mp3player : public player
{
public:
	void servicename();
	void can();

	void mp3file();
};