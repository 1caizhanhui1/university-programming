//
// File: main.cpp
//
// MATLAB Coder version            : 3.3
// C/C++ source code generated on  : 27-Sep-2017 12:24:17
//

//***********************************************************************
// This automatically generated example C main file shows how to call
// entry-point functions that MATLAB Coder generated. You must customize
// this file for your application. Do not modify this file directly.
// Instead, make a copy of this file, modify it, and integrate it into
// your development environment.
//
// This file initializes entry-point function arguments to a default
// size and value before calling the entry-point functions. It does
// not store or use any values returned from the entry-point functions.
// If necessary, it does pre-allocate memory for returned values.
// You can use this file as a starting point for a main function that
// you can deploy in your application.
//
// After you copy the file, and before you deploy it, you must make the
// following changes:
// * For variable-size function arguments, change the example sizes to
// the sizes that your application requires.
// * Change the example values of function arguments to the values that
// your application requires.
// * If the entry-point functions return values, store these values or
// otherwise use them as required by your application.
//
//***********************************************************************
// Include Files
#include "rt_nonfinite.h"
#include "Gaussel.h"
#include "main.h"
#include "Gaussel_terminate.h"
#include "Gaussel_initialize.h"

// Function Declarations
static void argInit_6x1_real_T(double result[6]);
static void argInit_6x6_real_T(double result[36]);
static double argInit_real_T();
static void main_Gaussel();

// Function Definitions

//
// Arguments    : double result[6]
// Return Type  : void
//
static void argInit_6x1_real_T(double result[6])
{
  int idx0;

  // Loop over the array to initialize each element.
  for (idx0 = 0; idx0 < 6; idx0++) {
    // Set the value of the array element.
    // Change this value to the value that the application requires.
    result[idx0] = argInit_real_T();
  }
}

//
// Arguments    : double result[36]
// Return Type  : void
//
static void argInit_6x6_real_T(double result[36])
{
  int idx0;
  int idx1;

  // Loop over the array to initialize each element.
  for (idx0 = 0; idx0 < 6; idx0++) {
    for (idx1 = 0; idx1 < 6; idx1++) {
      // Set the value of the array element.
      // Change this value to the value that the application requires.
      result[idx0 + 6 * idx1] = argInit_real_T();
    }
  }
}

//
// Arguments    : void
// Return Type  : double
//
static double argInit_real_T()
{
  return 0.0;
}

//
// Arguments    : void
// Return Type  : void
//
static void main_Gaussel()
{
  double A[36];
  double b[6];
  double x[6];

  // Initialize function 'Gaussel' input arguments.
  // Initialize function input argument 'A'.
  // Initialize function input argument 'b'.
  // Call the entry-point 'Gaussel'.
  argInit_6x6_real_T(A);
  argInit_6x1_real_T(b);
  Gaussel(A, b, argInit_real_T(), x);
}

//
// Arguments    : int argc
//                const char * const argv[]
// Return Type  : int
//
int main(int, const char * const [])
{
  // Initialize the application.
  // You do not need to do this more than one time.
  Gaussel_initialize();

  // Invoke the entry-point functions.
  // You can call entry-point functions multiple times.
  main_Gaussel();

  // Terminate the application.
  // You do not need to do this more than one time.
  Gaussel_terminate();
  return 0;
}

//
// File trailer for main.cpp
//
// [EOF]
//
