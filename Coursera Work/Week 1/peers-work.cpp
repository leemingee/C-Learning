// Convert this program to C++
// change to C++ io
// change to one line comments
// change defines of constants to const
// change array to vector<>
// inline any short function

#include <iostream>
#include <vector>
using namespace std;
const int N=40;

//make sum of all vector elements
inline void sum(int &p, vector<int> d)
{
    p = 0;
    for (int i=0; i<d.size(); i++)
        p+=d.at(i);
}

//main entry (body of program)
int main()
{
    int i;
    int accum = 0;
    vector<int> data;
    for(i = 0; i < N; ++i) data.push_back(i); //adding elements to the end of vector
    sum(accum, data);
    cout << "sum is " << accum << endl;
    return 0;
}