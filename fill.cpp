#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> vec(10);
    fill_n(vec.begin(), 2,8);
    for(vector<int>::size_type i = 0; i != vec.size();++i)
        cout << vec[i] << endl; 
    cout << vec.size() << endl;
    return 0;
}

