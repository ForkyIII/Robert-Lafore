// ex3_20.cpp
// Compound Interest Inverse Calculator

#include <iostream>

using namespace std;


int main()
    {
    double iamount, famount, interest;
    int years=0;
    char resume;

    do {
        cout << "Enter Final Amount: ";
        cin  >> famount;
        
        cout << "Enter initial Amount: ";
        cin  >> iamount;

        cout << "Enter Interest Rate (percent per year): ";
        cin  >> interest;

        while (famount>iamount) {
            famount -= famount * (interest/100);
            years++;
        }

        cout << "It's gonna take you ' " << years
             << " years to have " << famount
             << " dollars with interest of "
             << interest << '%'
             << endl;

        cout << "resume? (y/n): ";
        cin  >> resume;

    } while (resume != 'n');
    return 0;
    }



