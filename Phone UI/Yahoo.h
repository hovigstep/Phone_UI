#pragma once
#include <string>
#include <iostream>
#include "Service.h"
#include "Emailclient.h"

using namespace std;

class yahoo : public emailclient
{
	void servicename();
	void can();

	void SMTP();
	void POP();
	void IMAP();

};