#include<string>
#include<iostream>
#include<vector>
using std::cout;
using std::endl;
using std::cin;
using std::vector;
using std::string;
int main(){
string word;
vector<string> text;
while(cin >> word){
 text.push_back(word);
}
return 0;
}

