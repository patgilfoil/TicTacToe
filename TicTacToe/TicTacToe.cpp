// TicTacToe.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include "Game.h"
#include <iostream>

int main()
{
	Game game;

	while (!game.isGameOver()) {
		game.getInput();
	}
}
