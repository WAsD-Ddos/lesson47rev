#include "logic.h"
void sort_from_range(int* array, int size, int a, int b, char type) {
	if (a > b) {
		swap(a, b);
	}
	if (a > size || b > size) {
		return;
	}

	for (int i = a-1; i < b; i++)
	{
		for (int j = i + 1; j < b; j++) {
			if (type == 'a' ? array[i] > array[j] : array[i] < array[j]) {
				swap(array[i], array[j]);
			}
		}
	}

}