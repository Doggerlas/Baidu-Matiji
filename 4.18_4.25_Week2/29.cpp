#include<bits/stdc++.h> 

using namespace std;

int main( )
{
    int a,num=0;
    scanf("%d",&a);
    if(a==0)//考虑到0的边界条件，输入数字为0算是一位数
        num++;
    else
        for(int i=1;a/i!=0;i*=10)
         num++;
    printf("%d",num);
    return 0;
}
