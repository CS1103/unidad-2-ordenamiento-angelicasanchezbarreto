//
// Created by lica-pc on 9/27/19.
//

#ifndef SORTMETHODS_MERGESORT_H
#define SORTMETHODS_MERGESORT_H

#include <vector>
#include <iterator>
#include <iostream>
#include <string>
#include "Sort.h"

struct MergeSort:Sort{


    template <typename ContainerType>
    void print(ContainerType cnt){
        Sort::print(cnt);
    }


};



#endif //SORTMETHODS_MERGESORT_H
