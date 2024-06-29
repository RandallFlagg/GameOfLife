#include <game.h>
#include <allincludes.h>

void CGame::Login()
{
	cout<<"Welcome to the Jones 2008 Game"<<endl;
}

void CGame::NumberOfPlayers()
{
	cout<<"Choose the number of players in this game?"<<endl;
	//TODO: set input for number of players and return it
	numberOfPlayers = 1;
	//return 1;
}

int CGame::getNumberOfPlayers()
{
	return numberOfPlayers;
}