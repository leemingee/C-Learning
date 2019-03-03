// Description:
// 

// Created by Ming Li at 03/03/2019, Sunday
// Contact: ming.li2@columbia.edu
// Linkedin: www.linkedin.com/in/leemingee

#include <iostream>
using namespace std;

void print1();
void print2();

int main()
{
    print1();
    print1();
    print2();
    print2();
    return 0;
}

void print1()
{
    cout << "Three blind mice" << endl;
}

void print2()
{
    cout << "See how they run" << endl;
}