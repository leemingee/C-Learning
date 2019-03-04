// Description: exceed.cc -- exceeding some integer limits
// 

// Created by Ming Li at 03/04/2019, Monday
// Contact: ming.li2@columbia.edu
// Linkedin: www.linkedin.com/in/leemingee 

#include <iostream>
#define ZERO 0
#include <climits>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    short sam = SHRT_MAX;
    unsigned short sue = sam;
    cout << "initially" << endl;
    cout << "Sam is  " << sam << endl; // 32767
    cout << "Sue is  " << sue << endl; // 32767
    cout << "Add one " << endl;
    sam = sam + 1;
    sue = sue + 1;
    cout << "Sam is  " << sam << endl; // -32768
    cout << "Sue is  " << sue << endl; // 32768

    sam = ZERO;
    sue = ZERO;
    cout << "get them to zero and substract 1" << endl;
    sam = sam - 1;
    sue = sue - 1;
    cout << "Sam is  " << sam << endl; // -1
    cout << "Sue is  " << sue << endl; // 65535
 
    return 0;
}

// for the signed integers: 0 -> +16384 -> +32767 -> -32767 -> -16384 -> -1 -> 0
// for the unsigned integers: 0 -> +65535 -> 0
