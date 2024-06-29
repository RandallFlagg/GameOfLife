class Money
{
//private	map <string,int> money;
	private int cash; //How much cash the avatar has
	/*int loan; // how much loan the avatar took
	int rent; // how much rent the avatar needs to pay
	int goods; // how much goods he owns (Cloth + furniture + cet.)*/
	private int sallery; //How much money does he own per...(month, week, day?)
	private char[] currency; //what is the currency of the money

    public int Cash
    {
        get { return cash; }
        set { cash = value; }
    }


    public int Sallery
    {
        get { return sallery; }
        set { }
    }
	//Constructors
public 	Money(){}
	//CMoney(const CMoney &);

	//Setters
/*public 	void setCash(int i){}
public 	void setLoan(int i){}
public 	void setRent(int i){}
public 	void setGoods(int i){}
public 	void setSallery(int i){}
public void setCurrency(string s) { }*/

	//Gettters
/*public 	int getCash(){}
public 	int getLoan(){}
public 	int getRent(){}
public 	int getGoods(){}
public 	int getSallery(){}
public 	char getCurrency(){}*/
}