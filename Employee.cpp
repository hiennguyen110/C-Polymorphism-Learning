//
// Created by rootusr on 3/19/20.
//

#include "Employee.h"

using namespace std;

namespace emp {
    bool validateEmployeeData(char *usrIdNumber, char *usrFullName, char * usrPhoneNumber, char * usrEmail, int usrAge, int usrSalary, int usrWorkingHours) {
        if (usrIdNumber != nullptr && strlen(usrIdNumber) > 0) {
            if (usrFullName != nullptr && strlen(usrFullName) > 0) {
                if (usrPhoneNumber != nullptr && strlen(usrPhoneNumber) > 0) {
                    if (usrEmail != nullptr && strlen(usrEmail) > 0) {
                        if (usrAge >= 0) {
                            if (usrSalary >= 0) {
                                if (usrWorkingHours >= 0) {
                                    return true;
                                }
                            }
                        }
                    }
                }
            }
        }
        return false;
    }

    Employee::Employee() {
        idNumber = nullptr;
        fullName = nullptr;
        phoneNumber = nullptr;
        email = nullptr;
        age = 0;
        salary = 0;
        workingHours = 0;
    }

    Employee::Employee(char *usrIdNumber, char *usrFullName, char * usrPhoneNumber, char * usrEmail, int usrAge, int usrSalary, int usrWorkingHours) {
        if (validateEmployeeData(usrIdNumber, usrFullName, usrPhoneNumber, usrEmail, usrAge, usrSalary, usrWorkingHours)) {
            setIdNumber(usrIdNumber);
            setFullName(usrFullName);
            setPhoneNumber(usrPhoneNumber);
            setEmail(usrEmail);
            setAge(usrAge);
            setSalary(usrSalary);
            setWorkingHours(usrWorkingHours);
        } else {
            idNumber = nullptr;
            fullName = nullptr;
            phoneNumber = nullptr;
            email = nullptr;
            age = 0;
            salary = 0;
            workingHours = 0;
        }
    }

    char* Employee::getIdNumber() const {
        return idNumber;
    }

    char * Employee::getFullName() const {
        return fullName;
    }

    char * Employee::getPhoneNumber() const {
        return phoneNumber;
    }

    char * Employee::getEmail() const {
        return email;
    }

    int Employee::getAge() const {
        return age;
    }

    int Employee::getSalary() const {
        return salary;
    }

    int Employee::getWorkingHours() const {
        return workingHours;
    }

    void Employee::setIdNumber(char *usrIdNumber) {
        idNumber = new char[strlen(usrIdNumber) + 1];
        strcpy(idNumber, usrIdNumber);
    }

    void Employee::setFullName(char *usrFullName) {
        fullName = new char[strlen(usrFullName) + 1];
        strcpy(fullName, usrFullName);
    }

    void Employee::setPhoneNumber(char *usrPhoneNumber) {
        phoneNumber = new char[strlen(usrPhoneNumber) + 1];
        strcpy(phoneNumber, usrPhoneNumber);
    }

    void Employee::setEmail(char *usrEmail) {
        email = new char[strlen(usrEmail) + 1];
        strcpy(email, usrEmail);
    }

    void Employee::setAge(int usrAge) {
        age = usrAge;
    }

    void Employee::setSalary(int usrSalary) {
        salary = usrSalary;
    }

    void Employee::setWorkingHours(int usrWorkingHours) {
        workingHours = usrWorkingHours;
    }

    double Employee::getSalary() {
        return salary * workingHours;
    }

    void Employee::setEmptyState() {
        delete[] idNumber;
        idNumber = nullptr;

        delete [] fullName;
        fullName = nullptr;

        delete [] phoneNumber;
        phoneNumber = nullptr;

        delete[] email;
        email = nullptr;

        age = 0;
        salary = 0;
        workingHours = 0;
    }

    bool Employee::isEmpty() const {
        if (idNumber == nullptr) {
            if (fullName == nullptr) {
                if (phoneNumber == nullptr) {
                    if (email == nullptr) {
                        if (age == 0) {
                            if (salary == 0) {
                                if (workingHours == 0) {
                                    return true;
                                }
                            }
                        }
                    }
                }
            }
        }
        return false;
    }

    Employee::~Employee() {
        setEmptyState();
    }
}