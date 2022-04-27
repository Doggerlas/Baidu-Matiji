#include<bits/stdc++.h> 

using namespace std;

int main( )
{
    //某个数n可被幸运树j整除，那么j一定不大于n。遍历所有不大于n的数j
    int n,flag;
    scanf("%d",&n);
    for (int i=1;i<=n;++i)
    {
        int j=i;//首先看j是不是幸运数，是的话flag=1，否则为0
        while(j)
        {
            if(j%10!=4 && j%10!=7)
            {
                flag=0;
                break;
            }
            else
            {
                flag=1;
            }
            j/=10;
        }
        if(flag==1 && n%i==0)
        {
            printf("YES");
            return 0;
        }
    }
    printf("NO");
    return 0;
}
