//
// Created by rootusr on 3/19/20.
//

#ifndef CPP_PROJECTS_EMPLOYEE_H
#define CPP_PROJECTS_EMPLOYEE_H

#include <iostream>
#include <cstring>

namespace emp {
    bool validateEmployeeData(char*, char*, char*, char*, int, int, int);
    class Employee {
    private:
        char* idNumber;
        char* fullName;
        char* phoneNumber;
        char* email;
        int age;
        int salary;
        int workingHours;

    public:
        Employee();
        Employee(char*, char*, char*, char*, int, int, int);

        char* getIdNumber() const;
        char* getFullName() const;
        char* getPhoneNumber() const;
        char* getEmail() const;
        int getAge() const;
        int getSalary() const;
        int getWorkingHours() const;

        void setIdNumber(char*);
        void setFullName(char*);
        void setPhoneNumber(char*);
        void setEmail(char*);
        void setAge(int);
        void setSalary(int);
        void setWorkingHours(int);

        virtual double getSalary();

        void setEmptyState();
        bool isEmpty() const;

        ~Employee();
    };
}

#endif //CPP_PROJECTS_EMPLOYEE_H