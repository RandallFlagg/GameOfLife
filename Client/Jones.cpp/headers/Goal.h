#ifndef __GOAL_H
#define __GOAL_H

#include <map>
#include <string>
#include <typeinfo>
using namespace std;

/*
class Value
{
private:
	void *value;
public:
	
	type_info *type;
	operator float() { return *((float*)value) ;}
	operator int() { return *(int*)value ;}
	operator string() { return *(string*)value ;}
};


class Element
{
	map <string,Element> elements;
	map <string,Value>   values;
public:	
	Element & operator()(string e) { return elements[e];}	
	Value& operator[] (string value) { return values[value];}
};



//union Value
//{
//	int * num ;
//	string * String;
//	float * floating;
//
//};
 
using namespace std;
*/	
	class CGoal
	{
	private:
		map <string,float> goals;
		//typedef pair <string,float> GoalDef;//why do I need this?
		//Datamemebers
		/*float money; //how much cash do you need
		float education; //how much education you need
		float lifeStyle; //what is the neghibourhood you need to live in
		float health; //What health do you need
		float goods; //goods you need to get(TV, Computer, cet.) */
		float totalScore; //
	protected:
		//Setters
		void setMoney(float);
		void setEducation(float);
		void setLifeStyle(float);
		void setHealth(float);
		void setGoods(float);
		void setTotalScore();
		
	public:
		//constructors
		CGoal();

		//Setters
		void setGoals();
		void setGoals(CGoal&);
		void setGoals(float,float,float,float,float);

		//Getters
		float getMoney();
		float getEducation(float);
		float getLifeStyle(float);
		float getHealth(float);
		float getGoods(float);
		float getTotalScore();  // Get Ther Avarage of all goals Values 

		//Generals
		void Setup();

		
	};
#endif