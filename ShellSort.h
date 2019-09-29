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

    template <typename Container>
    void shellSort(Container &cnt)
    {
        auto inicio = cnt.begin();
        auto fin = cnt.end();
        auto size = fin - inicio;

        for(int i = size/2; i > 0; i /= 2)
        {
            for(int j = i; j < size; j++)
            {
                auto temp = *(cnt.begin() + j);
                int k;
                for(k = j; k >= i && *(cnt.begin()+k-i) > temp; k-=i)
                {
                    int x = j - i;
                    *(cnt.begin()+k) = *(cnt.begin()+x);
                }
                *(cnt.begin()+k) = temp;
            }
        }

    }


    template<typename ContainerType>
    void print(ContainerType cnt) {
        Sort::print(cnt);
    }



};

#endif //SORTMETHODS_SHELLSORT_H
