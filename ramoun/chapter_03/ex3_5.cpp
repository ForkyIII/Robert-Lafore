// ex3_5.cpp
// star pyramid

#include <iostream>

using namespace std;


int main()
    {
    for (int i=0; i<10; i++) {
        for (int k=9; k>i; k--) {
            cout << ' ';
        }
        for (int j=0; j<=i*2; j++) {
            cout << '*';
        }
        cout << endl;
    }
    return 0;
    }



