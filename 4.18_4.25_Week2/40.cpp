#include<bits/stdc++.h> 

using namespace std;

int main( )
{
    int a;
    cin>>a;
    int id=0,ch=1,temp=a;
    while(temp){
        if(id%2==1&&temp%2==1){
            a=a-ch;
        }
        ch*=2;
        id++;
        temp/=2;
    }
    cout<<a;
    return 0;
}
