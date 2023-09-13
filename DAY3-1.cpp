#include<stdio.h>
int main()
{
	int i,n,j,k;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}	
	int x=1;
	for(j=n-1;j>=0&&x==1;j--)
	{
		if(a[j]==9)
		{
			a[j]=0;
		}
		else
		{
			a[j]=a[j]+1;
			x=0;
		}
		if(a[0]==0&&x==1)
		{
			printf("1");
		}
	}
	for(k=0;k<n-1;k++)
	{
		printf("%d",a[k]);
	}
	printf("%d",a[n-1]);
	return 0;
}
