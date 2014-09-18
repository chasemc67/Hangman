#include <conio.h>
#include <iostream>
#include <windows.h>
using namespace std;
#include "C:\Users\chase\Desktop\Games\C++\helper.h"
#include "C:\Users\chase\Desktop\Games\C++\helper2.h"


int playGame();
void updateCount(int outcome, int &wins, int &loses, int &draws);
char askRepeat();
void report(int wins, int loses, int draws);

int main()
{
clrscr();
//-----------------------------
int draws=0;
int wins=0;
int loses=0;
char replay='y';
int outcome=0;

while (replay=='y')

{
outcome = playGame();
updateCount(outcome,wins,loses,draws);
report( wins,loses,draws);
replay = askRepeat();
clrscr();
}
//-----------------------------
cout << endl << endl << "PRESS ANY KEY TO EXIT" << endl;
getch();
clrscr();
return(0);
}

int playGame()
{
    randomize();
    int numCards=0;
    int userSum=0;
    int computerSum=0;
    int randomNum=0;
    
    
    cout<<"How many cards would you like?"<<endl;
    cin>>numCards;
    clrscr();

    cout<<"You: ";
    for(int i=0; i<numCards; i++)
    {
       randomNum=random(1,10);
       userSum=userSum+randomNum;
    cout<<randomNum<<" ";
    }
    cout<<"Overall Number: "<<userSum;
    cout<<endl<<endl;

    cout<<"Computer: ";
    for(int c=0; c<3; c++)
    {
      randomNum=random(1,10);
      computerSum=computerSum+randomNum;
      cout<<randomNum<<" ";
    }

    cout<<"Overall Number: "<<computerSum;
    cout<<endl<<endl;


if(userSum>21&&computerSum>21||userSum==computerSum)
{
 cout<<"The game is a draw"<<endl<<endl;
return(0);
}

else if(computerSum>userSum&&computerSum<22)
{
 cout<<"You lose"<<endl<<endl;
return(2);
}

else if(computerSum>21||userSum>computerSum && userSum<22)
{
 cout<<"You win"<<endl<<endl;
return(1);
}

}

void updateCount(int outcome, int &wins, int &loses, int &draws)
{
     if(outcome==0)
     draws++;
     if(outcome==1)
     wins++;
     if(outcome==2)
     loses++;
     
}

void report(int wins, int loses, int draws)
{
     cout<<"DRAWS: "<<draws<<" WINS: "<<wins<<" LOSES "<<loses<<endl<<endl;
}

char askRepeat()
{
char play='y';
cout<<"would you like to play again? (y/n)";
cin>>play;
return (play);
}


