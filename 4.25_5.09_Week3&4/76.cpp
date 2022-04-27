#include<bits/stdc++.h> 
//GP就是等比数列
using namespace std;

int main( )
{
    int a1,a2,n;
    cin>>a1>>a2>>n;
    printf("%d",a1*(int)pow(a2/a1,n-1));
    return 0;
}
