/**
 * @file employee.h
 * @author cameron tucker
 * @date 2024-12-07
 * @brief defines the employee class with attributes and methods for handling employee data
 * 
 * the employee class includes functions for printing employee details
 * calculating pay and handling anniversary updates that modify years worked
 * and hourly rate
 */

#ifndef EMPLOYEE_H
#define EMPLOYEE_H

class Employee {
 private:
  int ID; //employee ID
  int years;
  
 protected:
  double hourlyRate;
  float hoursWorked;
 public:
  virtual void print();
  virtual double calculatePay();
  void anniversary();
  Employee();
  Employee(int ID, int years, double hourlyRate, float hoursWorked);
};

#endif //EMPLOYEE_H
