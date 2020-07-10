 #include<stdio.h>
 #include<windows.h>
 int main()
 {
     
    gotoxy(20,8);
    printf("KUldeep");
    return 0;
 }
 int gotoxy(int x,int y)
 {
     COORD c;
     c.X=x;
     c.Y=y;
     SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);
    return 0;
 }