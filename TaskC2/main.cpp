#include "logic.h"

int main() {

	int array[DEFAULT_SIZE];
	int length;

	do {
		cout << "Input size of array: ";
		cin >> length;
	} while (length <= 0);

	cout << "Inut array elements: ";
	for (int i = 0; i < length; i++)
	{
		cin >> array[i];
	}


	int result = find_elements(array, length);
	int avg = find_arifmetic_avg(array, length);

	cout << "Average is " << avg << endl;

	cout << "There are " << result << " elements that are smaller than the average.";


	return 0;
}