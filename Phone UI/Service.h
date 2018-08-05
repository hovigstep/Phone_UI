#pragma once
#include <string>
#include <iostream>

using namespace std;

class service
{

	virtual void Vprovider();
	virtual bool usekeyboard();

	virtual void servicename()=0;
	virtual void can()=0;

};