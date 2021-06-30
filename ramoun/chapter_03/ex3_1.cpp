// ex3_1.cpp
// displays multiples of a number

#include <iostream>
#include <iomanip>

using namespace std;

void another_sln()
    {
    int multiplyer;

    cout << "Enter a number: ";
    cin  >> multiplyer;

    for (int i=1; i<=20; i++) {

        for (int j=1; j<=10; j++) {
            cout << setw(7) << multiplyer * i * j;
        }
        cout << endl;
    }
    }
    
int main()
    {
    int multiplyer;
    
    cout << "Enter a number: ";
    cin  >> multiplyer;
    
    for (int i=1; i<=200; i++) {
        cout << setw(7) << multiplyer * i;
        if (i%10 == 0) {
            cout << endl;
        }
    }

    another_sln();
    
    return 0;
    }
    


