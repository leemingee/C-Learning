// Description:
// 

// Created by Ming Li at 03/03/2019, Sunday
// Contact: ming.li2@columbia.edu
// Linkedin: www.linkedin.com/in/leemingee 

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

void timeDisplay(int, int);

int main()
{   
    int hour;
    int min;
    cout << "Enter the number of hours ";
    cin >> hour;
    cout << endl;
    cout << "Enter the number of minutes ";
    cin >> min;
    cout << endl;
    timeDisplay(hour, min);
    return 0;
}

void timeDisplay(int hour, int min)
{
    cout << "Time: " << hour << ":" << min << endl;
}