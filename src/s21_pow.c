#include "s21_math.h"

long double whole_pow(double base, double power) {
  long double res;
  if (base == 0) {
    res = 0.0;
  } else if (power == 0) {
    res = 1.0;
  } else {
    res = base;
    double a_power = s21_abs(power);
    for (int i = 1; i < a_power; i++) {
      res *= base;
    }
    if (power < 0) {
      res = 1 / res;
    }
  }
  return res;
}

long double s21_pow(double base, double power) {
  long double res;
  if (base == 0) {
    res = 0.0;
  } else if (power == 0) {
    res = 1.0;
  } else {
    double whole = s21_floor(base);
    double tail = base - whole;

    if (tail)
      res = s21_exp(s21_log(base) * power);
    else
      res = whole_pow(base, power);
  }
  return res;
}
