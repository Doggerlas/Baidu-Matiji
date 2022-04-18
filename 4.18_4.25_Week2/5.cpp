//输入：123456789
//输出：123 456 789
/*本地正确，平台错误*/

#include<bits/stdc++.h> 
using namespace std;

int main( )
{
  char ipt_num[10];
  char dst1[3],dst2[3],dst3[3];
  int i;
  cin>>i;
  sprintf(ipt_num,"%d",i);
  strncpy(dst1, ipt_num, 3);
  strncpy(dst2, ipt_num+3, 3);
  strncpy(dst3, ipt_num+6, 3);
  int d1=atoi(dst1);
  int d2=atoi(dst2);
  int d3=atoi(dst3);
  printf("%d %d %d\n",d1,d2,d3);
	return 0;
}
