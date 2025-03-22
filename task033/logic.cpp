#include "logic.h"

int find_max(int* array, int size) {
	int max = *array;
	for (int i = 1; i < size; i++)
	{
		if (*(array + i) > max) {
			max = *(array + i);
		}
	}
	return max;
}

int find_min(int* array, int size) {
	int min = *array;
	for (int i = 1; i < size; i++)
	{
		if (*(array + i) < min) {
			min = *(array + i);
		}
	}
	return min;
}

double get_avg_of_non_extreme_elems(int* array, int SIZE) {
	int max = find_max(array, SIZE);
	int min = find_min(array, SIZE);

	int extremes = 0; //if more than two extreme elements

	double sum = 0;

	for (int i = 0; i < SIZE; i++)
	{
		if (array[i] == max || array[i] == min) {
			extremes++;
			continue;
		}
		sum += array[i];
	}

	return sum / (SIZE - extremes);
}