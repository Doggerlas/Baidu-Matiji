#include<bits/stdc++.h> 

using namespace std;

int main( )
{
    int a,b;
    cin>>a>>b;
    //流操作算子：宽度和精度可以手动设置，不写死
    //setw(n)输出数字宽度为n
    //setprecision(b)输出保留b位有效数字。若前面还有fixed就是保留几位小数
    cout<<setw(a)<<fixed<<setprecision(b)<<18.16054<< " ";//18.16054宽度设为a，保留b位小数（精度为b）
    cout<<setw(a)<<fixed<<setprecision(b)<<17.676767;
    return 0;
}
