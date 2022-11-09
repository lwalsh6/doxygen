/**
 * @file Employee.h
 * @author Logan Walsh
 * @date 2022-11-09
 * @brief Employee Header
 * 
 * The header file for regular employees
 */

#ifndef EMPLOYEE_H
#define EMPLOYEE_H


/**
 * the class file for employees
 *
 * @class Employee Employee.h "doxygen/Employee.h"
 * @brief Standard Employee
 *
 */
class Employee {
 private:
  int ID; //employee ID
  int years;
  
 protected:
  double hourlyRate;
  float hoursWorked;
 public:

/**
 * The standard print function for most of the employee's information
 *
 * @pre Called in runEmployeeTests in main 
 * @return Void function, doesn't return any values
 * @post No values have changed as a result of this function
 *
 */
  virtual void print();

/**
 * Used to determine how much the employee gets paid based on hours worked
 *
 * @pre Requires hourlyRate and hoursWorked
 * @return returns a modified calcedPay variable
 * @post calcedPay has been assigned a value, no other values have changed. 
 *
 */
  virtual double calculatePay();

/**
 * This is used to increase the pay-rate of the employee after one year
 *
 * @pre the original payrate is altered by this program
 * @return Void function, doesn't return any values
 * @post the payrate and number of years have been increased 
 *
 */
  void anniversary();

/**
 * The constructor used to store all variables
 *
 * @pre contains all necessary variables created in Employee.h
 * @post All of the variables will be ready for use in Employee.cpp
 *
 */
  Employee();

/**
 * Used to read in any input variables
 *
 * @param int ID the employee ID number
 * @param int years the number of years worked
 * @param double hourlyRate the amount of money made per hour
 * @param float hoursWorked how many hours the employee worked
 * @pre needs inputs for ID, years, hourlyRate and hoursWorked
 * @return does not return any values
 * @post reads in all necessary variables so they can be used in other functions
 *
 */
  Employee(int ID, int years, double hourlyRate, float hoursWorked);
};

#endif //EMPLOYEE_H
