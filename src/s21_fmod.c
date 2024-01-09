#include "s21_math.h"

// остаток от деления
long double s21_fmod(double x, double y) {
  int flag = 0;
  double res = 0;
  float res2 = 0;
  double trunc_quotient = 0;

  if (s21_isinf(x)) {
    flag = 1;
    res2 = NAN;
  }

  if (s21_isnan(x)) {
    flag = 1;
    res2 = NAN;
  }

  if (y < 0) {
    y = fabs(y);
  }

  double quotient = x / y;

  if (x < 0.0) {
    trunc_quotient = s21_ceil(quotient);
  } else {
    trunc_quotient = s21_floor(quotient);
  }

  res = x - (trunc_quotient * y);

  if (y == INFINITY || y == -INFINITY) {
    res = x;
  }

  // Если результат равен 0 и x отрицательный, возвращаем -0
  if (res == 0.0 && x < 0.0) {
    res = -0.0;
  }

  return (flag == 0) ? res : res2;
}
