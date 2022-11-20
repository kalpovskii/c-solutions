// Задание: Ввести N натуральных чисел. Завершить ввод 0-м. Вывести максимальное число.

#include <stdio.h>

int main ()
{
	int num;
	int max = 0;
	printf("Enter the num:\n");
	while(1) {
		scanf("%d", &num);
		if (num == 0) {
			break;		
		}
		if (num > max) {
			max = num;
		}
		if (num < 0) {
		    printf("Only natural numbers!\n");
		}
	}

	printf("Maximal num is: %d\n", max);
	return 0;
}
