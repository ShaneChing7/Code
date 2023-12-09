#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void menu()
{
	printf("************\n");
	printf("***1.play***\n");
	printf("***0.exit***\n");
	printf("************\n");


}

void playgame()
{
	int magic = rand() % 100 + 1;
	int guess;
	int counter = 0;
	while (1)
	{
		do {
			printf("请猜一个数：");
			scanf("%d", &guess);
			counter++;
			if (guess > magic)
				printf("太大了\n");
			else if (guess < magic)
				printf("太小了\n");
			else
				printf("right\n");

		} while (guess != magic);

				printf("您一共猜了%d次\n",counter);
	}

}



int main()
{
	int input = 0;
	srand((unsigned int)time(0));
	do {

		menu();
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			playgame();
			break;

		case 0:
			exit(0);
			break;

		default:
			printf("输入错误\\n");

		}


		}while (input);

	return 0;
}