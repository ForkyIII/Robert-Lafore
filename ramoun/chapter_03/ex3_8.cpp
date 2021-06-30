// ex3_8.cpp
// Currency Adder

#include <iostream>

using namespace std;


int main()
    {
    char resume, dot;
    int pounds1, shillings1, pence1,
        pounds2, shillings2, pence2,
        pounds , shillings , pence;
    pounds = shillings = pence = 0;
    
    do {
        cout << "Enter First Amount: ";
        cin  >> pounds1 >> dot
             >> shillings1 >> dot
             >> pence1;
             
        cout << "Enter Second Amount: ";
        cin  >> pounds2 >> dot
             >> shillings2 >> dot
             >> pence2;
        
        pence = pence1 + pence2;
        if (pence >= 12) {
            shillings++;
            pence -= 12;
        }
        
        shillings += shillings1 + shillings2;
        if (shillings >= 20) {
            pounds++;
            shillings -= 20;
        }
        
        pounds += pounds1 + pounds2;
        
        cout << "Total is: " << pounds << '.'
                             << shillings << '.'
                             << pence << endl;

        cout << "continue? ";
        cin  >> resume;
    } while (resume != 'n');
    return 0;
    }



