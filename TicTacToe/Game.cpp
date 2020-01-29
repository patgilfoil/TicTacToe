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
			std::cout << grid[i][e] << "|";
		}
		std::cout << " " << std::endl;
		std::cout << "-----" << std::endl;
	}
}

void Game::getInput() {
	char input = '0';
		
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

			//checkForWin();
			player1Turn = false;
			player2Turn = true;
		}

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

			//checkForWin();
			player2Turn = false;
			player1Turn = true;
		}
	
}

bool Game::checkForWin() {
	//player 1
	
}