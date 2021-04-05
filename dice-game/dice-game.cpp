// Tyler Rains
// COP2000
// This is a Dice game designed to roll dice(1-6) and add the numbers to see if a player wins or loses a point
// then at the end will display the results, a user may roll the dice as many times as they wish
#include <iostream>
#include <string>
#include <ctime>
#include <algorithm>
using namespace std;

class Game
{
private:
    int die1; //: an integer randomly generated between 1 and 6
    int die2; //: an integer randomly generated between 1 and 6
   // int totalPoints = 0;  // an integer that holds the grand total of points won by the user
   // int totalRolls = 0; //an integer that holds the total number of times the dice rolled
    void setdie1();
    void setdie2();
    int getdie1();
    int getdie2();
    string getinput();
    string validate(string n);
public:
    Game() {}
    void gameLoop();
    void checkDice(int& currentPoints, int& totalPoints);
    void gameEnd() { cout << "Thanks for playing!";}
    ~Game() {}
};

//****************************//Method Definitons//***********************************//
string Game::getinput()
{
    string input; //input from the user
    string validatedInput; //input from the user
    cout << "Do you want to roll? (y = yes, n = no): ";
    getline(cin, input);
    validatedInput = validate(input);
    return validatedInput;
}
string Game::validate(string n)
{
    while (n != "n" && n != "y")
    {
        cout << "Invalid response: (y = yes, n = no): ";
        getline(cin, n);
    }
    return n;
}
void Game::setdie1()
{
    die1 = (rand() % 6) + 1;

}
void Game::setdie2()
{
    die2 = (rand() % 6) + 1;
}
int Game::getdie1()
{
    return die1;
}
int Game::getdie2()
{
    return die2;
}
void Game::checkDice(int& currentPoints, int& totalRolls)
{
    int totalDice = die1 + die2;
    string rollStatement = "\nRolling the dice...\n\nYou rolled a: ";
    totalRolls++;
    if (totalDice == 7 || totalDice == 11)
    {
        cout << rollStatement << totalDice << "! You win! " << "Points: " << currentPoints << endl << endl;
        currentPoints++;
    }
    else if (totalDice == 2 || totalDice == 3 || totalDice == 12)
    {
        cout << rollStatement << totalDice << "! You lost! " << "Points: " << currentPoints << endl << endl;
        currentPoints--;
    }
    else
    {
        cout << rollStatement << totalDice << "! No points. " << "Points: " << currentPoints << endl << endl;
    }
}
void Game::gameLoop()
{
    cout << "Your game of chance!" << endl << endl;
    srand((unsigned)time(0));
    int currentPoints = 0, totalRolls = 0;
    string input = getinput();
    while (input == "y")
    {
        setdie1();
        setdie2();
        checkDice(currentPoints, totalRolls);
        string inp = getinput();
        if (inp == "n") {
            cout << "You rolled the dice " << totalRolls << " times." << endl << "You won " <<
                currentPoints << " points.\n" << endl;
            break;
        }
    }
}
//****************************//DRIVER//******************************************//
int main()
{
    Game letsPlay;
    letsPlay.gameLoop();
    letsPlay.gameEnd();
    letsPlay.~Game();
}