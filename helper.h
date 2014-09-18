/*
  THIS IS A HELPER FILE TO HOLD FUNCTION
  THAT WE CAN USE IN ANY OF OUR PROJECTS
*/
//CLEAR SCREEN
void clrscr()
{
     system("CLS");
}
/*
  ALLOWS COLOR TO BE PUT INTO ANY PROJECT
  1 - Blue
  2 - Lime Green
  3 - Aqua or Teal
  4 - Red
  5 - Purple
  6 - Yellow
  7 - White
  8 - Grey
  After #15, backgrounds start to change behind the text only
*/
/*
void color(int color)
{
 HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);
 SetConsoleTextAttribute( hOut, color | FOREGROUND_INTENSITY);
}
*/
void randomize() //just allowing students to keep with old style
{
     srand(time(NULL)); //required to seed the random generator
}

int random(int end) //just allowing students to keep with old style
{
    return ( rand() % end );
}

int random(int start, int end) //just allowing students to keep with old style
{
    int spread = end - start + 1;
    return ( rand() % spread + start );
}
/*
void gotoxy(int xpos, int ypos)
{
  COORD scrn;

  HANDLE hOuput = GetStdHandle(STD_OUTPUT_HANDLE);

  scrn.X = xpos; scrn.Y = ypos;

  SetConsoleCursorPosition(hOuput,scrn);
}
*/

