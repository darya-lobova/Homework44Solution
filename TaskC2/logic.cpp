#include "logic.h"

double find_arifmetic_avg(int array[DEFAULT_SIZE], int length) {

	double avg = 1;
	double sum = 0;

	for (int i = 0; i < length; i++)
	{
		sum += array[i];
	}

	return avg = sum / length;
}


int find_elements(int array[DEFAULT_SIZE], int length) {
	int count = 0;
	double avg = find_arifmetic_avg(array, length);
	
	for (int i = 0; i < length; i++)
	{
		if (array[i] < avg) {
			count++;
		}
	}
	

	return count;
}