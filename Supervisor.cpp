/**
 * @file Supervisor.cpp
 * @author Cameron Tucker
 * @date 2024-12-07
 * @brief functions for supervisor data
 */

#include "Supervisor.h"
#include <iostream>

using namespace std;

/**
 * @brief default constructor for the supervisor class
 *
 * initializes the numSupervised attribute to -1
 *
 * @pre none
 * @post supervisor object is created with default values
 */
Supervisor::Supervisor() {
  numSupervised = -1;
}

/**
 * @brief constructor for the supervisor class with parameters
 *
 * @param ID 
 * @param years
 * @param hourlyRate
 * @param hoursWorked 
 * @param numSupervised
 *
 * @pre all parameters should be valid
 * @post supervisor object is created with specified values
 */
Supervisor::Supervisor(int ID, int years, double hourlyRate, float hoursWorked, int numSupervised) : Employee(ID, years, hourlyRat\
e, hoursWorked) {
  this->numSupervised = numSupervised;
}

/**
 * @brief prints supervisor details
 *
 * outputs the supervisor ID, years employed, hourly rate, hours worked, and number of employees supervised
 *
 * @pre supervisor object must be initialized
 * @post supervisor information is printed to the standard output
 */
void Supervisor::print() {
  Employee::print();
  cout << " Number Supervised: " << numSupervised << endl;
}

/**
 * @brief calculates the supervisors pay
 *
 * calculates the total pay based on the supervisors hourly rate, hours worked, and number of employees supervised
 *
 * @pre supervisor object must be initialized with valid hoursWorked, hourlyRate, and numSupervised
 * @return the total pay for the supervisor
 * @post no changes are made to the supervisor object
 */
double Supervisor::calculatePay() {
  double val = Employee::calculatePay();
  val = val + val * (.01 * numSupervised);
  return val;
}
