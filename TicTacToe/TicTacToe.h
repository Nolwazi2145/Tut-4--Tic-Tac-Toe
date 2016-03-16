#pragma once
#ifndef TicTacToe_H
class TicTacToe
{
private:
	
	int position; //where player wants to make a move
	char player1;
	char player2;
	char grid[3][3];
public:
	TicTacToe();
	~TicTacToe();
	void reset();
	void play();
	bool move(int, int);
	bool validateMove(int, int);
	void print();
	void over();
};
#endif
