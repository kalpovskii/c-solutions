//Ввести N натуральных чисел. Завершить ввод 0-м. Вывести номер максимального числа.

#include <stdio.h>

int main () 
{
	int a;
	int max = 0;
	int i = 0;
	while (1) {
		printf("Input number: ");
		scanf ("%d", &a);
		if (a == 0) {
		    break;
		}
		if (a > max) {
			max == a;
		}
		i++;
	}
	printf ("Index of max number is: %d", i);
	return 0;
}
