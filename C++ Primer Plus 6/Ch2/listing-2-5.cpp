// Description:
// defining your own function

// Created by Ming Li at 03/03/2019, Sunday
// Contact: ming.li2@columbia.edu
// Linkedin: www.linkedin.com/in/leemingee

#include <iostream>

void simon(int);

int main()
{
    using namespace std;
    simon(3);
    cout << "input a integer" << endl;
    int count;
    cin >> count;
    simon(count);
    return 0;
}

void simon(int n)
{
    using namespace std;
    cout << n << " times" << endl;
}