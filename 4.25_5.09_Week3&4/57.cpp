#include<bits/stdc++.h> 

using namespace std;

int main( )
{
    double x1,y1,z1;
    double x2,y2,z2;
    cin>>x1>>y1>>z1;
    cin>>x2>>y2>>z2;
    double x=x1-x2,y=y1-y2,z=z1-z2;
    printf("%.2f",sqrt(x*x+y*y+z*z));
    return 0;
}
