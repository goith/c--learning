#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

int main()
{
   vector<double> v(3,2);
   float sum = accumulate(v.begin(),v.end(),0.0);
   cout << sum << endl;
   return 0;
}
