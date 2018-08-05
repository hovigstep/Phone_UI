#include "Camera.h"
#include "Dayplanner.h"
#include "Emailclient.h"
#include "Gameconsole.h"
#include "Gmail.h"
#include "Messaging.h"
#include "MMS.h"
#include "mp3player.h"
#include "Phone.h"
#include "Picturecam.h"
#include "Player.h"
#include "Service.h"
#include "smallmsg.h"
#include "VideoCam.h"
#include "VideoPlayer.h"
#include "Webbrowser.h"
#include "Yahoo.h"

#include <string>
#include <iostream>
#include <stdio.h>
using namespace std;

void main()
{
	int Choice;
	int MaxChoices;
	MaxChoices = 12;
	Choice = 0;
	phone myphone;
	camera mycam;
	mp3player mymp3;
	vidplayer myvid;
	gameconsole mygame;
	webbrowser myweb;
	smallmsg mysms;
	mms mymms;
	dayplanner mydplan;
	emailclient myclient;


	while (Choice < MaxChoices)
	{
		cout << "************** MAIN MENU ****************" << endl;
		cout << "To Enter Employee info press 1" << endl;
		cout << "To Exit press 10" << endl;
		cout << "******************************************" << endl;
		cout << "1 - Phone " << endl;
		cout << "2 - Camera " << endl;
		cout << "3 - Mp3 Player " << endl;
		cout << "4 - Video Player " << endl;
		cout << "5 - Game Player " << endl;
		cout << "6 - Web Browser " << endl;
		cout << "7 - Small Messaging Service Provider " << endl;
		cout << "8 - Multimedia Messaging Service Provider " << endl;
		cout << "9 - Day Planner " << endl;
		cout << "10 - Email Client " << endl;
		cout << "11 - Exit" << endl;
		cin >> Choice;
		switch (Choice)
		{
		case 1:
			

			myphone.servicename();
			myphone.can();
			cout << "1-Place a call" << endl;
			cout << "2-Recieve a call " << endl;
			cout << "3-Setvolume" << endl;
			cout << "4- Decline Call" << endl;
			int Choice1;
			switch(Choice1)
			{
			case 1:
				myphone.placeCall(6043);
				break;
			case 2:
				myphone.recievecall();
				break;
			case 3:
				myphone.setvoicevolume(5);
				break;
			case 4:
				myphone.declinecall();
				break;
			case 5:
				return;
			}
			break;

		case 2:
		
			
			mycam.servicename();
			mycam.can();
			cout << "1-Load" << endl;
			cout << "2-Save " << endl;
			int choice;
			switch (choice)
			{
			case 1:
				mycam.load();
				break;
			case 2:
				mycam.save();
				break;
			}
			break;

		case 3:
			
			

			mymp3.servicename();
			mymp3.can();
			cout << "1- Mp3file" << endl;
			int choice1;
			switch (choice1)
			{
			case 1:
				mymp3.mp3file();
				break;

			case 5:
				return;
			}
			break;

		case 4:
			
			

			myvid.servicename();
			myvid.can();
			cout << "1- Video File" << endl;
			int Choice2;
			switch (Choice2)
			{
			case 1:
				myvid.vidfile();
				break;
			case 5:
				return;
			}
			break;

		case 5:
			

			mygame.servicename();
			mygame.can();
			cout << "1-Play" << endl;
			cout << "2-Stop " << endl;
			cout << "3-Save Game" << endl;
			cout << "4-Load Game" << endl;
			int Choice3;
			switch (Choice3)
			{
			case 1:
				mygame.play();
				break;
			case 2:
				mygame.stop();
				break;
			case 3:
				mygame.savegame();
				break;
			case 4:
				mygame.loadgame();
				break;
			case 5:
				return;
			}
			break;

		case 6:
			
			

			myweb.servicename();
			myweb.can();
			cout << "1-Go" << endl;
			cout << "2-Cache " << endl;
			cout << "3-Open New Tab" << endl;
			int choice4;
			switch (choice4)
			{
			case 1:
				myweb.go();
				break;
			case 2:
				myweb.cache();
				break;
			case 3:
				myweb.opennewtab();
				break;
			case 5:
				return;
			}
			break;

		case 7:
			
			

			mysms.servicename();
			mysms.can();
			cout << "1- Text" << endl;
			int Choice5;
			switch (Choice5)
			{
			case 1:
				mysms.text();
				break;
			case 5:
				return;
			}
			break;

		case 8:
			
		

			mymms.servicename();
			mymms.can();
			cout << "1- MMS File" << endl;
			int Choice6;
			switch (Choice6)
			{
			case 1:
				mymms.mmfilename();
				break;
			case 5:
				return;
			}
			break;

		case 9:
			
		

			mydplan.servicename();
			mydplan.can();
			cout << "1-Add Entry" << endl;
			cout << "2-Modify Entry " << endl;
			cout << "3-Delete entry" << endl;
			int Choice7;
			switch (Choice7)
			{
			case 1:
				mydplan.addentry();
				break;
			case 2:
				mydplan.modifyentry();
				break;
			case 3:
				mydplan.deletentry();
				break;
			case 5:
				return;
			}
			break;

		case 10:
			
			
		
			myclient.servicename();
			myclient.can();
			cout << "1-Send" << endl;
			cout << "2-Recieve " << endl;
			cout << "3-Reply" << endl;
			cout << "4-Forward" << endl;
			int Choice8;
			switch (Choice8)
			{
			case 1:
				myclient.send();
				break;
			case 2:
				myclient.recie();
				break;
			case 3:
				myclient.reply();
				break;
			case 4:
				myclient.forward();
				break;
			case 5:
				return;
			}
			break;

		case 11:
		
			return;

		default:
			cout << "enter menue choice" << endl;
			main();
		}
	}
}