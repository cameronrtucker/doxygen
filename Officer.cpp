/**
 * @file Officer.cpp
 * @author Cameron Tucker
 * @date 2024-12-07
 * @brief functions for officer data
 */

#include "Officer.h"
#include <iostream>

using namespace std;

/**
 * @brief default constructor for the officer class
 *
 * initializes the evilness attribute to 500
 *
 * @pre none
 * @post officer object is created with default values
 */
Officer::Officer() {
  evilness = 500;
}

/**
 * @brief parameterized constructor for the officer class
 *
 * @param ID 
 * @param years
 * @param hourlyRate 
 * @param hoursWorked 
 * @param evilness
 *
 * @pre all parameters should be valid
 * @post officer object is created with specified values
 */
Officer::Officer(int ID, int years, double hourlyRate, float hoursWorked, double evilness) : Employee(ID, years, hourlyRate, hours\
Worked) {
  this->evilness = evilness;
}

/**
 * @brief prints officer details
 *
 * outputs the officer ID, years employed, hourly rate, hours worked, and evilness score
 *
 * @pre officer object must be initialized
 * @post officer information is printed to the standard output
 */
void Officer::print() {
  Employee::print();
  cout << " Evilness: " << evilness << endl;
}

/**
 * @brief calculates the officers pay
 *
 * calculates the total pay based on the officers hourly rate, evilness, and hours worked
 *
 * @pre officer object must be initialized with valid hoursWorked, hourlyRate, and evilness
 * @return the total pay for the officer
 * @post no changes are made to the officer object
 */
double Officer::calculatePay() {
  return (hourlyRate + evilness) * hoursWorked;
}
