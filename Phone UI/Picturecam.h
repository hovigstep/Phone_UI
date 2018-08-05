#pragma once
#include <string>
#include <iostream>
#include "Service.h"
#include "Camera.h"

using namespace std;

class pictcam : public camera
{
	void servicename();
	void can();

	void takepic();
};