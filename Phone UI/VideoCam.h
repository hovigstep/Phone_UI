#pragma once
#include <string>
#include <iostream>
#include "Service.h"
#include "Camera.h"

using namespace std;

class videocam : public camera
{
	void servicename();
	void can();

	void record();
	void stoprecording();
};