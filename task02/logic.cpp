#include "logic.h"

double avg_of_non_zero_elems(int* array, int SIZE) {
	double sum = 0;

	for (int i = 0; i < SIZE; i++)
	{
		if (*(array + i) != 0) {
			sum += *(array + i);
		}
	}

	return sum / SIZE;
}