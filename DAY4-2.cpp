#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	int n,m;
	int **a;
	char u;
	do
	{
		int i=0,j=0,k=1;
		scanf("%d",&n);
		a=(int**)malloc(sizeof(int*)*n);
		for(i=0;i<n;i++)
		{
			a[i]=(int*)malloc(sizeof(int)*n);
			memset(a[i],0,sizeof(int)*n);
		}
	m=n;
	i=0;
	while(m>=0)
	{
		if(n-m==m-1)
		{
			a[i][n-m]=k++;
			break;
		}
		for(j=n-m;j<m-1;j++)
		{
			a[i][j]=k++;
		}
		for(i=n-m;i<m-1;i++)
		{
			a[i][j]=k++;
		}
		for(j=m-1;j>n-m;j--)
		{
			a[i][j]=k++;
		}
		for(i=m-1;i>n-m;i--)
		{
			a[i][j]=k++;
		}
		m--;
		i++;
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d",a[i][j]);
		}
		printf("\n");
	}
	free(a);
	scanf(" %c",&u);
	}
	while(u=='y'||u=='Y');
	return 0;	
 } 
