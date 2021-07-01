// ex3_3.cpp
// convert digits to numbers

#include <iostream>
#include <conio.h>

using namespace std;

void another_sln() {
    char ch;
    unsigned long number = 0;

    cout << "Enter Number: ";

    while ((ch != getche()) != '\r')
    {
        number = number*10 + ch-'0';
    }

    cout << number << endl;
}

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



