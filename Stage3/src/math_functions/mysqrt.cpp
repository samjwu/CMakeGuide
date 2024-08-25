// Approximates the square root of a number

// include the header file which declares file's custom math functions
#include "math_functions/mysqrt.h"

namespace math_functions {
// uses Newton's method to approximate a square root
double mysqrt(double x)
{
  // return 0 for non-positive input by default
  if (x <= 0) {
    return 0;
  }

  double result = x;

  // iterate to improve the approximation
  for (int i = 0; i < 10; ++i) {
    // if result is non-positive, reset it to a small positive value
    if (result <= 0) {
      result = 0.1;
    }

    // calculate the difference between x and the square of result
    double delta = x - (result * result);

    // update result using the Newton-Raphson method
    result = result + 0.5 * delta / result;
  }

  return result;
}
}
