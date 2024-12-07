/**
 * @file Supervisor.h
 * @author cameron tucker
 * @date 2024-12-07
 * @brief defines the supervisor class which inherits from employee class
 * 
 * the supervisor class adds a numSupervised attribute to track the number of employees supervised
 * and overrides the calculatePay method to include a bonus based on the number of employees supervised
 */

#ifndef SUPERVISOR_H
#define SUPERVISOR_H

#include "Employee.h"

class Supervisor : public Employee {
 private:
  int numSupervised;
 public:
  void print();
  double calculatePay();
  Supervisor();
  Supervisor(int ID, int years, double hourlyRate, float hoursWorked, int numSupervised);
};

#endif //SUPERVISOR_H
