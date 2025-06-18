#pragma once

#include "Random.h"
#include "GameBoard.h"
#include "Gameinformation.h"

class Game : public GameBoard, public GameInformation
{
public:
	Game(){}
	int normalGame();
	int DrawGame(int user);
private:
	Random m_rnd;
};