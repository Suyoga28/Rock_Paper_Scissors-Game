#include <iostream>
#include <cstdlib>
#include <ctime>

#define ROCK 1
#define PAPER 2
#define SCISSORS 3

using namespace std;

int main()
{
  
  srand((unsigned int) time(NULL));
  
  
  int player_throw = 0;
  int ai_throw = 0;
  bool draw = false;    //if draw played again
  
  // Continually play the game until there is a winner
  do
  {
    // Prompt the user to enter their throw, store it into player_throw
    cout<<"..................................................................................";
    cout << "\n=== Select your throw ===" << endl;
    cout << "         1) Rock" << endl;
    cout << "         2) Paper" << endl;
    cout << "         3) Scissors" << endl;
    cout << "Selection: ";
    cin >> player_throw;

    cout<<endl;
    cout<<"..................................................................................\n";
    cout<<endl;

    switch (player_throw)
    {
    case 1:
        cout<<"Your (*_*) throw: Rock\n";
        break;
    case 2:
        cout<<"Your (*_*) throw: Paper\n";
        break;
    case 3:
        cout<<"Your (*_*) throw: Scissors\n";
        break;
    default:
        break;
    }
    
   
    // % 3 returns the remainder of dividing by 3, and the 
    // only possibilities for a remainder after division by 3 are 0,1,2. We 
    // then add 1 to this with +1 to shift the range up from 0-2 to 1-3.
    ai_throw = (rand() % 3) + 1;
    
    // Output the AI throw so the player knows what it is
    if (ai_throw == ROCK)
    {
      cout << "\n AI [-_-] throws: ROCK." << endl;
    }
    else if (ai_throw == PAPER)
    {
      cout << "\n AI [-_-] throws: PAPER." << endl;
    }
    else if (ai_throw == SCISSORS)
    {
      cout << "\n AI [-_-] throws: SCISSORS." << endl;
    }
    
    

    // We'll set draw to false, and only set it to true if there is a draw
    draw = false;
    
    
    if (player_throw == ai_throw)
    {
      draw = true;
      cout << " \n (^_^) Match is Draw! Play again !" << endl;
    }
    else if (player_throw == ROCK && ai_throw == SCISSORS)
    {
      cout << "\n YOU WIN ! ROCK beats SCISSORS! " << endl;
    }
    else if (player_throw == ROCK && ai_throw == PAPER)
    {
      cout << "\n YOU LOSE ! PAPER beats ROCK! " << endl;
    }
    else if (player_throw == PAPER && ai_throw == ROCK)
    {
      cout << "\n YOU WIN ! PAPER beats ROCK! " << endl;
    }
    else if (player_throw == PAPER && ai_throw == SCISSORS)
    {
      cout << "\n YOU LOSE ! SCISSORS beats PAPER! " << endl;
    }
    else if (player_throw == SCISSORS && ai_throw == PAPER)
    {
      cout << "\n YOU WIN ! SCISSORS beats PAPER! " << endl;
    }
    else if (player_throw == SCISSORS && ai_throw == ROCK)
    {
      cout << "\n YOU LOSE ! ROCK beats SCISSORS! " << endl;
    }
    
    
    cout << endl;

  
  } while (draw);

  return 0;
}