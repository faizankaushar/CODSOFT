#include <iostream>
#include <string>
using namespace std;

const int maxTask=10;               //constant means fixed value is declared

//class toDo created
class toDO
{
    string toList[maxTask];         //Array to store tasks given by user
    int numOfTasks=0;               //Current number of tasks added by user
    char choice;
    string task;
    char c='a';
    
    public:

    // this function is defined to popo up the message 

    void showMessage()
    {
        cout<<"Please select from below option"<<endl;
    }

    // this function is defined to take input from the user and to the task

    void getTheValues()
    {
        do
        {
            cout<<"1. Add task"<<endl;
            cout<<"2. View tasks"<<endl;
            cout<<"3. Exit"<<endl;
            cout<<"Enter your choice: ";
            cin>>choice;

            switch(choice)
            {
                case '1':
                    if (numOfTasks<maxTask)
                    {
                        cout<<"Enter task: ";
                        cin.ignore();
                        getline(cin,task);
                        toList[numOfTasks]=task;
                        numOfTasks++;
                        cout<<"Task added successfully."<<endl;
                    }
                    else
                    {
                        cout<<"Cannot add more tasks. Task list is full."<<endl;
                    }
                    break;
                case '2':
                    if(numOfTasks==0)
                    {
                        cout<<"No tasks added yet."<<endl;
                    }
                    else
                    {
                        cout<<"Tasks added by you are as follows:"<<endl;
                        for (int i=0; i<numOfTasks; i++)
                        {
                            cout<<c<<"."<<toList[i]<<endl;
                            c++;
                        }
                        cout<<endl;
                    }
                    break;
                case '3':
                    cout<<"Exiting program."<<endl;
                    break;
                default:
                    cout<<"Invalid choice. Please try again."<<endl;
                    break;
            }   
        }
        while(choice!='3');
    }
};


int main()
{
    toDO A;                     //an object created
    A.showMessage();            //showMessage function called
    A.getTheValues();           //getTheValue function called
    return 0;
}
