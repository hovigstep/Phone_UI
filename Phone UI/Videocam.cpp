#include "Service.h"
#include "Videocam.h"
#include <iostream>

using namespace std;

void videocam::servicename()
{
	cout << "Video cam" << endl;
}

void videocam::can()
{
	cout << "Can Record video" << endl;
}

void videocam::record()
{
	cout << "Record video" << endl;
}

void videocam::stoprecording()
{
	cout << "Stop recording" << endl;
}