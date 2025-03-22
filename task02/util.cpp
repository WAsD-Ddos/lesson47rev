#include <iostream>
using namespace std;
void init_random(int* vector, int size, int a, int b) {
	for (int i = 0; i < size; i++)
	{
		vector[i] = rand() % (b - a + 1) + a;
	}
}