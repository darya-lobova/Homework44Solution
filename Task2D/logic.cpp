#include "logic.h"

bool are_all_elements_negative(int array[DEFAULT_SIZE], int length) {

	int count = 0;
	for (int i = 0; i < length; i++)
	{
		count += array[i] < 0 ? 1 : 0;
	}

	return (count == length);
}