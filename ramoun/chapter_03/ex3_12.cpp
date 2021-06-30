// ex3_12.cpp
// Fraction Calculator

#include <iostream>

using namespace std;


int main()
    {
    int    a, b, c, d;
    float  result;
    char   op, temp, resume;
    
    do {
        cout << "Enter Operation (e.g: 3/2 * 4/2): ";
        cin  >> a >> temp >> b >> op >> c >> temp >> d;
    
        switch (op) {
            case '+': result = (a*d + b*c) / (b*d); break;
            case '-': result = (a*d - b*c) / (b*d); break;
            case '*': result = (a*c - b*d); break;
            case '/': result = (a*d - b*c); break;
            default : result = 0;
        }
        cout << "result: " << result << endl;
        
        cout << "continue? (y/n): ";
        cin  >> resume;
        
    } while(resume != 'n');
    return 0;
    }



