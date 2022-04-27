#include<bits/stdc++.h> 

using namespace std;

int main( )
{
    int n,sum;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    sum+=i-(n/i);
    printf("%d",sum);
    return 0;
}
