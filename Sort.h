//
// Created by rudri on 9/17/2019.
//

#ifndef SORT_METHODS_SORT_H
#define SORT_METHODS_SORT_H

#include <iostream>

using namespace std;

struct Sort {

    template<typename ContainerType>
    void print(ContainerType &cnt) {
        for (auto i : cnt) {
            cout << i << " ";
        }
    }
};


#endif //SORT_METHODS_SORT_H
