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
    //这里要是不写4.0，4/3=1，因为4和3都是int，结果也只能是int。当c++运算符两边数据类型不一样时，会自动将低类型转换为高类型。所以4.0/3其实是两个float计算，结果也是float1.333
    //或者这样
    //printf("%.2lf\n",(4*PI*r*r*r)/3);
    //或者强制类型转换
    //printf("%.2lf\n",(double)4/3*PI*r*r*r);
    printf("%.2lf\n",h*PI*r*r);
    return 0;
}
