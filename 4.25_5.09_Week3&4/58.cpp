#include<bits/stdc++.h> 

using namespace std;

int main( )
{
    int n;
    scanf("%d",&n);
    while(n)
    {
        if(n%10!=4 && n%10!=7)
        {
            printf("NO");
            return 0;
        }
        n/=10;
    }
    printf("YES");
    return 0;
}
