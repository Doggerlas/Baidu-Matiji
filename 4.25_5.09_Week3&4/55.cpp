#include<bits/stdc++.h> 

using namespace std;

int main( )
{
    float num,sq,lg,lg10;
    scanf("%f",&num);
    sq=sqrt(num);
    lg=log(num);
    lg10=log10(num);
    printf("%.2f %.2f %.2f\n",sq,lg,lg10);
    return 0;
}
