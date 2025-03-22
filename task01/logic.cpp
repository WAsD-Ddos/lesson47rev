#include "logic.h"

int find_max_index(int* array, int size) {
	int max = 0;
	for (int i = 0; i < size; i++)
	{
		if (abs(*(array + i)) > abs(*(array + max))) {
			max = i;
		}
	}
	return max;
}

int find_min_index(int* array, int size) {
	int min = 0;
	for (int i = 0; i < size; i++)
	{
		if (abs(*(array + i)) < abs(*(array + min))) {
			min = i;
		}
	}
	return min;
}

int sum_elems_between_max_and_min(int* array, int SIZE) {

	int from_index = find_min_index(array, SIZE);
	int to_index = find_max_index(array, SIZE);

	if (from_index > to_index) {
		swap(from_index, to_index);
	}

	int sum = 0;

	for (int i = from_index + 1; i < to_index; i++)
	{
		sum += *(array + i);
	}

	return sum;
}