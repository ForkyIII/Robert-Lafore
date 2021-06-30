// ex3_6.cpp
// factorial

#include <iostream>

using namespace std;


int main()
    {
    int num;
    unsigned int fact;
    
    do {
        fact = 1;
        cout << "Enter Number: ";
        cin  >> num;
        
        for (int i=1; i<=num; i++) {
            fact *= i;
        }
        
        cout << "factorial of " << num
             << " is " << fact << endl;
    } while (num >= 0);
    
    return 0;
    }



