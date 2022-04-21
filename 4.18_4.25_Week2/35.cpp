#include<bits/stdc++.h> 

using namespace std;

int main( )
{
    int a,i=1;
    scanf("%d",&a);
    while(i*i<=a)
    {
        printf("%d\n",i*i);
        i+=2;
    }
    return 0;
}
