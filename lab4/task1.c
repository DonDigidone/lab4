#define _USE_MATH_DEFINES
#include <math.h>

double f(const double *x, double *result)
{
	*result = (sin((M_PI / 2) + 3 * *x)) / (1 - sin(3 * *x - M_PI));
}