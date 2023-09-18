#include<stdio.h>
#include<stdlib.h>

void sort(int a[],int b[],int num1,int num2,int m,int n)
{
	int i=m-1;
	int j=n-1;
	int max=m+n-1;
	while(i>=0&&j>=0)
	{
		if(a[i]>b[i])
		{
			a[max]=a[i];
			i--;
			max--;
			continue;
		}
		a[max]=b[j];
		max--;
		j--;
	}
	while(j>=0)
	{
		a[max]=b[j];
		max--;
		j--;
	}
}

int main()
{
	int a[10]={1,3,5,7,9};
	int b[5]={0,2,4,6,8};
	int m=5;
	int n=5;
	int sz1=sizeof(a)/sizeof(a[0]);
	int sz2=sizeof(b)/sizeof(b[0]);
	sort(a,b,sz1,sz2,m,n);
	for(int i=0;i<m+n;i++)
	{
		printf("%d",a[i]);
	}
	printf("\n");
	system("pause");
	return 0;
}
