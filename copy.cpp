#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> ivec;
    vector<int> ilst(10,5);
    //copy elements from ilst into ivec
    copy(ilst.begin(),ilst.end(),back_inserter(ivec));
    for(vector<int>::size_type i = 0; i != ivec.size(); i++)
         cout << ivec[i] << endl;
    return 0;
}
