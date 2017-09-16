#include <iostream>
#include <string>
#include <cctype>
#include <iomanip>

using namespace std;

string ticTatToeTitle[] = { " ______   __     ______     ______   ______     ______     ______   ______     ______    ",
							"/\\__  _\\ /\\ \\   /\\  ___\\   /\\__  _\\ /\\  __ \\   /\\  ___\\   /\\__  _\\ /\\  __ \\   /\\  ___\\   ",
							"\\/_/\\ \\/ \\ \\ \\  \\ \\ \\____  \\/_/\\ \\/ \\ \\  __ \\  \\ \\ \\____  \\/_/\\ \\/ \\ \\ \\/\\ \\  \\ \\  __\\   ",
							"   \\ \\_\\  \\ \\_\\  \\ \\_____\\    \\ \\_\\  \\ \\_\\ \\_\\  \\ \\_____\\    \\ \\_\\  \\ \\_____\\  \\ \\_____\\ ",
							"    \\/_/   \\/_/   \\/_____/     \\/_/   \\/_/\\/_/   \\/_____/     \\/_/   \\/_____/   \\/_____/ " };

string oSymbol[] = { "  _____  ",
					 " / ___ \\ ",
					 "| |   | |",
					 "| |   | |",
					 "| |___| |",
					 " \\_____/ " };
string xSymbol[] = { " _    _  ",
					 "\\ \\  / / ",
					 " \\ \\/ /  ",
					 "  )  (   ",
					 " / /\\ \\  ",
					 "/_/  \\_\\ "};
string emptySquare[] = {"         ",
				  "         ",
				  "         ",
				  "         ",
				  "         ",
				  "         "};
int grid[9];
string square0[9];
string square1[9];
string square2[9];
string square3[9];
string square4[9];
string square5[9];
string square6[9];
string square7[9];
string square8[9];

int userChoice; 
int computerChoice; 
int winner; 
string playAgain; 
int wins = 0; 
int losses = 0; 
int p1Wins = 0; 
int p2Wins = 0;
int p1Losses = 0;
int p2Losses = 0;

string line = "==============================";

int UserChoice; 

void scoreBoardSinglePlayer()
{

	cout << endl << endl;
	cout << left << setw(6) << "Wins: " << left << setw(8) << wins;
	cout << left << setw(8) << "Losses: " << left << setw(8) << losses << endl << endl;
}

void scoreBoardMultiplayer()
{
	cout << endl << endl;
	cout << left << setw(40) << "PLAYER 1";
	cout << left << setw(40) << "PLAYER 2" << endl;
	cout << left << setw(6) << "Wins: " << left << setw(8) << p1Wins;
	cout << left << setw(8) << "Losses: " << left << setw(18) << p1Losses;
	cout << left << setw(6) << "Wins: " << left << setw(8) << p2Wins;
	cout << left << setw(8) << "Losses: " << left << setw(8) << p2Losses << endl << endl;
}

