#include <iostream>
#include <vector>
using namespace std;
int main()
{
 vector<int> vec;
 int search_value = 42;
 vector<int>::const_iterator result=
    find(vec.begin(),vec.end(),search_value);
 cout << "the value " << search_value
      << result 
      << endl;
 return 0;
}
