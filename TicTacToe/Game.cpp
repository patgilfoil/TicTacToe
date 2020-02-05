#include "pch.h"
#include "Game.h"
#include "Defines.h"
#include <iostream>


Game::Game() : gameOver{ false }
{
}


Game::~Game()
{
}

void Game::draw() {
	for (int i = 0; i < mapHeight; i++) {
		for (int e = 0; e < mapWidth; e++) {
			std::cout << grid[i][e] << GREEN << "|" << RESET_COLOR;
		}
		std::cout << " " << std::endl;
		std::cout << GREEN << "-----" << RESET_COLOR << std::endl;
	}
}

void Game::getInput() {
	char input = '0';
	while (!gameOver) {
		//do a turn, then check to see if anyone won
		while (player1Turn) {
			draw();
			std::cout << "Player 1, choose where to mark: " << YELLOW;

			std::cin.clear();
			std::cin.ignore(std::cin.rdbuf()->in_avail());

			std::cin >> input;
			std::cout << RESET_COLOR;

			if (input == '1' && grid[0][0] == '1') {
				grid[0][0] = 'X';
			}
			if (input == '2' && grid[0][1] == '2') {
				grid[0][1] = 'X';
			}
			if (input == '3' && grid[0][2] == '3') {
				grid[0][2] = 'X';
			}
			if (input == '4' && grid[1][0] == '4') {
				grid[1][0] = 'X';
			}
			if (input == '5' && grid[1][1] == '5') {
				grid[1][1] = 'X';
			}
			if (input == '6' && grid[1][2] == '6') {
				grid[1][2] = 'X';
			}
			if (input == '7' && grid[2][0] == '7') {
				grid[2][0] = 'X';
			}
			if (input == '8' && grid[2][1] == '8') {
				grid[2][1] = 'X';
			}
			if (input == '9' && grid[2][2] == '9') {
				grid[2][2] = 'X';
			}

			if (gameOver = checkForWin()) {
				player1Turn = false;
				player2Turn = false;
			}
			else {
				player2Turn = true;
				player1Turn = false;
			}
		}
		//same thing for player 2's turn
		while (player2Turn) {
			draw();
			std::cout << "Player 2, choose where to mark: " << YELLOW;

			std::cin.clear();
			std::cin.ignore(std::cin.rdbuf()->in_avail());

			std::cin >> input;
			std::cout << RESET_COLOR;

			if (input == '1' && grid[0][0] == '1') {
				grid[0][0] = 'O';
			}
			if (input == '2' && grid[0][1] == '2') {
				grid[0][1] = 'O';
			}
			if (input == '3' && grid[0][2] == '3') {
				grid[0][2] = 'O';
			}
			if (input == '4' && grid[1][0] == '4') {
				grid[1][0] = 'O';
			}
			if (input == '5' && grid[1][1] == '5') {
				grid[1][1] = 'O';
			}
			if (input == '6' && grid[1][2] == '6') {
				grid[1][2] = 'O';
			}
			if (input == '7' && grid[2][0] == '7') {
				grid[2][0] = 'O';
			}
			if (input == '8' && grid[2][1] == '8') {
				grid[2][1] = 'O';
			}
			if (input == '9' && grid[2][2] == '9') {
				grid[2][2] = 'O';
			}

			if (gameOver = checkForWin()) {
				player1Turn = false;
				player2Turn = false;
			}
			else {
				player1Turn = true;
				player2Turn = false;
			}
		}
	}
}

bool Game::checkForWin() {
	draw();
	//player 1
	if (grid[0][0] == 'X' && grid[0][1] == 'X' && grid[0][2] == 'X') {
		std::cout << "Player 1 wins." << std::endl;
		return true;
	}
	if (grid[1][0] == 'X' && grid[1][1] == 'X' && grid[1][2] == 'X') {
		std::cout << "Player 1 wins." << std::endl;
		return true;
	}
	if (grid[2][0] == 'X' && grid[2][1] == 'X' && grid[2][2] == 'X') {
		std::cout << "Player 1 wins." << std::endl;
		return true;
	}
	if (grid[0][0] == 'X' && grid[1][0] == 'X' && grid[2][0] == 'X') {
		std::cout << "Player 1 wins." << std::endl;
		return true;
	}
	if (grid[0][1] == 'X' && grid[1][1] == 'X' && grid[2][1] == 'X') {
		std::cout << "Player 1 wins." << std::endl;
		return true;
	}
	if (grid[0][2] == 'X' && grid[1][2] == 'X' && grid[2][2] == 'X') {
		std::cout << "Player 1 wins." << std::endl;
		return true;
	}
	if (grid[0][0] == 'X' && grid[1][1] == 'X' && grid[2][2] == 'X') {
		std::cout << "Player 1 wins." << std::endl;
		return true;
	}
	if (grid[0][2] == 'X' && grid[1][1] == 'X' && grid[2][0] == 'X') {
		std::cout << "Player 1 wins." << std::endl;
		return true;
	}
	//player 2
	if (grid[0][0] == 'O' && grid[0][1] == 'O' && grid[0][2] == 'O') {
		std::cout << "Player 2 wins.";
		return true;
	}
	if (grid[1][0] == 'O' && grid[1][1] == 'O' && grid[1][2] == 'O') {
		std::cout << "Player 2 wins.";
		return true;
	}
	if (grid[2][0] == 'O' && grid[2][1] == 'O' && grid[2][2] == 'O') {
		std::cout << "Player 2 wins.";
		return true;
	}
	if (grid[0][0] == 'O' && grid[1][0] == 'O' && grid[2][0] == 'O') {
		std::cout << "Player 2 wins.";
		return true;
	}
	if (grid[0][1] == 'O' && grid[1][1] == 'O' && grid[2][1] == 'O') {
		std::cout << "Player 2 wins.";
		return true;
	}
	if (grid[0][2] == 'O' && grid[1][2] == 'O' && grid[2][2] == 'O') {
		std::cout << "Player 2 wins.";
		return true;
	}
	if (grid[0][0] == 'O' && grid[1][1] == 'O' && grid[2][2] == 'O') {
		std::cout << "Player 2 wins.";
		return true;
	}
	if (grid[0][2] == 'O' && grid[1][1] == 'O' && grid[2][0] == 'O') {
		std::cout << "Player 2 wins.";
		return true;
	}
	else {
		return false;
	}
	
}