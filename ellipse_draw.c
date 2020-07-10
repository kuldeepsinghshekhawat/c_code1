#include<stdio.h>
#include<graphics.h>
int main()
{
    int gd=0,gm;
    initgraph(&gd,,&gm,"");
    ellipse(250,240,0,360,40,150);
    getch();
    closegrapg();
}