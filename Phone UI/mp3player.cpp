#include "Service.h"
#include "mp3player.h"
#include <iostream>

using namespace std;

void mp3player::servicename()
{
	cout << "Mp3 Player" << endl;
}

void mp3player::can()
{
	cout << "Can play Digital music" << endl;
}

void mp3player::mp3file()
{
	cout << "load file" << endl;
}