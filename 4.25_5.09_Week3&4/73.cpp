#include<bits/stdc++.h> 

using namespace std;

int main( )
{
    int n;
    double ans=1;
    int flag=-1;
    cin>>n;
    for(int i=2;i<=n;++i)
    {
        ans+=flag*sqrt(i);
        flag=flag*(-1);
    }
    printf("%.6lf",ans);
    return 0;
}
