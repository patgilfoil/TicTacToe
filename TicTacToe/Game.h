#pragma once
#include <vector>
class Game
{
public:
	Game();
	~Game();

	char grid[3][3] = { {'1','2','3'}, {'4','5','6'}, {'7','8','9'} };
	bool gameOver = false;
	int mapWidth = 3;
	int mapHeight = 3;
	bool player1Turn = true;
	bool player2Turn = false;
	bool player1Win = false;
	bool player2Win = false;

	void getInput();
	bool checkForWin();
	void draw();
	bool isGameOver() { return gameOver; }
};

