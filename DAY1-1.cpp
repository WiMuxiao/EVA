#include<stdio.h>
int sum(int num1, int num2)
{
	return (num1+num2);
}
int main()
{
		int a,b,answer;
	scanf("%d%d",&a,&b);
	printf("num1=%d,num2=%d\n",a,b);
	answer=sum(a,b);
	printf("%d\n",answer);
	return 0;
}
