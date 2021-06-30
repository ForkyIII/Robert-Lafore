// ex3_3.cpp
// convert digits to numbers

#include <iostream>
#include <conio.h>

using namespace std;


int main()
    {
    char ch;
    unsigned long number = 0;
    
    for (int i=0; i<6; i++) {
        ch = getche();
        if (ch == '\r') break;
        number = number*10 + (ch-48);
    }
    
    cout << endl << number;
    
    return 0;
    }



