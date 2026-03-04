#include "logic.h"

double find_geometric_avg(int array[DEFAULT_SIZE], int length) {

	double avg = 1;
	double product = 1.0;
	for (int i = 0; i < length; i++)
	{
		product *= array[i];
	
	}
	cout << "DEBUG: product = " << product << ", length = " << length << endl;

	return avg = pow(product, 1.0 / (double)length);
}

int find_similar_elements(int array[DEFAULT_SIZE], int length, int number) {

	double avg = find_geometric_avg(array, length);
	int count = 0;

	for (int i = 0; i < length; i++)
	{
		if ((array[i] >= avg - number) && (array[i] <= avg + number)) {
			count++;
		}
	}
	return count;
}