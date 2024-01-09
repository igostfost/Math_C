#include "s21_math.h"

long double s21_tan(double x) {
  double radians = x * S21_PI / 180.0;
  double tangens = 0.0, term = radians, sign = 1.0, power = radians;

  for (int k = 1; k <= TAYLOR_ITERATIONS; k += 2) {
    tangens += term * sign;
    term *= power * power;
    sign = -sign;
  }
  return tangens;
}
