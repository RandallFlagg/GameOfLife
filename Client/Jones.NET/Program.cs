using System;
using System.Collections.Generic;
using System.Linq;
using System.Windows.Forms;
using System.Collections;

namespace Jones.NET
{
    static class Program
    {
        /// <summary>
        /// The main entry point for the application.
        /// </summary>
        /*[STAThread]
        static void Main()
        {
            Application.EnableVisualStyles();
            Application.SetCompatibleTextRenderingDefault(false);
            Application.Run(new Form1());
        }*/

        static void Main()
        {
            Bank bank = new Bank();
            //bank->Action( (IAction*)(BankAction::AID_INVEST)  ,45);
            //bank.Action((Hello(BankAction.AID_INVEST)) ,45);//Lior
            //bank->Action(&BankAction(BankAction::AID_INVEST) ,45);
            //bank.Action(BankAction::AID_INVEST ,45);
            //variables
            System.Console.WriteLine("Initalaizing variables");
            List<Avatar> avatars = new List<Avatar>();
            Game game = new Game();
            System.Console.WriteLine("Finished initalaizin variables");

            //Setup the game
            System.Console.WriteLine("Game setup begin");
            game.Login();
            game.NumberOfPlayers();
            for (int i = 0; i < game.getNumberOfPlayers(); i++)
            {
                Avatar avatar = new Avatar();
                avatar.Setup();
                avatar.setWorkplace(Building.RSHash("Bank"));
                avatar.money.Sallery = 100;
                avatars.Add(avatar);
                System.Console.WriteLine("Created " + (i + 1) + " player(s)");
            }
            System.Console.WriteLine("Now playing with " + avatars.Count + " players");
            System.Console.WriteLine("The money goal is: " + avatars[0].goal.money);
            System.Console.WriteLine("The total goal is: " + avatars[0].goal.TotalScore);
            System.Console.WriteLine("Game setup ended");

            //Start the game
            System.Console.WriteLine("Starting to play game");
            /*System.Console.WriteLine(avatars[0].getMoney().getCash()<<endl;
            System.Console.WriteLine(avatars[0].getGoals().getMoney()<<endl;
            System.Console.WriteLine(avatars[0].getGoals().getTotalScore();*/
            System.Console.WriteLine("Before going to Bank");
            System.Console.WriteLine("Cash balance for " + avatars[0].Name + ": " + avatars[0].money.Cash);


            //System.Console.WriteLine(avatars[0]->getWorkplace()<<endl;

            System.Console.WriteLine("Where do you want to go to?");
            System.Console.WriteLine("Bank");//Needs to be changed to cin

            System.Console.WriteLine("Current sallery: " + avatars[0].money.Sallery);

            avatars[0].Goto("Bank");
            System.Console.WriteLine("After going to Bank");
            System.Console.WriteLine(avatars[0].money.Cash);
            //if(avatars.)
            //avatars[0]->Goto("Bank");
            System.Console.WriteLine("Fnished to play game");
            Console.ReadLine();
            //avatar->Setup();

            //Start the game
            //test.setCourse();
            //test.

            //End game
            //system("PAUSE");

            //End the game
            System.Console.WriteLine("Success");
            System.Console.ReadLine();
        }



    }
}

