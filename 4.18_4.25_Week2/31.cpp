#include<bits/stdc++.h> 
//求分子分母最大公约数
using namespace std;

int main( )
{
    int a,b,aa,bb,temp;
    scanf("%d/%d",&a,&b);
    aa=a,bb=b;
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
    printf("%d/%d",aa/a,bb/a);
    return 0;
}
