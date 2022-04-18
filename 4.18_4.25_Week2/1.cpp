//输入：4/1/2019 
//输出：20190401

#include<bits/stdc++.h> 

using namespace std;

int main( )
{
	int month, day, year;
	scanf("%d/%d/%d", &month, &day, &year);
	printf("%.4d%.2d%.2d\n", year, month, day);
    return 0;
}
