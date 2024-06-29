class Avatar
{
    private Course courses; //what courses did he took
    private double timeLeftInWeek; //How much time is left for this week //need to change type
    public Money money; // How much money he has OR ows
    private Car car; //What car does he have
    private string name; //What is his name


    public string Name
    {
        get { return "Jones.NET"; }
        set { name = value; }
    }

    //The goal to achive in the game for this player
    public Goal goal 
    {
        get { return new Goal(); }
    }
    private int workplace;

    //General
    protected Avatar Setup(int i) { return null; }

    //Constructors
    public Avatar() { }

    //Setters
    /*public void setCourse(){}
    public void setTimeLeftInWeek(float f){}
    public void setMoney(Money c)
    public void setMoney(string s, int i);
    public void setCar(){}*/
    public void setWorkplace(int i) { }
    //public void setName(string s){}
    //void setGoals(CGoal&);
    //void setGoals(CGoal);
    //void setGoals(CGoal*);

    //Getters
    //public Money getMoney(){}
    /*public Goal getGoals(){}
    public int getWorkplace(){}*/
    //General
    public void Setup() { }
    public void Goto(string s) { }
    //public string getName(){}
    //CAvatar Setup(CAvatar &avatar);


}

