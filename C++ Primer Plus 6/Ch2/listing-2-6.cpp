// Description:
// convert stone to pounds

// Created by Ming Li at 03/03/2019, Sunday
// Contact: ming.li2@columbia.edu
// Linkedin: www.linkedin.com/in/leemingee

#include <iostream>
using namespace std; // affect the whole program
// alternative, we can use the specific function
using std::cin;
using std::cout;

// prototype
int stonetolb(int);

int main()
{
    using namespace std; // affect this function only
    int stone;
    cin >> stone;
    int pounds = stonetolb(stone);
    cout << stone << " as stone" << endl;
    cout << pounds << " as pounds" << endl;
    return 0;
}

int stonetolb(int sts)
{
    return 14 * sts;
}