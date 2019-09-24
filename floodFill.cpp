#include<conio.h>
#include<iostream>
#include<graphics.h>
using namespace std;

floodFill(int x,int y,int oldcolor,int newcolor)
{
    if( getpixel(x,y) == oldcolor )
    {
            putpixel(x,y,newcolor);
            floodFill(x+1,y,oldcolor,newcolor);
            floodFill(x+1,y+1,oldcolor,newcolor);
            floodFill(x,y+1,oldcolor,newcolor);
            floodFill(x-1,y+1,oldcolor,newcolor);
            floodFill(x-1,y,oldcolor,newcolor);
            floodFill(x-1,y-1,oldcolor,newcolor);
            floodFill(x,y-1,oldcolor,newcolor);
            floodFill(x+1,y-1,oldcolor,newcolor);
    }
}
int main()
{
    int gd = DETECT;
    int gm;
    initgraph(&gd , &gm , "C:\\Program Files (x86)\\CodeBlocks\\MinGW\\include");
    rectangle(50,50,300,250);
    floodFill(51,51,BLACK,RED);
    getch();
    closegraph();
}
