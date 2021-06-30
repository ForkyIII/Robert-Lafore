// ex3_3.cpp
// convert digits to numbers

#include <iostream>
#include <conio.h>

using namespace std;


int main()
    {
    char ch = 0;
    long number = 0;
    for (int i=0; i<6 && ch!='\r'; i++) {
        ch = getche();
        number = (number + (ch-48)) * 10;
        // = (0 + 1) * 10 = 10
        // = (10 + 2) * 10 = 120
        // = (120 + 3)* 10 = 12340
    }
    cout << endl << number;
    return 0;
    }



