/**
 * @file Supervisor.h
 * @author Logan Walsh
 * @date 2022-11-09
 * @brief Supervisor Header
 * 
 * Header for supervisor exclusive function prototypes
 */

#ifndef SUPERVISOR_H
#define SUPERVISOR_H

#include "Employee.h"

/**
 * Logan Walsh
 *
 * @class Walsh Supervisor.cpp "hw07/Supervisor.cpp"
 * @brief contains functions for the Supervisor.h header
 *
 */
class Supervisor : public Employee {
 private:
  int numSupervised;
 public:

/**
 * used to print everything exclusive to the supervisor
 *
 * @pre Called in runEmployeeTests in main 
 * @return Void function, doesn't return any values
 * @post No values have changed as a result of this function, only contains print statements
 *
 */
  void print();

/**
 * A slightly different version of the calculatePay equation, including a 1% bonus for every employee
 *
 * @pre Requires hourlyRate, hoursWorked and numSupervised
 * @return returns a modified calcedPay variable
 * @post calcedPay has been assigned a value, no other values have changed. 
 *
 */
  double calculatePay();

/**
 * The constructor used to import all necessary variables
 *
 * @pre contains all necessary variables created in Employee.h and Supervisor.h
 * @post All of the variables will be ready for use in Supervisor.cpp
 *
 */
  Supervisor();

/**
 * Imports information regarding the listed variables
 *
 * @param int ID the supervisor's ID number
 * @param int years the number of years worked
 * @param double hourlyRate the amount of money made per hour
 * @param float hoursWorked how many hours the supervisor worked
 * @param int numSupervised the number of employees supervised
 * @pre needs inputs for ID, years, hourlyRate and hoursWorked and numSupervised
 * @return does not return any values
 * @post reads in all necessary variables so they can be used in other functions in Supervisor.cpp
 *
 */ 
  Supervisor(int ID, int years, double hourlyRate, float hoursWorked, int numSupervised);
};

#endif //SUPERVISOR_H
