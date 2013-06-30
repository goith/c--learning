#include <iostream>
#include <utility>
#include <vector>
#include <string>
using namespace std;

int main()
{
  string s1,v1;
  int s2,v2;
  pair<string,int> p1(s1,s2);
  pair<string,int> p2(v1,v2);
  
  cin >> s1 >> s2 >> v1 >> v2;
  if(p1 == p2)
    cout << p1.first << " p1 = p2 " << p2.second << endl;
  else if(p1 > p2)
    cout << " p1 > p2 " << endl;
  else 
    cout << " p1 < p2 " << endl;
  return 0;
}
