// ex3_8.cpp
// Currency Adder

#include <iostream>

using namespace std;


int main()
    {
    char resume, dot;
    int pounds, shillings, pence;
    
    do {
        cout << "Enter First Amount: ";
        cin  >> pounds >> dot >> shillings >> dot >> pence;
        
        cout << pounds << " " << shillings << " " << pence;

        cout << "continue? ";
        cin  >> resume;
    } while (resume != 'n');
    return 0;
    }



