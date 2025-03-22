#include "logic.h"
int get_local_minimums(int* array, int size) {
	if (size <= 0) {
		return -1;
	}
	
	int minimums = 0;
	
	if (*array < *(array + 1)) {
		minimums++;
	}
	if (*(array + size - 1) < *(array + size - 2)) {
		minimums++;
	}

	for (int i = 1; i < size-1; i++)
	{
		if (*(array + i) < *(array + i + 1) && *(array + i) < *(array + i - 1)) {
			minimums++;
		}
	}
	
	return minimums;
}

int get_local_maximums(int* array, int size) {
	if (size <= 0) {
		return -1;
	}

	int maximums = 0;

	if (*array > * (array + 1)) {
		maximums++;
	}


	if (*(array + size - 1) > * (array + size - 2)) {
		maximums++;
	}


	for (int i = 1; i < size - 1; i++)
	{
		if (*(array + i) > * (array + i + 1) && *(array + i) > * (array + i - 1)) {
			maximums++;
		}
	}

	return maximums;

}
