#include "GameBoard.h"

class GameofLife{
public:
GameofLife();
//Constructor
~GameofLife();
//destructor
void nextGen();
//Moves the gameboard over to the next generation

private:
boundarymode boundary();
//chooses the boundary taurus 
pausemode pause();
//s
GameBoard oldBoard();
//Gameboard before the generation change
GameBoard newBoard();
//GameBoard after the generation shifts
}

