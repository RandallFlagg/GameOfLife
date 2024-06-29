#include <BankOptions.h>
#include<bank.h>
#include<iostream>

using namespace std;

void BankOptions::Action(ACTIONID action,...)
{
	cout<<"Hello";
}

void BankOptions::Show(CAvatar &avatar)
{
	CBank b;
	bool exit = false;

	while(!exit)
	{
		int option;
		std::string options = "What do you want to do? (1 - Look for a Job, 2 - Take a loan, 3 - put money in deposit, 4 - stockmarket dealing";
		
		avatar.getWorkplace() == b.getID() ?
			cout<<options + ", 5 - Work, 0 - exit)" :
			cout<<options + ", 0 - exit)";
			
		cin>>option;

		option==0 ? exit = true : buildingOptions(avatar,option);
	}
}

void BankOptions::buildingOptions(CAvatar avatar, int option)
{
	switch(option)
	{
	case 1: //Look for a Job
		cout<<"Sorry. no jobs now."<<endl;
		break;
	case 2: //Take a loan
		cout<<"How much loan do you want to take?";
		cin>>option;
		avatar.setMoney("loan", option);
		break;
	case 3: //Deposit money
		cout<<"How much money do you want to deposit?";
		cin>>option;
		avatar.setMoney("savings",option);
		avatar.setMoney("cash",avatar.getMoney()->getCash()-option);
	case 4: //stockMareket dealing
		cout<<"Bought you some stocks"<<endl;
	case 5: //Work
		avatar.setMoney("sallery", avatar.getMoney()->getSallery());
		break;
	default:
		cout<<"wrong choice"<<endl;
		break;
	}
}
