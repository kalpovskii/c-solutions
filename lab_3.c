// Написать функцию нахождения в массиве целых чисел наименьшего по абсолютной величине числа.

int minimum (int* array, int N) {
	int min = array[0];
	for (int i; i < N, i++) {
		if (array[i] < min) {
			min = array[i]
		}
	}
	return min;
}
