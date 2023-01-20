#include <stddef.h>

double mean_square_error(size_t n, const int a[n], const int b[n])
{
	double sum = 0;
	for (int i = 0; i < n; i++) {
		sum = sum + (a[i] - b[i]) * (a[i] - b[i]);
	}
	return sum/n;
}
