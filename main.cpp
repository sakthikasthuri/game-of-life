#include "GameBoard.h"
#include "GameOfLife.h"
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

public main(int argc, char** argv){

Gameboard gb;
cout << "Welcome to the Game of Life!" << endl;
cout << "Would you like to start by providing a file to run the simulation or would you like a random assignment?"<< endl;
cout << "Please enter 'file' or 'random' to start the setup." << endl;
string answer;
cin >> answer;
if(answer == "file")
{
  //read file and exptrapolate info
}
else if(answer == "random")
{
  cout << "Please enter the number of rows you'd like in your grid: "<<endl;
  cin >> int numRow;
  cout << "Please enter the number of columns you'd like in your grid: "<<endl;
  cin >> int numCol;
  gb.GameBoard(numRow,numCol);
  cout << "Please enter a number and number between 0 and 1 to represent the density of filled spaces in your grid: "<< endl;
  cin >> float density;
  
  
}
else
{
 throw invalid_argument("Please enter file or random"); 
}
}
}
