#include <iostream>
//******************************
//   INCLUDED HEADER FILES
//******************************
#include "stdio.h"
#include "conio.h"
#include "fstream"
#include "string.h"
#include "stdlib.h"
#include "iomanip"
#include "graphics.h"

using namespace std;
//Class name: Book
class book{
public:
    char name[20];
    char author[20];
    int a;
    void getData();
    void show();
};
//functions to get and show data
void book::getData(){
    cout<<"\nEnter details about book you want to purchase: ";
    cout<<"\n\nEnter Name of book: ";
    cin>>name;
    cout<<"\nEnter name of author: ";
    cin>>author;
    fflush(stdin);
    cout<<"\nEnter no. of copies: ";
    cin>>a;
}
void book::show(){
    cout<<"Book: "<<name;
    cout<<"\nAuthor: "<<author;
    cout<<"\nCopies: "<<a;
}

//to invoke welcome screen, credit screen and ending screen
void graph(){
    for(int y=0; y<= 440; y=y+10){
        fillellipse(50,y,50,50);
        setfillstyle(2,GREEN);
        fillellipse(100,y,50,50);
        setfillstyle(3,YELLOW);
        fillellipse(200,y+10,50,50);
        setfillstyle(2,WHITE);
        fillellipse(300,y-15,50,50);
        setfillstyle(3,6);
        fillellipse(400,y-5,50,50);
        setfillstyle(2,BLUE);
        fillellipse(500,y+20,50,50);
        setfillstyle(3,CYAN);
        clearviewport();

        for(int c=440; c<=480; ++c)
        {
            setlinestyle(0,1,3);
            setcolor(WHITE);

            line(0,c,325,480);
            line(680,c,325,480);
        }
        delay(20);
    }

    int x[5];
    for(x[0]=50,x[1]=100,x[2]=200,x[3]=400,x[4]=500,y=450; y>=240; y=y-10,x[0]=x[0]+13,x[2]=x[2]+6,x[1]+=11,x[3]-=4,x[4]-=9)
    {
        fillellipse(x[0],y,20,20);
        setfillstyle(1,GREEN);
        fillellipse(x[1],y,20,20);
        setfillstyle(1,YELLOW);
        fillellipse(x[2],y+10,20,20);
        setfillstyle(1,WHITE);
        fillellipse(300,y-15,20,20);
        setfillstyle(1,6);
        fillellipse(x[3],y-5,20,20);
        setfillstyle(1,BLUE);
        fillellipse(x[4],y+20,20,20);
        setfillstyle(1,CYAN);

        clearviewport();
        for(int c=440; c&lt; 480; ++c)
        {
            setlinestyle(0,1,3);
            setcolor(BLACK);
            line(0,c,325,480);
            line(680,c,325,480);
        }
        delay(20);
    }

    for (int c=0; c&lt; 150; ++c)
    {
        setcolor(BLACK);
        fillellipse(325,240,c*1.5,c);
        delay(10);
    }
    setcolor(BLACK);
    settextstyle(7,0,5);
    outtextxy(115,200,"B O O K - S H O P");
    getch();
    clearviewport();

}
int main()
{
    clrscr();
    int gdriver=DETECT,gmode;
    initgraph(&gdriver,&gmode,"\\tc\\bgi");
    graph();
    rectangle(10,10,630,470);
    setbkcolor(RED);
    rectangle(10,10,630,470);
    settextstyle(GOTHIC_FONT,0,4);
    setcolor(WHITE);
    outtextxy(30,35,"Developed By:-");
    settextstyle(10,0,3);
    outtextxy(150,100,"*iCBSE.com");
    getch();
    char s;
    book b1;
z:

    fstream f;

}
