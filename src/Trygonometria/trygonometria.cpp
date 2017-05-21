#include "trygonometria.h"
#include <math.h>
#define M_PI 3.14159265358979323846

double sin_degree(double degree) {
	double radian = degree* M_PI / 180.0;
	return sin(radian);
}

double cos_degree(double degree) {
	double radian = degree* M_PI / 180.0;
	return cos(radian);
}