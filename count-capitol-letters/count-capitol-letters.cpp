//count the number of uppercase characters

#include<iostream>
#include<string>
using namespace std;

//prototypes
void getInput(string& in);

class CountEm

{
private:
    int count;    //holds the count of uppercase characters

public:
    CountEm();
    void countUpper(string);
    void display();
};
/***********Method definitions********************/

CountEm::CountEm()
{
    //initialize variables
    count = 0;
    }
void CountEm::countUpper(string s)
{
    //find the length of the string
    int size = s.length();
    
     //loop through the string variable counting the number of uppercase characters
     for (int i = 0; i < size; i++)
     {
         if (s[i] >= 'A' && s[i] <= 'Z')
            count++;
    }
}
void CountEm::display()
{
    //display the value
    cout << endl << endl;
    cout << "The number of uppercase characters is: " << count << endl << endl;
}
/**********************Driver**********************/
int main()
{
    //variables
    string userInput;       //holds the input from the user
    CountEm string1;         //object of class CountEm

    getInput(userInput);       //get input from the user
    string1.countUpper(userInput);          //count the number of uppercase characters
    string1.display();            //display the result
    return 0;
}
/*************Function Definitions*************************/
void getInput(string& in)
{
    //prompt the user
    cout << "Enter a string, press Enter when done" << endl;
    getline(cin, in);             //reads in everything until the enter key is pressed}
}