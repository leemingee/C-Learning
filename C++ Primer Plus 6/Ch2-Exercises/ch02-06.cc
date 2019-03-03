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
    double light_years;
    cout << "Enter the number of light years ";
    cin >> light_years;
    cout << endl;
    double astronomical_units = 63240 * light_years;
    cout << light_years << " light years = " << astronomical_units << "astronomial units" << endl;
    return 0;
}