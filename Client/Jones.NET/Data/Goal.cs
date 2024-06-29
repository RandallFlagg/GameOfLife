class Goal
{
    //private		map <string,float> goals;
    //typedef pair <string,float> GoalDef;//why do I need this?
    //Datamemebers
    /*float money; //how much cash do you need
    float education; //how much education you need
    float lifeStyle; //what is the neghibourhood you need to live in
    float health; //What health do you need
    float goods; //goods you need to get(TV, Computer, cet.) */
    private float totalScore; //

    //Setters
    /*protected void setMoney(float f) { }
    protected void setEducation(float f) { }
    protected void setLifeStyle(float f) { }
    protected void setHealth(float f) { }
    protected void setGoods(float f) { }
    protected void setTotalScore() { }*/

    public Money money
    {
        get { return new Money();}
    }


    public int TotalScore
    {
        get { return -1; }
    }

    

    //constructors
    public Goal() { }

    //Setters
    /*public void setGoals(){}
    public void setGoals(Goal g);
    public void setGoals(float f1,float f2,float f3,float f4,float f5);*/

    //Getters
    /*public float getMoney(){}
    public float getEducation(float f){}
    public float getLifeStyle(float f){}
    public float getHealth(float f ){}
    public float getGoods(float f){}
    public float getTotalScore(){}  // Get Ther Avarage of all goals Values */

    //Generals
    public void Setup() { }


}