#include "logic.h"
#include "util.h"

int main() {
	srand(time(0));

	/*int size;

	cout << "Size: ";
	cin >> size;*/

	int* array = new int[/*size*/] {12, 4, 5, 7, 15, 4, 10, 17, 23, 7};

	//init_random(array, size, -10, 10);

	for (int i = 0; i < /*size*/ 10; i++) {
		cout << *(array + i) << " ";
	}

	cout << "\n\n" << "Avg of non-extreme elements: " << get_avg_of_non_extreme_elems(array, /*size*/10);
	delete[] array;
	return 0;
}