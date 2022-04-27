#include<bits/stdc++.h> 

using namespace std;

int main( )
{
    double p,R,r,emi;
    int n;
    scanf("%lf %lf %d",&p,&R,&n);
    r=R/1200;
    emi=p*r*pow(1+r,n)/(pow(1+r,n)-1);
    printf("%.1lf",emi);
    return 0;
}
