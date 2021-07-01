// ex3_9.cpp
// Chairs & Guests Combinations

#include <iostream>

using namespace std;


int main()
    {
    int guests, chairs, result =1;
    char resume;

    do {
        cout << "Enter Number of Guests: ";
        cin  >> guests;

        cout << "Enter Number of Chairs: ";
        cin  >> chairs;

        if (guests < chairs) {
            cout << "Number of can't be less than number of chairs" << endl;
            continue;
        }

        for (int i=guests; i>(guests-chairs); i--) {
            result *= i;
        }

        cout << "Result: " << result << endl;

        cout << "continue? (y/n): ";
        cin  >> resume;

    } while (resume != 'n');
    return 0;
    }

