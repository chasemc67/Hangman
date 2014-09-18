/*
  THIS IS A HELPER FILE TO HOLD FUNCTION
  THAT WE CAN USE IN ANY OF OUR PROJECTS
*/
//CLEAR SCREEN
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

void color(int color)
{
 HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);
 SetConsoleTextAttribute( hOut, color | FOREGROUND_INTENSITY);
}

void gotoxy(int xpos, int ypos)
{
  COORD scrn;    

  HANDLE hOuput = GetStdHandle(STD_OUTPUT_HANDLE); 

  scrn.X = xpos; scrn.Y = ypos;

  SetConsoleCursorPosition(hOuput,scrn);
}

string toupper(string str)
{
 string results = "";
 for(int a = 0; a < str.size(); a++)
 {
        results += toupper(str[a]);
 }
 return results;
}

string tolower(string str)
{
 string results = "";
 for(int a = 0; a < str.size(); a++)
 {
        results += tolower(str[a]);
 }
 return results;
}
