#include <iostream>
#include "Employee.h"
#include "Boss.h"
using namespace std;
using namespace emp;

int main() {
    double result;
    Employee *employee = nullptr;

    employee = new Employee("1111 1111 1111 1111", "Hien Nguyen", "437 888 9999", "hnguyen@seneca.ca", 20, 15, 100);
    result = employee->getSalary();

    delete employee;
    employee = nullptr;

    cout << "Your money is: " << result << endl;

    employee = new Boss("1111 1111 1111 1111", "Hien Nguyen", "437 888 9999", "hnguyen@seneca.ca", 20, 15, 100);
    result = employee->getSalary();
    cout << "Your money for boss is: " << result << endl;

    delete employee;
    employee = nullptr;
}