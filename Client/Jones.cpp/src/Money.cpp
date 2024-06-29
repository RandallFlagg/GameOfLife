#include <Money.h>
#include <string>
//constructors
CMoney::CMoney()
{

}

/*CMoney::CMoney(const CMoney &money)
{
	cash = money.cash;
	//this = money;
}*/

//Setters
void CMoney::setCash(int cash)
{
	money["cash"] = cash;
	//this->cash = cash;
}

void CMoney::setLoan(int loan)
{
}

void CMoney::setRent(int rent)
{
}

void CMoney::setGoods(int goods)
{
	//this->goods = goods;
	money["goods"] = goods;
}

void CMoney::setSallery(int sallery)
{
	//this->sallery = sallery;
	money["sallery"] = sallery;
}

void CMoney::setCurrency(const char *currency)
{
	strcpy_s(this->currency, "il");
	//TODO: fix the string copy
	//strcpy_s(this->currency,currency);
	//strcpy_s(this->currency,currency);
}

//Getters
int CMoney::getCash()
{
	return money["cash"];
}

int CMoney::getLoan(){return money["loan"];}
int CMoney::getRent(){return -1;}
int CMoney::getGoods(){return -1;}
int CMoney::getSallery(){return -1;}
char* CMoney::getCurrency(){return currency;}