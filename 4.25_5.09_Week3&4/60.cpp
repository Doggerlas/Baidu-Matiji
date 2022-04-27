#include<bits/stdc++.h> 

using namespace std;

int main( )
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        printf("%d %d\n",i,n/i);//整型相除直接向下取整，不用加floor函数
    }
    return 0;
}
