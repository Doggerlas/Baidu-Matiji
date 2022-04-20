#include<bits/stdc++.h> 

using namespace std;

int main( )
{
    char buf[100];
    //scanf("%s",&buf);//不支持中间带空格的字符串输入
    //方法1
    //gets(buf);//c函数，用于读取char*输入，但是不涉及对数组下标的检查，容易数组越界，内存泄漏
     //方法2
    cin.getline(buf,100);//c++函数，给定位数，防止越界
    printf("%6.3s",buf);//输出宽度是6，前三个字符
    return 0;
}
