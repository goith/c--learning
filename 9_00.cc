#include <iostream>
#include <list>
#include <vector>
#include <string>
using namespace std;

int main()
{
    int search_value = 42;
    int a[6]= {2,44,32,54,452,11};
    vector<int> ivec(a,a+6);
    vector<int>::const_iterator result = find(ivec.begin(),ivec.end(),search_value);
    cout << "The value " << search_value << ( result == ivec.end()? " is not present " : " is present") <<endl;
    return 0;
}

