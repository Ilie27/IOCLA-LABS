#include <stdio.h>

//  unsigned int get_max(unsigned int *arr, unsigned int len);
unsigned int get_max(unsigned int *arr, unsigned int len, unsigned int *pos);

int main(void)
{
	unsigned int arr[] = { 19, 7, 129, 87, 54, 218, 67, 12, 19, 99 };
	unsigned int max, pops;

	max = get_max(arr, 10, &pops);

	printf("max: %u at position: %u \n", max, pops);

	return 0;
}
