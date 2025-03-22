#include "logic.h"
#include "util.h"

int main() {
	srand(time(0));

	int size = 10;


	int* array = new int[size]{12, 4, 5, 7, 15, 4, 10 ,17, 23, 7};

	
	//init_random(array, size, -10, 10);

	int a, b;
	char type;
	cout << "Sort from ... to ... elements: ";
	cin >> a >> b;
	cout << "Sorting type(a/d): ";
	cin >> type;
	cout << "Before:\n";
	for (int i = 0; i < size; i++) {
		cout << *(array + i) << " ";
	}

	sort_from_range(array, size, a, b, type);

	cout << "After:\n";
	for (int i = 0; i < size; i++) {
		cout << *(array + i) << " ";
	}
	delete[] array;
	return 0;
}