#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
using namespace std;

int main()
{
    vector<int> vec;
    fill_n(back_inserter(vec),10,0);
    for(vector<int>::size_type i=0; i != vec.size();++i)
       cout << vec[i] << endl;
    return 0;
}

