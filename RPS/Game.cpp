#include "Game.h"

int Game::normalGame()
{
	return m_rnd.GetRandom(3);
}

int Game::DrawGame(int user)
{
	int i = 0;
	int j = 0;

	for (j = 0; j < 3; j++)
	{
		i = m_board[user][j];
		if (i == 2)
			break;
	}

	return j;
}