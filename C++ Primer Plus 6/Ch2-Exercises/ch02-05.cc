// Description:
// 

// Created by Ming Li at 03/03/2019, Sunday
// Contact: ming.li2@columbia.edu
// Linkedin: www.linkedin.com/in/leemingee 

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{   
    double celsius;
    double fah;
    cout << "Please input a Celsius value:";
    cin >> celsius;
    cout << endl;
    fah = 1.8 * celsius + 32.0;
    cout << celsius << "degress Celsius is " << fah << " degree Fahrenheit" << endl;
    return 0;
}