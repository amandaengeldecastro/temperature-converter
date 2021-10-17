/*
c||C = Celsius
k||K = Kelvin 
f||F = Fahrenheit 
a||A||a = Rankine
*/
#include <iostream>
#include <iomanip>

using namespace std;

int main ()
{
    float val, c, k, f, a;
    char t;

    cout << "Please, insert the letter indiating the temperature measuremente that you want to convert: " << endl;
    cout << "C - Celsius \nK - Kelvin \nF - Fahrenheit \nA - Rankine \n";
    cin >> t;
    cout << "Please, insert the value: \n";
    cin >> val;

    switch (t){
        case 'C':
        case 'c':
        c = val;
        k = c + 273.15;
        f = c*1.8 + 32;
        a = (c+273.15)*1.8;
        break;

        case 'K':
        case 'k':
        k = val;
        c = k - 273.15;
        f = c*1.8 + 32;
        a = k*1.8;
        break;

        case 'F':
        case 'f':
        f = val;
        c = (f-32)/1.8;
        k = c + 273.15;
        a = f+459.67;
        break;

        case 'A':
        case 'a':
        a = val;
        c = (a*0.55)-273.15;
        k = a*0.55;
        f = a - 459.67;
        break;

    }
   
    cout << "C = " << c << endl;
    cout << "K = " << k << endl;
    cout << "F = " << f << endl;
    cout << "Ra = " << a << endl;
} 