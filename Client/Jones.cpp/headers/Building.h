#ifndef __BUILDING_H
#define __BUILDING_H

#include<string>

using namespace std;

class  IAction 
{
	//virtual void Action(IAction*,...)=0;
};


struct LibraryAction :  IAction
{
	typedef enum  eLibraryAction {STUDY,WORK,TEACH} action;
};

struct BankAction : IAction
{
	enum  eBankAction {AID_DEPOSITE, AID_LOAN, AID_INVEST} action;
	//BankAction(eBankAction _act) : action(_act)
//	{
//	}
	
};
	
#define POPSTACK(a) (va_arg(list,a)) 

class CBuilding 
{
	private:
		int id;

	protected:
		
	public:
		enum ACTIONID{};
		//seters
		void setID(int);

		//geters
		int getID();
		
		//procedures
		
		virtual void Action(IAction*,...) = 0;

		//Methods

		//Static functions
		static int RSHash(string);//Static?
		
};

#endif