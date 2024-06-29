#include <goal.h>
#include <allincludes.h>
#include <algorithm>

//Constructors

//General
CGoal::CGoal()
{
	setGoals();
}

//Setters
void CGoal::setMoney(float percent)
{
	goals["money"] = percent;
	//money = percent;
}

void CGoal::setEducation(float percent)
{
	goals["education"] = percent;
	//education = percent;
}

void CGoal::setGoods(float percent)
{
	goals["goods"] = percent;
	//goods = percent;
}

void CGoal::setLifeStyle(float percent)
{
	goals["lifeStyle"] = percent;
	//lifeStyle = percent;
}

void CGoal::setHealth(float percent)
{
	goals["health"] = percent;
	//health = percent;
}

void CGoal::setTotalScore()
{
	totalScore = 0;
	for(map <string, float>::iterator it = goals.begin(); it != goals.end(); it++)
		totalScore += it->second;
	totalScore /= goals.size();
	//totalScore = money + education + goods + lifeStyle + health;
}

void CGoal::setGoals(CGoal &goals)
{
	/*education = goals.education;
	money = goals.money;
	lifeStyle = goals.lifeStyle;
	health = goals.health;
	goods = goals.health;*/
}

void CGoal::setGoals(float money, float education, float lifeStyle, float health, float goods)
{
	/*this->money = money;
	this->education = education;
	this->lifeStyle = lifeStyle;
	this->health = health;
	this->goods = goods;*/
}

void CGoal::setGoals()
{
	cout<<"Please type how much money you want to get(40-100)?"<<endl;
	goals["money"]=0.1f;
	//goals.insert( GoalDef("money",0.1f) );
	//money = 0.1f;
	//cin>>money;
	//setMoney(money);
	cout<<"Please type how much education you want to get(40-100)?"<<endl;
	goals["education"] = 0.2f;
	//goals.insert( GoalDef("education",0.2f) );
	//education=0.2f;
	//cin>>education;
	//setEducation(education);
	cout<<"Please type how much lifeStyle you want to get(40-100)?"<<endl;
	goals["goods"] = 0.4f;
	//goals.insert( GoalDef("lifeStyle",0.3f) );
	//lifeStyle=0.3f;
	//cin>>lifeStyle;
	//setLifeStyle(lifeStyle);
	cout<<"Please type how much health you want to get(40-100)?"<<endl;
	goals["lifeStyle"] = 0.5f;
	//goals.insert( GoalDef("health",0.4f) );
	//health=0.4f;
	//cin>>health;
	//setHealth(health);
	cout<<"Please type how much goods you want to get(40-100)?"<<endl;
	goals["health"] = 0.3f;
	//goals.insert( GoalDef("goods",0.5f) );
	//goods=0.5f;
	//cin>>goods;
	//setGoods(goods);
	setTotalScore();
}

//Getters
float CGoal::getMoney()
{
	//cout<<goals["education"];
    //return money;
	return goals["money"];
}

float CGoal::getTotalScore()
{
	return totalScore;
}









#ifdef IGNORE

/*class Float 
{
private:
	float value;
public:
	operator float() { return value;} 
	const Value &  operator=(Value& val) { value=val; return val;} 
};


class MultiplyElements
{
private: 
	float value;
public:
	MultiplyElements() {value=1;}

	void operator()(CGoal::GoalDef element){value*=element.second;}
	operator float() { return value;}
};
*/
void CGoal::setMoney()
{
	/*Float f,b;
	float c;
	void *data;
	b+=f+b;
	Element a;*/
	//b=f=a("University")("Courses")("Lior")["Opendate"];
	//money = 500;
}


	

float CGoal::getTotalScore()
{
/*goals.insert( GoalDef("money",1) );
	goals.insert( GoalDef("education",2) );
	goals.insert( GoalDef("Lior",3) );
	
	float multiplicationize=1.0f;

	for (map <string,float>::const_iterator it=goals.begin(); it!=goals.end();it++)
		multiplicationize*=it->second;
	return multiplicationize;
*/
	//return for_each ( goals.begin( ) , goals.end ( ) , MultiplyElements() );
	return -1;
}

void CGoal::setEducation()
{

}

#endif