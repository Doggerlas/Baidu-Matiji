#include<bits/stdc++.h> 
using namespace std;

double a=3.1415926,b=12345678.123456789;
void solve(double a)
{
    printf("%.6lf ",a);//原始数据保留6位小数输出
    int i=0;//计算指数位
    while(a>10){
        a=a/10.0;
        i++;
    }
    printf("%.6lfe+",a);//凑科学计数法前部分
    cout<<setw(3)<<setfill('0')<<i;//输出后半部分，setw(3)表示设置三位宽度，setfill('0')这三位宽度用0右填充
    return;
}
int main( )
{
    solve(a);
    cout<<endl;
    solve(b);
    return 0;
}
