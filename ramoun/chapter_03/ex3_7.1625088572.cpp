// ex3_7.cpp
// Compound Interest Calculator

#include <iostream>

using namespace std;


int main()
    {
    double amount, interest;
    int years;
    char resume;
    
    do {
        cout << "Enter Initial Amount: ";
        cin  >> amount;
        
        cout << "Enter Number of Years: ";
        cin  >> years;
        
        cout << "Enter Interest Rate (percent per year): ";
        cin  >> interest;
        
        for (int i=0; i<years; i++) {
            amount += amount * (interest/100);
        }
        
        cout << "At the end of " << years
             << " years, you will have " << amount
             << " dollars"
             << endl;

        cout << "resume? (y/n): ";
        cin  >> resume;
        
    } while (resume != 'n');
    return 0;
    }



