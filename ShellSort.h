//
// Created by lica-pc on 9/27/19.
//

#ifndef SORTMETHODS_SHELLSORT_H
#define SORTMETHODS_SHELLSORT_H

#include <vector>
#include <iterator>
#include <iostream>
#include <string>
#include "Sort.h"

struct ShellSort:Sort{

    template<typename ContainerType>
    void print(ContainerType cnt) {
        Sort::print(cnt);
    }



};

#endif //SORTMETHODS_SHELLSORT_H
