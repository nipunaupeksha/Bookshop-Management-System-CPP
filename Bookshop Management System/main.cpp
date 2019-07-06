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
    cout>>"\nEnter name of author: ";
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

int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
