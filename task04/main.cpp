#include "logic.h"
#include "util.h"

int main() {
	srand(time(0));

	int size = 10;


	int* array = new int[size]{ 12, 4, 5, 7, 15, 4, 16, 12, 13, 7};
	//{ -7, 2, 5, -4, -6, 11, 9};
	//{1, 2};

	//init_random(array, size, -10, 10);

	for (int i = 0; i < size; i++) {
		cout << *(array + i) << " ";
	}

	cout << "Maximums: " << get_local_maximums(array, size) << "; Minimums: " << get_local_minimums(array, size);

	delete[] array;
	return 0;
}