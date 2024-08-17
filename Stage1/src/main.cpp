// A simple program that computes the square root of a number

// include the input/output stream library for printing
#include <iostream>

// include the header file for this project's custom math functions
#include "math_functions/mysqrt.h"

int main(int argc, char* argv[])
{
  // make sure the user provides an argument for the executable
  if (argc < 2) {
    // print usage guidelines
    std::cout << "Please include a number as an argument." << std::endl;

    std::cout << "Usage: " << argv[0] << " <number>" << std::endl;

    return 1;
  }

  // convert input to double
  const double inputValue = std::stod(argv[1]);

  // call our custom square root function from the math_functions namespace
  const double outputValue = math_functions::mysqrt(inputValue);

  // print the result as output
  std::cout << "The square root of " << inputValue << " is " << outputValue << std::endl;

  return 0;
}
