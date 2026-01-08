#include "mytriangle.h"
bool is_valid(double a, double b, double c) {
    return (a + b > c) && (a + c > b) && (b + c > a);
}
double area(double a, double b, double c) {
    double s = (a + b + c) / 2.0;
    return sqrt(s * (s - a) * (s - b) * (s - c));
}
