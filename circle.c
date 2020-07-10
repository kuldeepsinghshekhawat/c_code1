#include<stdio.h>
#include<graphics.h>
int main()
{
    int gd=0,gm;
    initgraph(&gd,,&gm,"");
    setcolor(14);
    circle(250,240,40);
    setcolor(10);
    rectangle(200,100,400,400);
    getch();
    closegrapg();

}