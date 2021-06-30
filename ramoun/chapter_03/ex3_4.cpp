// ex3_4.cpp
// four-function calculator

#include <iostream>
#include <conio.h>

using namespace std;


int main()
    {
    char  op, again;
    float n1, n2,
          result;
    
    do {
        cout << "Enter n1 op n2: ";
        cin  >> n1 >> op >> n2;
        
        switch (op) {
            case '+': result = n1 + n2; break;
            case '-': result = n1 - n2; break;
            case '/': result = n1 / n2; break;
            case '*': result = n1 * n2; break;
            default : result = 0;
        }
        
        cout << "result = " << result << endl;
        
        cout << "again?(y/n): ";
        cin  >> again;
    } while (again != 'n');
    
    return 0;
    }



