#ifndef __BANK_H
#define __BANK_H

//#include<iostream>
//#include <time.h>
//#include<WinDef.h> //WORD

#include "Building.h"

//using namespace std;

//Start editing from here


class CBank : public CBuilding
{
private:
	//enum ACTION {AID_DEPOSITE, AID_LOAN, AID_INVEST};
public:
	//constructors
		CBank();
	
	//seters
	
	//geters

	//proceduers
		void Action(IAction*,...);

#ifdef FFF
	int GetAcount(Avatar *)
{
	return avatr.Accounts[this.Name];;
}

int GetfreeMoney(int Account)
{
	
}

bool Deposit(*avatar , int amount)
{

	int acount;
	if (GetfreeMoney(acount=GetAcount)>=Amount) 
	{
		Add(Acount,Amount);
		return true
	}
	
	return false;	
}

AcountStruct
{
	int Money
	int Silver
	int GOld;
	Stock *Stocks
	Jewlery 
};

map Acount <int,*AcountStruct>;
bool Add()
{
	Acount[AcountNumber].Money+=Amount;
}
#endif

};

#endif