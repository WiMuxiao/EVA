#include<stdio.h>

int main()
{
	int n,m;
	scanf("%d%d",&n,&m);
	int a[n][m];
	int i,r;
	for(i=0;i<n;i++)
	{
		for(r=0;r<m;r++)
		{
			scanf("%d",&a[i][r]);
		}
	}
	for(i=0;i<m;i++)
	{
		for(r=n-1;r>=0;r--)
		{
			printf("%d",a[r][i]);
		}
	}
	printf("\n");
 } 
