#include<stdio.h>
#include<stdlib.h>
#include<time.h>


void game()
{
	int ret=rand()%100+1;
	int n;
	printf("���������ַ�Χ��"); 
	scanf("%d\n",&n);
	printf("0-%d֮�����������Ѿ�����:",n) ;
	int guess=0;
	while(1)
	{
		printf("������֣�");
		scanf("%d",&guess);
		if(guess>ret)
		{
			printf("�´���\n");
		} 
		 else if(guess<ret)
		{
		 	printf("��С��\n");
		}
		else
		{
			printf("��ϲ�㣬�¶���\n");
			break;
		}
	}
}

int main()
{
	srand((unsigned int)time(NULL));
	int input=0;
	game();
	return 0;
}
