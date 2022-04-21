#include<bits/stdc++.h> 

using namespace std;

int main( )
{
    int a,b;
    scanf("%d %d",&a,&b);
    int i=1;
    while((a*i)%b)
    {
        i++;
    }
    printf("%d",a*i);
    return 0;
}
