#include "Service.h"
#include "Phone.h"
#include <iostream>

using namespace std;

void phone::servicename()
{
	cout << "Phone" << endl;
}

void phone::can()
{
	cout << "Can make phone-call" << endl;
}

void phone::placeCall(int)
{

	cout << "Placing a phonecall" << endl;
}

void phone::recievecall()
{
	cout << "Recieve phonecall" << endl;
}

void phone::setvoicevolume(int)
{
	cout << "Set vol to" << endl;
}

void phone::declinecall()
{
	cout << "Phonecall declined" << endl;
}
