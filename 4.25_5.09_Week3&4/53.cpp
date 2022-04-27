#include<bits/stdc++.h> 

using namespace std;

int main( )
{
      int a,b,c,d;
   scanf("%d/%d %d/%d",&a,&b,&c,&d);
    printf("%d/%d + %d/%d=%lf\n",a,b,c,d,(double)(a*d+b*c)/(b*d));
    printf("%d/%d - %d/%d=%lf\n",a,b,c,d,(double)(a*d-b*c)/(b*d));
    printf("%d/%d * %d/%d=%lf\n",a,b,c,d,(double)(a*c)/(b*d));
    printf("%d/%d / %d/%d=%lf\n",a,b,c,d,(double)(a*d)/(b*c));
    return 0;
}
