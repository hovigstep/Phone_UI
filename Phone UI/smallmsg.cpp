#include "Service.h"
#include "smallmsg.h"
#include <iostream>

using namespace std;

void smallmsg::servicename()
{
	cout << "Send Small Messages" << endl;
}

void smallmsg::can()
{
	cout << "Can Send Small Messages" << endl;
}

void smallmsg::text()
{
	cout << "load text" << endl;
}
