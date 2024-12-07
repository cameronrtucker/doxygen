/**
 * @file officer.h
 * @author cameron tucker
 * @date 2024-12-07
 * @brief defines the officer class which inherits from employee class
 * 
 * the officer class adds an evilness attribute to the employee class
 * and overrides the calculatePay method to factor in evilness when calculating pay
 */

#ifndef OFFICER_H
#define OFFICER_H

#include "Employee.h"

class Officer : public Employee {
 private:
  double evilness;
 public:
  void print();
  double calculatePay();
  Officer();
  Officer(int ID, int years, double hourlyRate, float hoursWorked, double evilness);
};

#endif //OFFICER_H
