#include<bits/stdc++.h> 
#define PI 3.1415926

using namespace std;

int main( )
{
    double area,r,h;
    scanf("%lf",&r);
    scanf("%lf",&h);
    area=PI*r*(r+sqrt(r*r+h*h));
    printf("Surface area=%.2f",area);
    return 0;
}
