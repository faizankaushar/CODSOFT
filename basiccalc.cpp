#include<iostream>
using namespace std;

//creating the class

class takeInput
{
    //defining two integer to store values and one character to get the choice

    int firstNumber;
    int secondNumber;
    char choice;
    
    public:

    //defining function to get the values fron the user and store it

    void getValues()
    {
        cout<<"Enter the First numbers on which you want to perform the operations:"<<endl;
        cin>>firstNumber;
        cout<<"Enter the Second numbers on which you want to perform the operations:"<<endl;
        cin>>secondNumber;
    }

    //defining function to get the choice/operation 

    void choiceTaking()
    {
        cout<<"Please select the operation from below that you want to perform:"<<endl;
        cout<<"+"<<endl<<"-"<<endl<<"*"<<endl<<"/"<<endl<<"%"<<endl;
        cin>>choice;
    }

    //this function is defined to calculate the result using switch case

    void calculate()
    {
        switch(choice)
        {
            case '+':
                cout<<"Addition of "<<firstNumber <<" and "<<secondNumber<<" is: "<<firstNumber+secondNumber;
                break;
            case '-':
                cout<<"Substraction of "<<firstNumber <<" and "<<secondNumber<<" is: "<<firstNumber-secondNumber;
                break;
            case '*':
                cout<<"Product of "<<firstNumber <<" and "<<secondNumber<<" is: "<<firstNumber*secondNumber;
                break;
            case '/':
                cout<<"Division of "<<firstNumber <<" and "<<secondNumber<<" is: "<<firstNumber/secondNumber;
                break;
            case '%':
                cout<<"Remainder of "<<firstNumber <<" and "<<secondNumber<<" is: "<<firstNumber%secondNumber;
                break;
            default:
                cout<<"Invalid choice";
        }
    }
};

int main()
{
    takeInput A;            //creating an object for the class
    A.getValues();          //calling the function getvaluse
    A.choiceTaking();       //calling the function choiceTaking
    A.calculate();          //calling the function calculate
    return 0;
}