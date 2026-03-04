#include "logic.h"

int main() {

	int array[DEFAULT_SIZE];
	int length;
	int number;

	do {
		cout << "Input size of array: ";
		cin >> length;
	} while (length <= 0);

	cout << "Inut array elements: ";
	for (int i = 0; i < length; i++)
	{
		cin >> array[i];
	}

	cout << "Input number of error: ";
	cin >> number;

	int avg = find_geometric_avg(array, length);
	int result = find_similar_elements(array, length, number);

	cout << "Average geometric is " << avg << ".";
	cout << "\nThere are " << result << " elements that are similar to this number.";

	return 0;
}