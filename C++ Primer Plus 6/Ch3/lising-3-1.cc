// Description:
// 

// Created by Ming Li at 03/03/2019, Sunday
// Contact: ming.li2@columbia.edu
// Linkedin: www.linkedin.com/in/leemingee 

#include <iostream>
#include <climits>
using std::cout;
using std::cin;
using std::endl;

int main()
{
    int n_int = INT_MAX;
    short n_short = SHRT_MAX;
    long n_long = LONG_MAX;
    long long n_llong = LLONG_MAX;

    // sizeof operator yields the size of type or of variable
    cout << "int is " << sizeof (int) << " bytes" << endl; // if sizeof an type, then need to add parentness to this type.
    cout << "short is " << sizeof n_short << " bytes" << endl;
    cout << "long is " << sizeof n_long << " bytes" << endl;
    cout << "long long is " << sizeof n_llong << " bytes" << endl;

    cout << "Maximum values:" << endl;
    cout << "int " << n_int << endl;
    cout << "short " << n_short << endl;
    cout << "long " << n_long << endl;
    cout << "llong " << n_llong << endl;
    cout << endl;
    cout << "Bits per byte =  "  << CHAR_BIT << endl;
    return 0;
}
