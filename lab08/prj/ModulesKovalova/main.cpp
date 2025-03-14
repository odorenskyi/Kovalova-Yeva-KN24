#include <cmath>
#include <cstdlib>
#include <string>
#include "ModulesKovalova.h"

double s_calculation(double x, double y, double z) {


if (y == 0) {
return NAN;
}

double denominator = y * y * y;
double sinPart = z * sin(x * x * y);
double sqrtArg = fabs(z - 12 * x);
double sqrtPart = sqrt(sqrtArg);

return sinPart + sqrtPart / denominator;
}