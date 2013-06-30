#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

int main()
{
    int ival;
    vector<int> vec;
    while( cin >> ival)
         vec.push_back(ival);
    int sum =accumulate(vec.begin(),vec.end(),0);
    cout << sum << endl;
    return 0;
}
