#include "logic.h"
#include "util.h"

int main() {
	srand(time(0));

	int size;

	cout << "Size: ";
	cin >> size;

	int* array = new int[size]; 

	init_random(array, size, -10, 10);

	for (int i = 0; i < size; i++) {
		cout << *(array + i) << " ";
	}

	cout << "\n\n" << "Avg of non-zero elements: " << avg_of_non_zero_elems(array, size);
	delete[] array;
	return 0;
}