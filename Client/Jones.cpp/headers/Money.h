#ifndef __MONEY_H
#define __MONEY_H

#include<map>

using namespace std;

class CMoney
{
private:
	map <string,int> money;
	/*int cash; //How much cash the avatar has
	int loan; // how much loan the avatar took
	int rent; // how much rent the avatar needs to pay
	int goods; // how much goods he owns (Cloth + furniture + cet.)
	int sallery; //How much money does he own per...(month, week, day?)*/
	char currency[3]; //what is the currency of the money
protected:
public:
	//Constructors
	CMoney();
	//CMoney(const CMoney &);

	//Setters
	void setCash(int);
	void setLoan(int);
	void setRent(int);
	void setGoods(int);
	void setSallery(int);
	void setCurrency(const char*);

	//Gettters
	int getCash();
	int getLoan();
	int getRent();
	int getGoods();
	int getSallery();
	char* getCurrency();
};

#endif