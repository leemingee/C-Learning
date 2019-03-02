// Created by Ming Li at 2019/03/02
// Contact: ming.li2@columbia.edu
// Linkedin: www.linkedin.com/in/leemingee

// Convert this program to C++
// change to C++ io
// change to one line comments
// change defines of constants to const
// change array to vector<>
// inline any short function


#include <iostream>
#include <vector>

using namespace std;
const int N = 40;

inline void sum(int &p, const vector<int> &data)
{
    p = 0;
    // initial the array
    for (int i = 0; i < data.size(); i++)
    {
        p += data[i];
    }
}

int main()
{
    vector <int> data;
    for (int i = 0; i < N; i++)
    {
        data.push_back(i);
    }

    int accum;
    // call the void sum function
    sum(accum, data);
    // output using cout
    cout << 'Sum is ' << accum << endl;

    return 0;
}