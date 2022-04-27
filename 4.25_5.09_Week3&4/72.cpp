#include<bits/stdc++.h> 

using namespace std;

int main( )
{
    int a,b;
    cin>>a>>b;
    int ans=a%10+a/10*100+b/10*10+b%10*1000;
    cout<<ans;
    return 0;
}
