#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void Reverse(char*str,int len);
int main(int argc, char *argv[]) {
	int i;
	char str[100];
	printf("������Ҫ��ת���ַ�����\n");
	gets(str);
	int len=strlen(str)-1;
	
	printf("��ת֮ǰ��\n");
	for(i=0;i<=len;i++){
		printf("%c",str[i]);
	}
	printf("\n");
	Reverse(str,len);
	printf("��ת֮��\n");
	for(i=0;i<=len;i++){
		printf("%c",str[i]);
	}
	printf("\n");
	system("pause");
	return 0;
}

void Reverse(char*str,int len){
	int left=0;
	int right=len;
	while(left<=right){
		char temp=str[left];
		str[left]=str[right];
		str[right]=temp;
		right--;
		left++;
	}
}
