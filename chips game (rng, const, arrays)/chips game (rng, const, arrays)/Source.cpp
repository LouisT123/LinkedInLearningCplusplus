#include <iostream>

#include <cstdlib>
#include <ctime>


using namespace std;

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
	cout << "player 1, please enter your name: " << endl;
	cin >> playerName[0];
	cout << "player 2, please enter your name: " << endl;
	cin >> playerName[1];

	//seed the genrator
	srand(time(0));


	do { //replay


		//start game with a random number of chips in pile
		chipsInPile = (rand() % MAX_CHIPS) + 1;
		cout << "this round will start with " << chipsInPile << " chips in the pile" << endl;

		gameOver = false; //sets to false
		while (gameOver == false) //check to see if its false
		{
			//taken invalid number of chips

			do
			{
				if (player1Turn)
				{
					cout << playerName[0] << ", How many chips would you like?" << endl;
				}
				else
				{
					cout << playerName[1] << ", How many chips would you like?" << endl;
				}
				cout << "You can only take up to ";
				if (static_cast<int>(MAX_TURN * chipsInPile) == 0) //if 1 chip left
				{
					cout << "1" << endl; //display
				}
				else
				{
					cout << static_cast<int>(MAX_TURN * chipsInPile) << endl; //otherwise show actual number left after division
				}
				cin >> chipsTaken;
			} while (chipsTaken > (static_cast<int>(MAX_TURN * chipsInPile)) && (chipsInPile > 1)); //cannot take more than possible number of chips

			//perform action of removing chips
			chipsInPile -= chipsTaken;
			cout << "there are " << chipsInPile << " left in the pile" << endl;

			if (chipsInPile == 0)
			{
				gameOver = true; //end game
				if (player1Turn)
				{
					cout << playerName[1] << ", congrats you won!" << endl;
				}
				else
				{
					cout << playerName[0] << ", congrats you won!" << endl;
				}
			}
			else
			{
				player1Turn = !player1Turn; //next turn
			}

		}
		cout << "do you want to play again? (Y/N) " << endl;
		cin >> replay;

	} while ((replay == 'y') || (replay == 'Y')); //replay

}


	////random number of chips taken
	//chipsTaken = (rand() % halfChips) + 1;

	//cout << "random chips taken: " << chipsTaken << endl;


