// Created by Ming Li at 03/02/2019, Saturday
// Description: sqrt.cpp using the sqrt() function 
// Contact: ming.li2@columbia.edu
// Linkedin: www.linkedin.com/in/leemingee

#include <iostream>
#include <cmath>

int main()
{
    using namespace std;

    double area;
    double side;
    cout << "ENter the floor area" << endl;
    cin >> area;
    side = sqrt(area);
    cout << "side for the area is " << side << endl;
    return 0;
}