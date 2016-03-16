#pragma once
#ifndef TicTacToe_H
class TicTacToe
{
private:
	
	int position; //where player wants to make a move
	char player1;
	char player2;
	int grid[3][3];
public:
	TicTacToe();
	~TicTacToe();
	void reset();
	bool move(int, int);
	void print();
	void over();
};
#endif
