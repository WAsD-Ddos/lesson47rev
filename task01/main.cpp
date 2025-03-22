#include "logic.h"
#include "util.h"
int main() {
	srand(time(0));
	int size;
	cout << "Size: ";
	cin >> size;

	int* array = new int[size]; //{ -1, 2, -3, 4, -5, 6, -7, 8, -9, 10};
	//{7,5,1};
	init_random(array, size, -10, 10);

	for (int i = 0; i < size; i++) {
		cout << *(array + i) << " ";
	}

	cout << "\n\n" << "Sum between max and min: " << sum_elems_between_max_and_min(array, size);
	delete[] array;
	return 0;
}