#include "interval.c"

int main()
{
	struct interval arr[] = { 1, 5,
				  10, 20,
				  1, 6,
				  16, 19,
				  5, 11 };	
	int n = sizeof(arr)/sizeof(arr[0]);
	printf("%d\n", sum_intervals(arr, n));
	return 0;
}
