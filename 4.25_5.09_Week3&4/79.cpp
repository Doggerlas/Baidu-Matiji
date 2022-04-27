#include<bits/stdc++.h> 

using namespace std;

int main( )
{
    int n,x;
    cin>>n;
    x=sqrt(n);//右半部分返回值是floast，将其赋值给更低的数据类型整型v时，会自动向下取整
    if(pow(x,2)==n)
        printf("YES");
    else printf("NO");
    return 0;
}
