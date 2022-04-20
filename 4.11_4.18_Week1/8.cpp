#include<bits/stdc++.h> 

using namespace std;
#define PI 3.1415926

int main( )
{
    double r,h;
    scanf("%lf %lf",&r,&h);
    printf("%.2lf\n",2*PI*r);
    printf("%.2lf\n",PI*r*r);
    printf("%.2lf\n",4*PI*r*r);
    printf("%.2lf\n",4.0/3*PI*r*r*r);
    printf("%.2lf\n",h*PI*r*r);
    return 0;
}
