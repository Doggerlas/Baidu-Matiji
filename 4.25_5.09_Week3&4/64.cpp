#include<bits/stdc++.h> 

using namespace std;

int main( )
{
    int n;
    scanf("%d",&n);
    int r=pow(n,1.0/3);//这里要用1.0/3使得结果是浮点数，要是1/3结果为0肯定不对。pow函数入参都是double型
    printf("%3d",r);
    return 0;
}
