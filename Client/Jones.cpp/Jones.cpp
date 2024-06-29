#ifndef __GAME_H //Checks to see that this header is only once in the game

#include <cstdlib> //only for pause. Remove when done.
#include <Game.h>
#include <Avatar.h>
#include <vector>
#include <Building.h>
#include <bank.h>
#include "test.h"
#ifdef HIDE
//#include<iostream>
//#include <includeall.h>
/*extern "C" __declspec(dllexport) A* CreateObjectofA1()
{
 return new A();
}*/
#endif

#ifndef PROTOTTYPE
	bool FreeGameMem(vector<CAvatar*>);
#endif

#define ((IAction*)(a)) Hello//Lior

int main(int argc, char argv[])
{
	A *a = new B();
	a->run();
	delete a;
	a = new C();
	a->run();
	delete a;
	//loadwi
	CBank *bank = new CBank();
	//bank->Action( (IAction*)(BankAction::AID_INVEST)  ,45);
	bank->Action((Hello(BankAction::AID_INVEST)) ,45);//Lior
	//bank->Action(&BankAction(BankAction::AID_INVEST) ,45);
	//bank.Action(BankAction::AID_INVEST ,45);
	//variables
	cout<<"Initalaizin variables"<<endl;
	vector<CAvatar*> avatars;
	CGame game;
	cout<<"Finished initalaizin variables"<<endl;
	
	//Setup the game
	cout<<"Game setup begin"<<endl;
	game.Login();
	game.NumberOfPlayers();
	for(int i=0;i<game.getNumberOfPlayers();i++)
	{
		CAvatar *avatar = new CAvatar();
		avatar->Setup();
		avatar->setWorkplace(CBuilding::RSHash("Bank"));
		avatar->setMoney("sallery",100);
		avatars.push_back(avatar);
		cout<<"Created "<<i+1<<" player(s)"<<endl;
	}
	cout<<"Now playing with "<<avatars.size()<<" players"<<endl;
	cout<<"The money goal is: "<<avatars[0]->getGoals()->getMoney()<<endl;
	cout<<"The total goal is: "<<avatars[0]->getGoals()->getTotalScore()<<endl;
	cout<<"Game setup ended"<<endl;

	//Start the game
	cout<<"Starting to play game"<<endl;
	/*cout<<avatars[0].getMoney().getCash()<<endl;
	cout<<avatars[0].getGoals().getMoney()<<endl;
	cout<<avatars[0].getGoals().getTotalScore();*/
	cout<<"Before going to Bank"<<endl;
	cout<<"Cash balance for "<<avatars[0]->getName()<<": "<<avatars[0]->getMoney()->getCash()<<endl;
	
	
	//cout<<avatars[0]->getWorkplace()<<endl;

	cout<<"Where do you want to go to?"<<endl;
	cout<<"Bank"<<endl;//Needs to be changed to cin
	
	cout<<"Current sallery: "<<avatars[0]->getMoney()->getSallery()<<endl;

	avatars[0]->Goto("Bank");
	cout<<"After going to Bank"<<endl;
	cout<<avatars[0]->getMoney()->getCash()<<endl;
	//if(avatars.)
	//avatars[0]->Goto("Bank");
	cout<<"Fnished to play game"<<endl;
	system("PAUSE");
	//avatar->Setup();

	//Start the game
	//test.setCourse();
	//test.

	//End game
	//system("PAUSE");

	//End the game
	if(FreeGameMem(avatars))
		cout<<"Success"<<endl;
	else
		cout<<"Failure"<<endl;

	return 0;
}

bool FreeGameMem(vector<CAvatar*> avatars)
{
	for(unsigned int i=0;i<avatars.size();i++)
	{
		try
		{
			delete((CAvatar*)avatars[i]);
		}
		catch(exception e)
		{
			return false;
		}
	}
	return true;
}

#else
	#include<iostream>
	using namespace std;

	int main(int argc, char argv[])
	{
		cout<<"Error. Game.h defined in another place."<<endl;
		return 1;
	}
#endif
