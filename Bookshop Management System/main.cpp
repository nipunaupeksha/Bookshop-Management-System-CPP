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
int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
