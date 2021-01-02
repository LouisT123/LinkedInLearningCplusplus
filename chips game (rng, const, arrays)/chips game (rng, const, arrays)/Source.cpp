#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;


string FindPlayerName(string names[], bool playerTurn);

int askMove(bool player1Turn, int chipsInPile, string names[]);
void getUserNames(string players[]);

const int MAX_CHIPS = 100; //maximum number of chips that can be generated randomly
const float MAX_TURN = .5; //chip division factor

int main()
{
	bool player1Turn = true;
	bool gameOver = false;

	int chipsInPile = 0;
	int chipsTaken = 0;

	char replay;

	//array to store player names
	string playerName[2];
	
	//get player names
	getUserNames(playerName);

	//seed the generator
	srand(time(0));


	do { //replay the game


		//start game with a random number of chips in pile
		chipsInPile = (rand() % MAX_CHIPS) + 1;
		cout << "this round will start with " << chipsInPile << " chips in the pile" << endl;

		gameOver = false; //sets to false
		while (gameOver == false) //check to see if its false
		{
			//asks player to take chips and checks to see if taken invalid number of chips
			chipsTaken = askMove(player1Turn, chipsInPile, playerName);
			
			//perform action of removing chips
			chipsInPile -= chipsTaken;
			cout << "there are " << chipsInPile << " left in the pile" << endl;

			//game end conditions
			if (chipsInPile == 0)
			{
				gameOver = true; 
				/*if (player1Turn) //converted to function
				{*/
				cout << FindPlayerName(playerName, player1Turn) << ", congrats you won!" << endl;
				/*}
				else
				{
					cout << playerName[0] << ", congrats you won!" << endl;
				}*/
			}
			else
			{
				player1Turn = !player1Turn; //next turn
			}

		}
		cout << "do you want to play again? (Y/N) " << endl;
		cin >> replay;
		replay = toupper(replay);
	} while (replay == 'Y');
	//} while ((replay == 'y') || (replay == 'Y')); //old replay 

}

string FindPlayerName(string names[], bool playerTurn)
{
	if (playerTurn == true)
	{
		return names[0];
	}
	else
	{
		return names[1];
	}

}

void getUserNames(string playerName[])
{
	cout << "player 1, please enter your name: " << endl;
	cin >> playerName[0];
	cout << "player 2, please enter your name: " << endl;
	cout << "if you wish to play against the computer, enter CPU" << endl;
	cin >> playerName[1];
}

int askMove(bool player1Turn, int chipsInPile, string playerName[])
{
	int chipsTaken;
	int maxTurn = (MAX_TURN * chipsInPile);
	do
	{
		/*if (player1Turn) //replaced with function FindPlayerName
		{*/
		cout << FindPlayerName(playerName, player1Turn) << ", How many chips would you like?" << endl;
		/*}
		else
		{
			cout << playerName[1] << ", How many chips would you like?" << endl;
		}*/
		cout << "You can only take up to ";
		if (maxTurn == 0) //if 1 chip left
		{
			cout << "1" << endl; //display
		}
		else
		{
			cout << maxTurn << endl; //otherwise show actual number left after division
		}
		if ((FindPlayerName(playerName, player1Turn) == "CPU") || ((FindPlayerName(playerName, player1Turn) == "cpu")))
		{
			if (maxTurn == 0)
			{
				chipsTaken = 1;
			}
			else
			{
				chipsTaken = (rand() % (maxTurn) + 1); //random number of chips taken (player versus computer)
				cout << "cpu has taken: " << chipsTaken << endl;
			}
		}
		else
		{
			cin >> chipsTaken;
		}
		
	} while ((chipsTaken > maxTurn) && (chipsInPile > 1)); //cannot take more than possible number of chips

	return chipsTaken;
}


	




