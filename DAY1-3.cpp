#include<stdio.h>
#include<string.h>
int numJewelsInStones(char * jewels, char * stones)
{
	  int count=0;
    for(int i=0;i<strlen(jewels);i++)
        for(int j=0;j<strlen(stones);j++)
        {
            if(stones[j]==jewels[i])
            count=count+1;
        }
        return count;
}