void updateSquare()
{
	system("CLS");

	for (int i = 0; i < 5; i++)
	{
		cout << ticTatToeTitle[i] << endl;
	}

	switch (UserChoice)
	{
	case 1: 
		scoreBoardSinglePlayer();
		break;
	case 2:
		scoreBoardMultiplayer();
		break;
	}

	if (grid[0] == -1)
		for (int i = 0; i < 9; i++)
			square0[i] = emptySquare[i]; 
	if (grid[0] == 0)
		for (int i = 0; i < 9; i++)
			square0[i] = oSymbol[i];
	if (grid[0] == 1)
		for (int i = 0; i < 9; i++)
			square0[i] = xSymbol[i];

	if (grid[1] == -1)
		for (int i = 0; i < 9; i++)
			square1[i] = emptySquare[i];
	if (grid[1] == 0)
		for (int i = 0; i < 9; i++)
			square1[i] = oSymbol[i];
	if (grid[1] == 1)
		for (int i = 0; i < 9; i++)
			square1[i] = xSymbol[i];

	if (grid[2] == -1)
		for (int i = 0; i < 9; i++)
			square2[i] = emptySquare[i];
	if (grid[2] == 0)
		for (int i = 0; i < 9; i++)
			square2[i] = oSymbol[i];
	if (grid[2] == 1)
		for (int i = 0; i < 9; i++)
			square2[i] = xSymbol[i];

	if (grid[3] == -1)
		for (int i = 0; i < 9; i++)
			square3[i] = emptySquare[i];
	if (grid[3] == 0)
		for (int i = 0; i < 9; i++)
			square3[i] = oSymbol[i];
	if (grid[3] == 1)
		for (int i = 0; i < 9; i++)
			square3[i] = xSymbol[i];

	if (grid[4] == -1)
		for (int i = 0; i < 9; i++)
			square4[i] = emptySquare[i];
	if (grid[4] == 0)
		for (int i = 0; i < 9; i++)
			square4[i] = oSymbol[i];
	if (grid[4] == 1)
		for (int i = 0; i < 9; i++)
			square4[i] = xSymbol[i];

	if (grid[5] == -1)
		for (int i = 0; i < 9; i++)
			square5[i] = emptySquare[i];
	if (grid[5] == 0)
		for (int i = 0; i < 9; i++)
			square5[i] = oSymbol[i];
	if (grid[5] == 1)
		for (int i = 0; i < 9; i++)
			square5[i] = xSymbol[i];

	if (grid[6] == -1)
		for (int i = 0; i < 9; i++)
			square6[i] = emptySquare[i];
	if (grid[6] == 0)
		for (int i = 0; i < 9; i++)
			square6[i] = oSymbol[i];
	if (grid[6] == 1)
		for (int i = 0; i < 9; i++)
			square6[i] = xSymbol[i];

	if (grid[7] == -1)
		for (int i = 0; i < 9; i++)
			square7[i] = emptySquare[i];
	if (grid[7] == 0)
		for (int i = 0; i < 9; i++)
			square7[i] = oSymbol[i];
	if (grid[7] == 1)
		for (int i = 0; i < 9; i++)
			square7[i] = xSymbol[i];

	if (grid[8] == -1)
		for (int i = 0; i < 9; i++)
			square8[i] = emptySquare[i];
	if (grid[8] == 0)
		for (int i = 0; i < 9; i++)
			square8[i] = oSymbol[i];
	if (grid[8] == 1)
		for (int i = 0; i < 9; i++)
			square8[i] = xSymbol[i];

	cout << line << endl;

	for (int i = 0; i < 6; i++)
	{
		cout << square0[i]; 
		cout << "|";
		cout << square1[i];
		cout << "|";
		cout << square2[i] << endl;
	}

	cout << line << endl; 

	for (int i = 0; i < 6; i++)
	{
		cout << square3[i];
		cout << "|";
		cout << square4[i];
		cout << "|";
		cout << square5[i] << endl;
	}

	cout << line << endl;

	for (int i = 0; i < 6; i++)
	{
		cout << square6[i];
		cout << "|";
		cout << square7[i];
		cout << "|";
		cout << square8[i] << endl;
	}

	cout << line << endl << endl;
}

bool isValidMoveUser(int choice)
{
	if (choice != 0 && choice != 1 && choice != 2 && choice != 3 &&
		choice != 4 && choice != 5 && choice != 6 && choice != 7 &&
		choice != 8)
	{
		cout << "ERROR: Not valid number!" << endl << endl;
		return false; 
	}
	
	if (grid[choice] == -1)
		return true;

	cout << "ERROR: Square is not empty!" << endl << endl;
	return false;
}

bool isValidMoveComputer(int choice)
{
	if (choice >= 0 && choice < 9)
	{
		if (grid[choice] == -1)
			return true;

		return false;
	}

	return false;
}

bool winningCondition()
{
	if (grid[0] == grid[1] && grid[1] == grid[2] && grid[0] != -1)
	{
		if (grid[0] == 0)
			winner = 0;
		else
			winner = 1;
		return true;
	}

	if (grid[3] == grid[4] && grid[4] == grid[5] && grid[3] != -1)
	{
		if (grid[3] == 0)
			winner = 0;
		else
			winner = 1;
		return true;
	}

	if (grid[6] == grid[7] && grid[7] == grid[8] && grid[6] != -1)
	{
		if (grid[6] == 0)
			winner = 0;
		else
			winner = 1;
		return true;
	}

	if (grid[0] == grid[3] && grid[3] == grid[6] && grid[0] != -1)
	{
		if (grid[0] == 0)
			winner = 0;
		else
			winner = 1;
		return true;
	}

	if (grid[1] == grid[4] && grid[4] == grid[7] && grid[1] != -1)
	{
		if (grid[1] == 0)
			winner = 0;
		else
			winner = 1;
		return true;
	}

	if (grid[2] == grid[5] && grid[5] == grid[8] && grid[2] != -1)
	{
		if (grid[2] == 0)
			winner = 0;
		else
			winner = 1;
		return true;
	}

	if (grid[0] == grid[4] && grid[4] == grid[8] && grid[0] != -1)
	{
		if (grid[0] == 0)
			winner = 0;
		else
			winner = 1;
		return true;		
	}

	if (grid[2] == grid[4] && grid[4] == grid[6] && grid[2] != -1)
	{
		if (grid[2] == 0)
			winner = 0;
		else
			winner = 1;
		return true;
	}
	
	if (grid[0] != -1 && grid[1] != -1 && grid[2] != -1 && grid[3] != -1 && grid[4] != -1 && grid[5] != -1 && grid[6] != -1 && grid[7] != -1 && grid[8] != -1 && grid[9] != -1)
	{
		winner = -1;
		return true; 
	}

	return false; 
}

