/**
 * @file Employee.cpp
 * @author Cameron Tucker
 * @date 2024-12-07
 * @brief Functions for employee data
 *
 */

#include "Employee.h"
#include <iostream>

using namespace std;

/**
 * @brief default constructor for the Employee class
 *
 * initializes all employee attributes to -1
 *
 * @pre
 * @post employee object is created with default values
 */
Employee::Employee() {
  ID = years = hoursWorked = hourlyRate = -1;
}

/**
 * @brief  constructor for the Employee class (with parameters)
 *
 * @param ID
 * @param years
 * @param hourlyRate 
 * @param hoursWorked 
 *
 * @pre 
 * @post employee object is created with specified values
 */
Employee::Employee(int ID, int years, double hourlyRate, float hoursWorked) {
  this->ID = ID;
  this->years = years;
  this->hourlyRate = hourlyRate;
  this->hoursWorked = hoursWorked;
}

/**
 * @brief prints employee details.
 *
 * outputs the employee ID, years employed, hourly rate, hours worked
 *
 * @pre employee object must be initialized
 * @post employee information is printed to the standard output
 */
void Employee::print() {
  cout << "Printing information for employee " << ID << ":\n Years Employed: " << years
       << "\n Hourly Rate: " << hourlyRate << "\n Hours Worked: " << hoursWorked
       << endl;
}

/**
 * @brief employee anniversary updates
 *
 * increments the number of years employed and increases the hourly rate by 0.2%
 *
 * @pre employee object must be initialized
 * @post employee's years and hourly rate are updated
 */
void Employee::anniversary() {
  years++;
  hourlyRate = hourlyRate + hourlyRate * .002;
  cout << "Congratulations to employee " << ID << " on " << years << " year(s

									    
 /**
 * @brief calculates the employee's pay
 *
 * @pre 
 * @return the total pay for the employee
 * @post 
 */
double Employee::calculatePay() {
  return hourlyRate * hoursWorked;
}
