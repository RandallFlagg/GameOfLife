#ifndef __AVATAR_H
#define __AVATAR_H

#include <Course.h>
#include <Money.h>
#include <Car.h>
#include <Goal.h>

class CAvatar
{
private:
	CCourse *courses; //what courses did he took
	double timeLeftInWeek; //How much time is left for this week //need to change type
	CMoney *money; // How much money he has OR ows
	CCar car; //What car does he have
	string name; //What is his name
	CGoal *goal; //The goal to achive in the game for this player
	int workplace;
protected:
	//General
	CAvatar Setup(int);
public:
	//Constructors
	CAvatar();

	//Setters
	void setCourse();
	void setTimeLeftInWeek(float);
	void setMoney(CMoney);
	void setMoney(string, int);
	void setCar();
	void setWorkplace(int);
	void setName(string);
	//void setGoals(CGoal&);
	//void setGoals(CGoal);
	//void setGoals(CGoal*);

	//Getters
	CMoney* getMoney();
	CGoal *getGoals();
	int getWorkplace();
	//General
	void Setup();
	void Goto(string);
	string getName();
	//CAvatar Setup(CAvatar &avatar);
};

#endif