import "GameBoard.h"
import <iostream>

GameBoard::GameBoard(int i, int j){
  //ask user for the type of mode they would like to play in
}
GameBoard::~GameBoard(){
  //destroy
}
int GameBoard::countNeighbor(int i, int j){
    int count;
    for(int k=i-1; k<=i+1; ++k)
     {
      for(int l=j-1; l<=j+1; ++l)
          {
            if(board[k][l] == 'X')
              { ++count;}
          }
    }
}
