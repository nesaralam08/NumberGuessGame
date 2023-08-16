#include <cstdlib>
#include <iostream>
#include<ctime>

int menu(void);
void easy(void);
void medium(void);
void difficult(void);
int PlayAgain(void);
using namespace std;

int main()
{
    switch(menu())
    {
        case 1:
            easy();break;
        case 2:
            medium();break;
        case 3:
            difficult();break;
        case 0:
            return -1;break;
        default:
            cout<<"\n=====You Enter Invalid Choice=====";
            PlayAgain();
    }
    
}
int menu(void)
{
    int UserLevel;
    cout<<"\t\t\t========Welcome To Number Guess Game========\n";
    cout<<"\nChoose  The Difficulty Level \n\n";
    cout<<"1. For Easy \t2. For Medium \t3. For Difficult\t0. For Exit Game \n\t";
    cin>>UserLevel;
    return UserLevel;
}
void easy(void)
{
    srand(time(0));
    int secretNumber = 1 + (rand() % 100);
    int UserChoice,i;
    cout<<"You Have 10 Choice to Find Secret Number \n";
    cout<<"\nGuess Any Number Between 1-100:\t";
    cin>>UserChoice;
    int choice=10;    
    for(i=1;i<10;i++)
    {
        if(UserChoice>secretNumber)
        {
            cout<<"\nYou Enter Greatest Number Try Again !\n";
            choice--;
            cout<<choice<<" Choice Left :\t";
            cin>>UserChoice;
        }
        else if(UserChoice<secretNumber){
            cout<<"\nYou Enter Smallest Number Try Again !\n";
            choice--;
            cout<<choice<<" Choice Left : \t";
            cin>>UserChoice;
        }
        else
        {
            cout<<"\nCongratulations You Won ";
            PlayAgain();
        }
    }
    if(i>9){
        cout<<"\nGame Over You Have 0 Choice Left !!\n";
        cout<<"The Answer is :"<<secretNumber;
        PlayAgain();
    }

}
void medium(void)
{
    srand(time(0));
    int secretNumber = 1 + (rand() % 100);
    int UserChoice,i;
    cout<<"You Have 5 Choice to Find Secret Number \n";
    cout<<"\nGuess Any Number Between 1-100:\t";
    cin>>UserChoice;
    int choice=5;    
    for(i=1;i<5;i++)
    {
        if(UserChoice>secretNumber)
        {
            cout<<"\nYou Enter Greatest Number Try Again !\n";
            choice--;
            cout<<choice<<" Choice Left :\t";
            cin>>UserChoice;
        }
        else if(UserChoice<secretNumber){
            cout<<"\nYou Enter Smallest Number Try Again !\n";
            choice--;
            cout<<choice<<" Choice Left : \t";
            cin>>UserChoice;
        }
        else
        {
            cout<<"\nCongratulations You Won ";
            PlayAgain();
        }
    }
    if(i>4){
        cout<<"\nGame Over You Have 0 Choice Left !!\n";
        cout<<"The Answer is :"<<secretNumber;
        PlayAgain();
    }
}
void difficult(void)
{
    srand(time(0));
    int secretNumber = 1 + (rand() % 100);
    int UserChoice,i;
    cout<<"You Have 3 Choice to Find Secret Number \n";
    cout<<"\nGuess Any Number Between 1-100:\t";
    cin>>UserChoice;
    int choice=3;    
    for(i=1;i<3;i++)
    {
        if(UserChoice>secretNumber)
        {
            cout<<"\nYou Enter Greatest Number Try Again !\n";
            choice--;
            cout<<choice<<" Choice Left :\t";
            cin>>UserChoice;
        }
        else if(UserChoice<secretNumber){
            cout<<"\nYou Enter Smallest Number Try Again !\n";
            choice--;
            cout<<choice<<" Choice Left : \t";
            cin>>UserChoice;
        }
        else
        {
            cout<<"\nCongratulations You Won ";
            PlayAgain();
        }
    }
    if(i>2){
        cout<<"\nGame Over You Have 0 Choice Left !!\n";
        cout<<"The Answer is :"<<secretNumber;
        PlayAgain();
    }
}
int PlayAgain(void)
{
    int choice;
    cout<<"\n\nDo You Want to Play Again \n";
    cout<<"1. For Yes\t2. For No\n";
    cin>>choice;
    switch(choice)
    {
        case 1:
            return main();
        case 2:
            exit(0);
        default:
            cout<<"You Choose Wrong Choice\n";
            return PlayAgain();    
    }
}
