#include <Avatar.h>
#include <BankOptions.h>

//Look down

//Constructor
CAvatar::CAvatar()
{
	money = NULL;
	goal = NULL;
}

//Functions
void CAvatar::Goto(string place)
{
	if(place == "Bank")
	{
		BankOptions option;// = new BankOptions();
		option.Show(*this);
	}
}

void CAvatar::Setup()
{
	//TODO: change to be read from XML
	//TODO: fix the money to be like the goals - ASAP
	//setup money - cash=200 currency=il all the rest = 0
	if(money == NULL)
		money = new CMoney();
	money->setCash(200);
	money->setCurrency("il");
	money->setGoods(0);
	money->setLoan(0);
	money->setRent(0);
	money->setSallery(0);
	//setMoney(money); //put default money values

	//setup time of week = 1
	setTimeLeftInWeek(1); 

	setWorkplace(-1);

	//setup the goals of the player
	if(goal == NULL)
		goal = new CGoal();
}

CAvatar CAvatar::Setup(int x){CAvatar avatar; return avatar;}
//CAvatar CAvatar::Setup(CAvatar &avatar){return avatar;}
//not in use yet


//Setters
void CAvatar::setMoney(CMoney money)
{
	if(this->money != NULL)
	{
		this->money->setCash(money.getCash());
		this->money->setCurrency(money.getCurrency());
		this->money->setGoods(money.getGoods());
		this->money->setLoan(money.getLoan());
		this->money->setRent(money.getRent());
		this->money->setSallery(money.getSallery());
	}
}

void CAvatar::setMoney(string field, int value)
{
	this->money->setSallery(value);
}

void CAvatar::setCourse()
{

}

void CAvatar::setTimeLeftInWeek(float time)
{
	timeLeftInWeek = time;
}

void CAvatar::setCar()
{

}

void CAvatar::setName(string name)
{
	this->name = name;
}

void CAvatar::setWorkplace(int workplace)
{
	this->workplace = workplace;
}

/*void CAvatar::setGoals(CGoal *goal)
{
	goal->setGoals(*goal);
}
/*
void CAvatar::setGoals(CGoal goal)
{
	goal->setGoals(goal);
}*/

/*void CAvatar::setGoals(CGoal *goal)
{
	//goal->setGoals(goal);
}*/

//Getters
CGoal* CAvatar::getGoals()
{
	return goal;
}

CMoney* CAvatar::getMoney()
{
	return money;
}

int CAvatar::getWorkplace()
{
	return workplace;
}

string CAvatar::getName()
{
	return name;
}

//Look down




















/*
	map <string,int> Accounts;//bank name / acoount number

	private:
		void Doposit(int amount,int currency)
		{
			if (CurrentMoney>=Amount)
				if(Bank["Name"].Action(Deposit,this,100))
					CurrentMOney-=100;
		}

		void Loan(int amount,int period,int currency);
		
		void Action(OPERATIONTYPE Operation,...)
		{
			 va_list list;
			 va_start(list,Operation); 
			switch (operation)
			{
				case OT_DEPOSIT:
					Deposit(POPSTACK(Avatar*),POPSTACK(int));
					//Deposit
						
					Currentmoney-=amount;
						Acount(Avatar).

					//Deposit
				case OT_LOAN:
					Loan(va_arg(list,int),va_arg(list,int),va_arg(list,int));    
			}
			va_end(list); 
		}

		
		

			switch (todo)
	case Deposit: 
		DEposit(param1,param2,
		Ariel.Bankotsar.DEpost(
		Bank.Deposit(this,100,mt_Dollar);

		*/