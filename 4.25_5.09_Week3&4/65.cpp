#include<bits/stdc++.h> 

using namespace std;

int main( )
{
    int n,k;
    scanf("%d %d",&n,&k);
    int r=pow(n+1,k)-pow(n,k);
    printf("%d",r);
    return 0;
}
