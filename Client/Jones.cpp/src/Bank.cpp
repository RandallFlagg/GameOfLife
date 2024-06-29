#include<Bank.h>

//#include<atlcoll.h>
//#include <string>
#include <iostream>
#include <stdarg.h>
using namespace std;

CBank::CBank()
{
	setID(RSHash("Bank"));
}

void CBank::Action(IAction *Action,...)
{
	 va_list list;
	 va_start(list,Action); 
	
	BankAction *act=static_cast<BankAction*>(Action); 

	switch ((*act).action)
	{
	
	case BankAction::AID_INVEST:
		cout<<"yow nigga "<<endl<<"Param 1/2 is: "<<POPSTACK(int)<<endl;
			break;
	//default:
	//	cout<<"yow nigga "<<endl<<"Param 2/2 is: "<<POPSTACK(int)<<endl;
	}
	
	
		va_end(list); 
}