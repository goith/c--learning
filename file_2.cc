#include<iostream>
using std::cout;
using std::endl;
extern int counter;
int main() {
++counter;
cout << counter <<endl;
return 0;
}

