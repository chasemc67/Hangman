/*
Name: 
Date: 
File Name: 
Purpose of Program: 

Marking Guidelines:

Execution      /2
Documentation  /2
Output         /2
Technique      /4

Total Mark     /10

*/



/*
playerwordindex: word to be guessed in vector form

userLetter: the letter that player 2 chooses.

create a new bool variable (correctGuess) to tell if guessed letter is in playerwordindex


if userLetter==playerwordindex[i]
correctGuess=1
 


if not add part to hangman, add number to number of lives allowed, if number of lives ==max number then alive=0.

if yes take index numbers where user letter is == the letter in that index of playerword index

create a new vector the same length as playerwordindex, that starts off as all _ _ _ _.
this way it is easy to match index numbers

check to see if any of the index's of the new vector are == _ to see if user has won
*/


#include <conio.h>
#include <iostream>
#include <vector>
#include "helper.h"
#inlcude "helper2.h"
using namespace std;


void takeWord(string &playerWord);
int lengthOfWord(string playerWord);
void alphabetFunction(vector <char> alphabet);
void userGuess(char userLetter, vector <char> &alphabet, int &guessNumber, vector <char> &guessIndex);
void playGame(char userLetter, vector <char> playerWordIndex, bool &correctGuess, vector <char> &guessedWord, int length, int alive);
void guessedWordFunction(vector <char> guessedWord, int length);
int main()
{
clrscr();

//second vector for guessed letters
//-----------------------------
vector <char> alphabet (26);
vector <char> guessIndex(26);
string playerWord;
takeWord(playerWord);
int guessNumber=0;
vector <char> playerWordIndex(lengthOfWord(playerWord));
char userLetter;
int alive=0;
bool correctGuess=0;
int length=lengthOfWord(playerWord);
vector <char> guessedWord(length,'_');
string abc="abcdefghijklmnopqrstuvwxyz";
for (int a=0; a<26; a++)
{
    alphabet[a]=abc[a];
}  
for (int i=0; i<lengthOfWord(playerWord); i++)
{
    playerWordIndex[i]=playerWord[i];
}




while (alive<6)
{

guessedWordFunction(guessedWord, length);
alphabetFunction(alphabet);

userGuess(userLetter, alphabet, guessNumber, guessIndex);
playGame(userLetter, playerWordIndex, correctGuess, guessedWord, length, alive);

clrscr();
}




//-----------------------------
cout << endl << endl << "PRESS ANY KEY TO EXIT" << endl;
getch();
clrscr();
return(0);
}




void takeWord(string &playerWord) //takes word to be guessed
{
cout<<"please enter a word"<<endl;
cin>>playerWord;
clrscr();
}




int lengthOfWord(string playerWord)
{
int lengthOfPlayerWord=0;
lengthOfPlayerWord=playerWord.size();
return(lengthOfPlayerWord);
}





void alphabetFunction(vector <char> alphabet)
 {
 for (int b=0; b<26; b++)
   cout<<alphabet[b]<<" ";  
}



void userGuess(char userLetter, vector <char> &alphabet, int &guessNumber, vector <char> &guessIndex)
{
bool alreadyGuessed=0;

cout<<"choose a letter"<<endl;
cin>>userLetter;
for (int guessing=0; guessing<26; guessing++)
{
 if (guessIndex[guessing]==userLetter)
    alreadyGuessed=1;
}
if(!alreadyGuessed)
{
guessIndex[guessNumber]=userLetter;
guessNumber++;
 for(int c=0; c<26; c++)
   {
     if (alphabet[c]==userLetter)
     alphabet[c]='*'; 
   } 

 }
else
{
cout<<"that letter has already been guessed"<<endl;
getch();
}
}


void playGame(char userLetter, vector <char> playerWordIndex, bool &correctGuess, vector <char> &guessedWord, int length, int alive)
{
 for (int z=1; z<length; z++)
 {
 if (playerWordIndex[z]==userLetter)
 correctGuess=1;    
 guessedWord[z]=userLetter;
  
 }    
if (!correctGuess)
alive++;

correctGuess=0;
}

void guessedWordFunction(vector <char> guessedWord, int length)
{
     cout<<endl;
 for (int m=0; m<length; m++)
 cout<<guessedWord[m]<<" "; 
 
 cout<<endl;
 cout<<endl;   
}

