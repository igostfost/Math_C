#include <float.h>
#include <limits.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

#define S21_MIN 0.0000001
#define S21_MAX 9999999999999999.0
#define S21_PI 3.1415926535897932
#define S21_PI_2 1.57079632679489661923
#define S21_LN10 2.30258509299404568402
#define S21_LN2 0.69314718056
#define S21_INFINITY 1.0 / 0.0
#define S21_MINUS_INFINITY -1.0 / 0.0
#define S21_NAN 0.0 / 0.0
#define S21_NINF -1.0 / 0.0
#define S21_EPS 1e-16
#define EULER_CONST 2.718281828459045235
#define TAYLOR_ITERATIONS 300

int s21_abs(int x);  // вычисляет абсолютное значение целого числа
long double s21_acos(double x);  // вычисляет арккосинус
long double s21_asin(double x);  // вычисляет арксинус
long double s21_atan(double x);  // вычисляет арктангенс
long double s21_ceil(double x);  // возвращает ближайшее целое число, не меньшее
                                 // заданного значения
int s21_isinf(double x);         // обработка INFINITY
int s21_isnan(double x);         // обработка NAN
long double s21_cos(double x);   // вычисляет косинус
long double s21_exp(
    double x);  // возвращает значение e, возведенное в заданную степень
long double s21_fabs(
    double x);  // вычисляет абсолютное значение числа с плавающей точкой
long double s21_floor(double x);  // возвращает ближайшее целое число, не
                                  // превышающее заданное значение
long double s21_fmod(double x,
                     double y);  // остаток операции деления с плавающей точкой
long double s21_log(double x);  // вычисляет натуральный логарифм
long double s21_pow(double superBaza,
                    double power);  // возводит число в заданную степень
long double s21_sin(double x);  // вычисляет синус
long double s21_sqrt(double x);  // вычисляет квадратный корень
long double s21_tan(double x);  // вычисляет тангенс
long double whole_pow(double base, double power);
