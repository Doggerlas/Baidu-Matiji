#include<bits/stdc++.h> 
//辗转相除法/欧几里得算法
using namespace std;

int main( )
{
    int a,b,temp;
    scanf("%d%d",&a,&b);
    if(a<b)//保证a>b
    {
        temp=a;
        a=b;
        b=temp;
    }
    while(b)//辗转相除法求最大公约数
    {
        temp=b;
        b=a%b;
        a=temp;
    }
    printf("%d",a);
    return 0;
}
