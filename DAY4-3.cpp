#include<stdio.h> 
#include<stdlib.h>

int* findDiagonalOrder(int** mat, int matSize, int* matColSize, int* returnSize)
{
	if(matSize==0)
	{
		*returnSize=0;
		return 0;
	}
	int i=0,j=0,k=0;
	*returnSize=matSize*(*matColSize);
	int* res=malloc(*returnSize * sizeof(int));
	while(k<*returnSize)
	{
		res[k]=mat[i][j];
		if((i+j)%2)
		{
			if(i==matSize-1)
			{
				j++;
			}
			else
			{
				i++;
				if(j)
				{
					j--;
				}
			}
		}
		else
		{
			if(j==*matColSize-1)
			{
				i++;
			}
			else
			{
				j++;
				if(i)
				{
					i--;
				}
			}
		}
		k++;
	}
	return res;
}
