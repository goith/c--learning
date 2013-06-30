//11-2.cpp
//读取一系列string型数据，并将他们存储到list对象中，
// 然后使用algorithm 头文件中定义的名为count的函数，
// 统计某个指定的字符串出现了的次数
#include <iostream>
#include <list>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string sval,searchVal;
    list<string> slst;
    
    //读入string 型数据并存储到list对象中，直至遇到文件结束符
    cout << "Enter some strings(Ctrl+Z to end):" << endl;
    while(cin >> sval)
        slst.push_back(sval);
    cin.clear(); //使输入流重新有效
    
    // 读入欲统计其出现次数的string值
    cout << "Enter a string you want to search :" <<endl;
    cin >> searchVal;
    
   //使用count函数统计该值出现的次数并输出结果
    cout << count(slst.begin(),slst.end(), searchVal)
         << " elements in the list are \""
         << searchVal << "\"" << endl;
    return 0;
} 
