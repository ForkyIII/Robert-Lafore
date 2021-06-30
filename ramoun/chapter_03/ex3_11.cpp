// ex3_11.cpp
// three-function calculator

#include <iostream>

using namespace std;


int main()
    {
    char  dot, op, resume;
    int pounds1, shillings1, pence1,
        pounds2, shillings2, pence2,
        pounds , shillings , pence;
    pounds = shillings = pence = 0;

    do {
        cout << "Enter amount1 op amoun2: ";
        cin  >> pounds1 >> dot
             >> shillings1 >> dot
             >> pence1
             >> op
             >> pounds2 >> dot
             >> shillings2 >> dot
             >> pence2;

        switch (op) {
            case '+':
                pence      = pence1     + pence2;
                shillings += shillings1 + shillings2;
                pounds    += pounds1    + pounds2;
                break;
            case '-':
                pence      = pence1 - pence2;
                shillings += shillings1 - shillings2;
                pounds    += pounds1 - pounds2;
                break;
            default : cout << "invalid operation";
        }

        if (pence >= 12) {
            shillings++;
            pence -= 12;
        }
        if (shillings >= 20) {
            pounds++;
            shillings -= 20;
        }

        cout << "result = " << pounds << '.' << shillings << '.' << pence << endl;

        cout << "continue? (y/n): ";
        cin  >> resume;
    } while (resume != 'n');
    return 0;
    }



