#include "GameOfLife.h"
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

public main(int argc, char** argv){

GameOfLife gL;

cout << "Welcome to the Game of Life!" << endl;
cout << "Would you like to start by providing a file to run the simulation or would you like a random assignment?"<< endl;
cout << "Please enter 'file' or 'random' to start the setup." << endl;
string answer;
cin >> answer;
if(answer == "file")
{
  string filename;
  cout << "Please enter the name of the file: " << endl;
  cin >> filename;
  
  cout << "To determine the type of boundary, please enter: 1 for Classic, 2 for Doughnut or 3 for Mirror."<< endl;
  cin >> string strboundary;
  int boundary = stoi(strboundary,nullptr);
  
  cout<< "To determine the type of display, please enter: 1 for Pause, 2 for Enter or 3 for File." << endl;
  cin >> string strMode;
  int mode = stoi(strMode,nullptr);
  
  if((boundary == 1 || boundary == 2 || boundary == 3) && (mode == 1 || mode == 2 || mode == 3)){
    gL.GameOfLife(boundary,mode, filename);}
  else{ throw invalid_argument("Please enter the specified integers");}
}
else if(answer == "random")
{
  cout << "Please enter the number of rows you'd like in your grid: "<<endl;
  cin >> string strnumRow;
  int numRow = stoi(strnumRow,nullptr);
  
  cout << "Please enter the number of columns you'd like in your grid: "<<endl;
  cin >> string strnumCol;
  int numCol = stoi(strnumCol,nullptr);
  
  cout << "Please enter a number and number between 0 and 1 to represent the density of filled spaces in your grid: "<< endl;
  cin >> string strdensity;
  float density = stof(strdensity,nullptr);
  
  cout << "To determine the type of boundary, please enter: 1 for Classic, 2 for Doughnut or 3 for Mirror."<< endl;
  cin >> string strboundary;
  int boundary = stoi(strboundary,nullptr);
  
  cout<< "To determine the type of display, please enter: 1 for Pause, 2 for Enter or 3 for File." << endl;
  cin >> string strMode;
  int mode = stoi(strMode,nullptr);
  
  if((boundary == 1 || boundary == 2 || boundary == 3) && (mode == 1 || mode == 2 || mode == 3)){
    gL.GameOfLife(boundary,mode,numRow,numColumn,density);}
  else{ throw invalid_argument("Please enter the specified integers");}
} 
else{
 throw invalid_argument("Please enter file or random"); 
  }
}
}
