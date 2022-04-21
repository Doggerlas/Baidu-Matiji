#include<bits/stdc++.h> 

using namespace std;

int main( )
{
  int a,id=0,buf[4];
  scanf("%d",&a);
  while(a)
  {
      buf[id++]=a%10;
      a/=10;
  }
  for(int i=0;i<4;i++)
    printf("%d",buf[i]);
return 0;
}
