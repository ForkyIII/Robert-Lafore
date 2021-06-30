// ex3_2.cpp
// temperature-conversion

#include <iostream>

using namespace std;


int main()
    {
    // equations
    // c = (f - 32) * 5 / 9;
    // f = (1.8 * c) + 32;
    
    unsigned short opt;
    float c, f;
    
    while(1) {

        cout << "Type 1 to convert Fahrenheit to Celsius," << endl
             << "     2 to convert Celsius to Fahrenheit," << endl
             << "     3 to exit: ";
             cin  >> opt;


        switch (opt) {
            case 1:
                 cout << "Enter Fahrenheit: ";
                 cin  >> f;
                 c = (f - 32) * 5 / 9;
                 cout << "Degree in C: " << c << endl;
                 break;
            case 2:
                 cout << "Enter Celsius: ";
                 cin  >> c;
                 f = (1.8 * c) + 32;
                 cout << "Degree in F: " << f << endl;
                 break;
            case 3:
                 cout << "Exit" << endl;
                 exit(0);
                 break;
            default:
                 cout << "invalid input" << endl;
        }
        }
    return 0;
    }



