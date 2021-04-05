//Tyler Rains
//COP2000
//This program will read in words from a file and count how many there are total and count them based on length of chars

#include<iostream>
#include<fstream>
#include<string>

using namespace std;

//prototypes
void openFile();
void getInput(string& in);
void closeFile();

class countWords
{
    private:
        int count;
    public:
        countWords();

};
/***********Method definitions********************/
countWords::countWords()
{
    //initialize variables
    count = 0;
}

/**********************Driver**********************/
int main()
{
    const int NUM_LETTERS = 9;
    int countLetters[NUM_LETTERS]

}
/*************Function Definitions*************************/
void header()
{
cout << "Number or Letters per Word:\n\n" << endl;
}

void openFile()
{
    ifstream infile;  // Opens file
    infile.open("TheRaven.txt");
    if (infile.is_open())
    cout << "Opening file....\nProcessing File\n\n" << endl;
}
void getInput(string& in)
{
    
            //reads in everything until the enter key is pressed}
}
void closeFile()
{
    ifstream infile;
     infile.close(); //Closes file
     if (!infile.is_open())
     cout << "Closing file.....\nEnd of results" << endl;
}