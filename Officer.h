#ifndef OFFICER_H
#define OFFICER_H

#include "Employee.h"

class Officer : public Employee {
 private:
  double evilness;
 public:

/**
 * used to print everything exclusive to the officer
 *
 * @pre Called in runEmployeeTests in main 
 * @return Void function, doesn't return any values
 * @post No values have changed as a result of this function
 *
 */
  void print();

/**
 * A slightly different version of the calculatePay equation, taking into account how evil the officer is
 *
 * @pre Requires hourlyRate, hoursWorked and evilness.
 * @return returns a modified calcedPay variable
 * @post calcedPay has been assigned a value, no other values have changed. 
 *
 */
  double calculatePay();

/**
 * Constructor for defining every variable
 *
 * @pre contains all necessary variables created in Employee.h and Officer.h
 * @post All of the variables will be ready for use in Officer.cpp
 *
 */
  Officer();

/**
 * Imports information regarding the listed variables
 *
 * @param int ID the officer's ID number
 * @param int years the number of years worked
 * @param double hourlyRate the amount of money made per hour
 * @param float hoursWorked how many hours the officer worked
 * @param double evilness the typical behaviors of a corporate officer
 * @pre needs inputs for ID, years, hourlyRate and hoursWorked and evilness
 * @return does not return any values
 * @post reads in all necessary variables so they can be used in other functions
 *
 */
  Officer(int ID, int years, double hourlyRate, float hoursWorked, double evilness);
};

#endif //OFFICER_H
