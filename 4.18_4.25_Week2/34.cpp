#include<bits/stdc++.h> 

using namespace std;

int main( )
{
    int a,i=2;
    scanf("%d",&a);
    while(i*i<=a)
    {
        printf("%d\n",i*i);
        i+=2;
    }
    return 0;
}
