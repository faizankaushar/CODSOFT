#include <iostream>
#include <ctime>
using namespace std;

// created a class guessNumber
class guessNumber
{                 
    int realNumber; 
    int guessedNumber;
    int attempts;
    
    public:

    // created a constructor guessNumber to initilize the variables
    guessNumber()
    {
        realNumber=rand()%100+1;      // Generate a random number between 1 and 100
        attempts=0;
    }

    // defined a member function to print the message
    void displayMessage()
    {
        cout<<"\t\t\t\t\t\t__________WELCOME TO THE NUMBER GUESSING GAME__________"<<endl<<endl<<endl;
        cout<<"\t\t\t\t\t\t\t_____YOU HAVE ONLY 8 ATTEMPTS TO FIND_____"<<endl<<endl<<endl;
    }

    // defined a member function to run the loop
    void findNumber()
    {
        do
        {
            cout<<"Enter a number that you think is the right number between 1 and 100: ";
            cin>>guessedNumber;
            attempts++;

                if(guessedNumber>realNumber)
                {
                    cout<<"The number that you have entered is too high. Please try again"<<endl<<endl;
                }
                else if(guessedNumber<realNumber)
                {
                    cout<<"The number that you have entered is too low! Please try again."<<endl<<endl;
                }
                else
                {
                    cout<<"Congratulations! You guessed the correct number "<<realNumber<<" in "<<attempts<<" attempts!"<<endl<<endl;
                }
                if(attempts>7)
                {
                    cout<<"You have finished your all attempts"<<endl<<endl;
                    break;
                }
        }
        while(guessedNumber!=realNumber);
        
    }

};

int main()
{
    srand(time(0));                 // Seed the random number generator with current time
    guessNumber A;                  //created an object 
    A.displayMessage();             //displayMessage function called
    A.findNumber();                 //findNumber function called
}
