//
// Created by rootusr on 3/19/20.
//

#include "Boss.h"

namespace emp {
    Boss::Boss(char *usrIdNumber, char *usrFullName, char * usrPhoneNumber, char * usrEmail, int usrAge, int usrSalary, int usrWorkingHours):Employee(usrIdNumber, usrFullName, usrPhoneNumber, usrEmail, usrAge, usrSalary, usrWorkingHours) {}

    double Boss::getSalary() {
        return Employee::getSalary() + 100000;
    }

    Boss::~Boss() {

    }
}