#include<stdio.h>
#include<stdlib.h>
#include<time.h>


void game()
{
	int ret=rand()%100+1;
	int n;
	printf("请输入数字范围："); 
	scanf("%d\n",&n);
	printf("0-%d之间的随机数字已经生成:",n) ;
	int guess=0;
	while(1)
	{
		printf("请猜数字：");
		scanf("%d",&guess);
		if(guess>ret)
		{
			printf("猜大了\n");
		} 
		 else if(guess<ret)
		{
		 	printf("猜小了\n");
		}
		else
		{
			printf("恭喜你，猜对了\n");
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
