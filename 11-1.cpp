// 11-1.cpp
//读取一系列int型数据，并将它们存储到vector对象中。
//然后使用algorithm 头文件中定义的名为count的函数
//统计某个指定的值出现了多少次
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int ival,searchValue;
    vector<int> ivec;

    //读入int型数据并存储到vector对象中，直至遇到文件结束符
    cout << "Enter some integers(Ctrl+Z to end):" << endl;
    while (cin >> ival)
        ivec.push_back(ival);
    cin.clear();  // 使输入流重新有效
    //读入欲统计其出现次数的int值
    cout << "Enter an integer you want to search :" << endl;
    cin >> searchValue;
    //使用count函数统计该值出现的次数并输出结果
    cout << count(ivec.begin(),ivec.end(),searchValue)
         << " elements in the vector have value "
         << searchValue << endl;
    return 0;
}
