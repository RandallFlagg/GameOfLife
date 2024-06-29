

class  IAction 
{
	//virtual void Action(IAction*,...)=0;
}


/*struct LibraryAction :  IAction
{
	enum  eLibraryAction {STUDY,WORK,TEACH};
}*/

/*struct BankAction : IAction
{
	enum  eBankAction {AID_DEPOSITE, AID_LOAN, AID_INVEST};
	//BankAction(eBankAction _act) : action(_act)
//	{
//	}
	
}*/
	
//#define POPSTACK(a) (va_arg(list,a)) 

class Building 
{
	
	private 	int id;

	
		
	
	public 	enum ACTIONID{};
		//seters
		public void setID(int i){}

		//geters
		/*public int getID(){}*/
		
		//procedures

        public virtual void Action(IAction a/*,...*/) { }

		//Methods

		//Static functions
        public static int RSHash(string s) { return -1; }//Static?
		
}

