#include<stdio.h>
#include<string.h>
bool IsExceedname(char* name, char* typed) 
{
	int m= strlen(name), n= strlen(typed);
	int i = 0, j = 0;
	while (j < n)
	{
		if (i < m && name[i] == typed[j]) 
		{
			i++;
			j++;
		} 
		else if (j > 0 && typed[j] == typed[j - 1]) 
		{
			j++;
		} 
		else 
		{
			return false;
		}
	}
	return true;
}

int main()
{
	char name[]="linzeyu";
	char typed[]="linzeyuu";
	if (IsExceedname(name, typed))
	{
		printf("true\n");
	}
	else
	{
		printf("false\n");
	}
	return 0;
}

