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


	bool result = are_all_elements_negative(array, length);

	string msg = result ? "Yes" : "No";

	cout << msg;


	return 0;
}