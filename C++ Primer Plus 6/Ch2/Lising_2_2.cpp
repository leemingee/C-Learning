// carrot.cpp
// uses and display a variable

#include <iostream>

int main()
{
    using namespace std;
    int carrots;

    carrots = 25;
    cout << "I have " << carrots << " carrots" << endl;
    cout << "Crunch, crunch" << endl;
    carrots = carrots - 1;
    cout << "Now I have " << carrots << " carrots" << endl;
    return 0;
}