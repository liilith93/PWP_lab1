#include "LaborkaConfig.h"

#ifdef USE_TRIGONOMETRY_DEGREE
#include "trygonometria.h"
double result = cos_degree(45.0);
#else
#include <math.h>
#define M_PI 3.14159265358979323846
double result = cos(M_PI / 4.0);
#endif

int main() {
//double sinus = sin_degree(90.0);
return 0;
}