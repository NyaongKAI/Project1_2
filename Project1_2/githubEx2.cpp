#include <stdio.h>

int main()
{
	int dan = 0, num = 1;
	printf("�� ��? ");
	scanf("%d", &dan);

	while (num < 10)
	{
		printf("%d x %d = %d \n", dan, num, dan * num);
		num++;
	}
	return 0;
}