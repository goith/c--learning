#include <iostream>
#include <algorithm>
#include <numeric>
#include <list>
#include <string>
using namespace std;

int main()
{
    // program for illustration purposes only:
    // there are much faster ways to solve this problem
    size_t cnt = 0;
    string sval;
    list<string> roster1;
    list<string> roster2;
    cout << "Enter roster1 : " << endl;
    while( cin >> sval)
        roster1.push_back(sval);
    cin.clear();
    cout << "Enter roster2 : " << endl;
    while( cin >> sval)
        roster2.push_back(sval);
    list<string>::iterator it = roster1.begin(); 
    // look in roster1 for any name also in roster2
    while ((it = find_first_of(it,roster1.end(),
                 roster2.begin(),roster2.end()))
                       != roster1.end()) {
         ++cnt;
         // we got a match ,increment it to look in the rest of roster1
         ++it;
     }
     cout << "Found " << cnt
          << " names on both roster2 " << endl;
     return 0;
}
