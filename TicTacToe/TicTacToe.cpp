#include "TicTacToe.h"
#include<iostream>
#include<math.h>
using namespace std;
#define ROWS 3
#define COLUMNS 3

TicTacToe::TicTacToe()
{
}

TicTacToe::~TicTacToe()
{
}

void TicTacToe::play()
{
	int arr[9], k = 0;
	int i, j;
	while (k < 9)
	{
		if (k % 2 == 0)
		{
			cout << "Player 1 move" << endl;
		}
		else
		{
			cout << "Player 2 move" << endl;
		}
		cout << "Enter position\n";
		cin >> position;
		arr[k] = position;
		if (position == 1)
		{
			i = 0, j = 0;
		}
		if (position == 2)
		{
			i = 0, j = 1;
		}
		if (position == 2)
		{
			i = 0, j = 2;
		}
		if (position == 4)
		{
			i = 1, j = 0;
		}
		if (position == 5)
		{
			i = 1, j = 1;
		}
		if (position == 6)
		{
			i = 1, j = 2;
		}
		if (position == 7)
		{
			i = 2, j = 0;
		}
		if (position == 8)
		{
			i = 2, j = 1;
		}
		if (position == 0)
		{
			i = 2, j = 2;
		}
		if (k % 2 == 0)
		{
			grid[i][j] = 'X';
		}
		else
		{
			grid[i][j] = 'O';
		}
	}
}
bool TicTacToe::move(int,int)
{
	bool isvalid;
	char Player;
	// switching player 
	switch (position)
	{
	case 1:
		isvalid = validateMove(0, 0);                             
		if (isvalid == true)
		{
			grid[0][0] = Player;                          
			return true;

		}
		else {
			return  false;                                        //if the space is taken, then it's an error move 
		}
		break;
	case 2:
		isvalid = validateMove(0, 1);                             // check if it's an empty space 
		if (isvalid == true)
		{
			grid[0][1] = Player;                         // allow player to make a move 
			return true;
		}
		else {
			return  false;                                       //if the space is taken, then it's an error move 

		}
		break;
	case 3:
		isvalid = validateMove(0, 2);                            // check if it's an empty space 
		if (isvalid == true)
		{
			grid[0][2] = Player;                          // allow player to make a move 
			return true;
		}
		else {
			return  false;                                       //if the space is taken, then it's an error move 
		}
		break;
	case 4:
		isvalid = validateMove(1, 0);                            // check if it's an empty space 
		if (isvalid)
		{
			grid[1][0] = Player;                        // allow player to make a move 
			return true;
		}
		else {
			return  false;                                        //if the space is taken, then it's an error move 
		}
		break;
	case 5:
		isvalid = validateMove(1, 1);                            // check if it's an empty space 
		if (isvalid == true)
		{
			grid[1][1] = Player;                       // allow player to make a move 
			return true;
		}
		else {
			return  false;                                    //if the space is taken, then it's an error move 

		}
		break;
	case 6:
		isvalid = validateMove(1, 2);                          // check if it's an empty space 
		if (isvalid == true)
		{
			grid[1][2] = Player;                       // allow player to make a move
			return true;
		}
		else {
			return  false;                                    //if the space is taken, then it's an error move 
		}
		break;
	case 7:
		isvalid = validateMove(2, 0);                         // check if it's an empty space 
		if (isvalid == true)
		{
			grid[2][0] = Player;                      // allow player to make a move
			return true;
		}
		else {
			return  false;                                    //if the space is taken, then it's an error move 
		}
		break;
	case 8:
		isvalid = validateMove(2, 1);                         // check if it's an empty space 
		if (isvalid == true)
		{
			grid[2][1] = Player;                      // allow player to make a move 
			return true;
		}
		else {
			return  false;                                   //if the space is taken, then it's an error move
		}
		break;
	case 9:
		isvalid = validateMove(2, 2);                         // check if it's an empty space 
		if (isvalid == true)
		{
			grid[2][2] = Player;                      // allow player to make a move 
			return true;
		}
		else {
			return  false;                                    //if the space is taken, then it's an error move
		}
		break;
	default:                                                 // enter a 1>=value <=9 or a character 
		return false;
	}
}
bool TicTacToe::validateMove(int, int)
{
	if (grid[ROWS][COLUMNS] != 'X' && grid[ROWS][COLUMNS] != 'O')
		return true;
	else
		return false;
}
void TicTacToe::print()
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLUMNS; j++)
		{
			cout << grid[i][j] << "\t";
		}
		cout << endl;
	}
}
void TicTacToe::reset()
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLUMNS; j++)
		{
			grid[i][j] = ' ';
		}
	}
}
// have a problem with alternating the players when making moves , i have run out of option