// Задание: Ввести три целых числа. Вычислить и вывести разность второго и третьего числа.

#include<stdio.h>
	
	int main () 
	{
		int a, b, c, d;
		printf ("Input number a:");
		scanf("%d", &a);
		printf ("Input number b:");
		scanf("%d", &b);
		printf ("Input number c:");
		scanf("%d", &c);
		d = b - c;
		printf ("Result: %d - %d = %d\n", b, c, d);
		return 0;
	}
