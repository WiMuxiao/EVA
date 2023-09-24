#include<stdio.h>


bool check(char c)
{
    if(c == 'a' || c=='e' || c == 'i' || c == 'o' || c == 'u' 
      || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
        return true;
    
    return false;
}

int get_len(char *s)
{
    int i=0;
    while(*s++ != '\0')
        i++;
    
    return i;
}

char * reverseVowels(char * s)
{
    int i=0, j = get_len(s)-1;
    
    while(i<j)
	{
        while(i<j && !check(s[i])) 
            i++;
        while(i<j && !check(s[j]))
            j--;
        
        printf("i = %d, j = %d\n", i, j);
        if(i >= j) break;
        char tmp = s[i];s[i] = s[j]; s[j] = tmp;
        i++;
        j--;
    }
    
    return s;
}



