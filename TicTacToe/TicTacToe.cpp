#include "TicTacToe.h"
#include<iostream>
using namespace std;
#define ROWS 3
#define COLUMNS 3

TicTacToe::TicTacToe()
{
}

TicTacToe::~TicTacToe()
{
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
bool TicTacToe::move(int i, int j)
{

	int arr[9],k=0;
	while (k < 9)
	{
		if (k % 2 == 0) cout << "Player 1 move" << endl;
		else cout << "Player 2 move" << endl;
		cout << "Enter position\n";
		cin >> position;
		arr[k] = position;
		/*for (int m = 0; m < 9; m++)
		{
			if (arr[m] == position)
				//cout << "illegal move!" << endl;
				return false;
			else
				//cout << "move is legal"<<endl
				return true;
		}*/
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
	}
	if (k % 2 == 0)
	{
		grid[i][j] == 'X';
	}
	else grid[i][j] == 'O';
	k++;
}
