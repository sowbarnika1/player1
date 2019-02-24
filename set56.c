#include<stdio.h>
#include<math.h>
#define pi 3.14
int main()
{
    int n;
	float res;
	scanf("%d",&n);
	res=sin(n*pi/180);
	printf("%.1f",res);
	return 0;
}
