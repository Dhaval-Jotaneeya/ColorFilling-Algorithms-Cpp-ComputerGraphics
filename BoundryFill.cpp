#include<conio.h>
#include<iostream>
#include<graphics.h>
using namespace std;

    boundryfill(int x,int y,int color,int bordercolor)
    {
        if( getpixel(x,y)!= bordercolor && getpixel(x,y) != color)
        {
            putpixel(x,y,color);
            boundryfill(x+1,y,color,bordercolor);
            boundryfill(x+1,y+1,color,bordercolor);
            boundryfill(x,y+1,color,bordercolor);
            boundryfill(x-1,y+1,color,bordercolor);
            boundryfill(x-1,y,color,bordercolor);
            boundryfill(x-1,y-1,color,bordercolor);
            boundryfill(x,y-1,color,bordercolor);
            boundryfill(x+1,y-1,color,bordercolor);
        }
    }
int main()
{
    int gd = DETECT;
    int gm;
    initgraph(&gd , &gm , "C:\\Program Files (x86)\\CodeBlocks\\MinGW\\include");
    rectangle(50,50,300,250);
    boundryfill(51,51,RED,WHITE);
    getch();
    closegraph();
}
