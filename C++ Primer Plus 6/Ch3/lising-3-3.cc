// Description:
// hexoct1.cpp show hex and octal literals

// Created by Ming Li at 03/04/2019, Monday
// Contact: ming.li2@columbia.edu
// Linkedin: www.linkedin.com/in/leemingee 

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
    int chest = 42;
    int waist = 0x42;
    int inseam = 042;

    cout << "chest " << chest << " (42 in decimal)" << endl;
    cout << "waist " << waist << " (0x42 in hex)" << endl; // 4 * 16 + 2 = 66
    cout << "inseam " << inseam << " (042 in octal" << endl; // 4 * 8 + 2 = 34
    return 0;
}

// start with 0, and range from 0-7 means the hex
// start with 0x, and range from 0-9 a-f means the octal