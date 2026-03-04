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
	int result = count_negative_elements(array, length);

	cout << "There are " << result << " negative elements in this array.";

	return 0;
}