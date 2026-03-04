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

	cout << "Input number you want to find: ";
	cin >> number;

	int result = find_elements(array, length, number);

	cout << "There are " << result << " elements that are simmilar to your number.";
	

	return 0;
}