#include "rand.h"

// генерируем случайное число
int gen() {
	static int f0 = 1, f1 = 1, f2 = 1, f = 0;
	f = (f0 + f1 + f2) % NUMS;
	f0 = f1;
	f1 = f2;
	f2 = f;
	return f;
}