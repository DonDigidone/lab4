#include <math.h>
#define PI 3.1415926
double f(const double *x, double *result)
{
	*result = (sin((PI / 2) + 3 * *x)) / (1 - sin(3 * *x - PI));
}