void computerMove()
{ 
	do
	{
		computerChoice = rand() % 8;
	} while (!isValidMoveComputer(computerChoice));

	grid[computerChoice] = 0;

}

void Player2MovePrompt()
{
	do
	{
		cout << "Player 2, what grid square would you like to play?" << endl;
		cin >> userChoice;
	} while (!isValidMoveUser(userChoice));

	grid[userChoice] = 0;
}

void userMovePrompt()
{
	do
	{
		cout << "Player 1, what grid square would you like to play?" << endl;
		cin >> userChoice;
	}
	while (!isValidMoveUser(userChoice));

	grid[userChoice] = 1;
}

void singlePlayerGameLoop()
{	
	for (int i = 0; i < 9; i++)
		grid[i] = -1;

	while (!winningCondition())
	{
		updateSquare();
		userMovePrompt();
		if (winningCondition())
		{
			updateSquare();
			continue;
		}
		updateSquare();

		cout << "Waiting for opponent to play..." << endl;

		computerMove();
		if (winningCondition())
		{
			updateSquare();
			continue;
		}
		
		updateSquare();
	}

	if (winner == 0)
	{
		losses++;
		cout << "Computer Wins!" << endl << endl;
	}
	else if (winner == 1)
	{
		wins++;
		cout << "You Win!" << endl << endl;
	}
	else if (winner == -1)
	{
		cout << "It's a Draw!" << endl << endl;
	}

	do
	{
		cout << "Do you wish to play again? (Y/N)" << endl;
		cin >> playAgain;
	} while (playAgain.compare("Y") != 0 && playAgain.compare("y") != 0 && playAgain.compare("N") != 0 && playAgain.compare("n") != 0);

	if (playAgain.compare("Y") == 0 || playAgain.compare("y") == 0)
		singlePlayerGameLoop();
}

void multiplayerGameLoop()
{
	for (int i = 0; i < 9; i++)
		grid[i] = -1;

	while (!winningCondition())
	{
		updateSquare();
		userMovePrompt();
		if (winningCondition())
		{
			updateSquare();
			continue;
		}
		updateSquare();

		cout << "Waiting for opponent to play..." << endl;

		Player2MovePrompt();
		if (winningCondition())
		{
			updateSquare();
			continue;
		}

		updateSquare();
	}

	if (winner == 0)
	{
		p2Wins++;
		p1Losses++;
		cout << "Player 2 Wins!" << endl << endl;
	}
	else if (winner == 1)
	{
		p1Wins++;
		p2Losses++;
		cout << "Player 1 Wins!" << endl << endl;
	}
	else if (winner == -1)
	{
		cout << "It's a Draw!" << endl << endl;
	}

	do
	{
		cout << "Do you wish to play again? (Y/N)" << endl;
		cin >> playAgain;
	} while (playAgain.compare("Y") != 0 && playAgain.compare("y") != 0 && playAgain.compare("N") != 0 && playAgain.compare("n") != 0);

	if (playAgain.compare("Y") == 0 || playAgain.compare("y") == 0)
		multiplayerGameLoop();
}

void MenuChoice()
{
	system("CLS");

	cout << "1: Single Player" << endl;
	cout << "2: Multiplayer" << endl;
	cout << "3: Quit" << endl << endl;
	cout << "Enter your choice: ";
	cin >> UserChoice;
}

void menu()
{
	do
	{
		MenuChoice();

		switch (UserChoice)
		{
		case 1:
			singlePlayerGameLoop();
			break;
		case 2:
			multiplayerGameLoop();
			break;
		case 3:
			break;
		default:
			cout << "ERROR: Choose a valid number (1-3)!" << endl;
			break;
		}
	} while (UserChoice != 3);
}


int main()
{
	menu();
	return 0;
}