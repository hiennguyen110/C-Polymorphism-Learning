//
// Created by rootusr on 3/19/20.
//

#ifndef CPP_PROJECTS_BOSS_H
#define CPP_PROJECTS_BOSS_H

#include "Employee.h"

namespace emp {
    class Boss : public Employee{
    public:
        Boss(char*, char*, char*, char*, int, int, int);
        double getSalary();
        ~Boss();
    };
}

#endif //CPP_PROJECTS_BOSS_H
