#pragma once
#ifndef TicTacToe_H
class TicTacToe
{
private:
	TicTacToe();
	~TicTacToe();
	int position; //where player wants to make a move
	char player1;
	char player2;
	char grid[3][3];
public:
	void reset();
	bool move(int, int);
	void print();
	void over();
};
#endif
