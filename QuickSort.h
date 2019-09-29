//
// Created by lica-pc on 9/27/19.
//
#ifndef SORTMETHODS_QUICKSORT_H
#define SORTMETHODS_QUICKSORT_H

#include <vector>
#include <iterator>
#include <iostream>
#include <string>
#include "Sort.h"

struct QuickSort:Sort{

    /*
    template <typename Type>
    Type ordenar_particion(Type inicio, Type fin){

        for (auto comparador = inicio; comparador <fin; comparador++){
            if (comparador <fin){
                swap(inicio, comparador);
                inicio++;
            }
        }
        swap(inicio, fin);
        return inicio;
    }

    template <typename Type>
    void quicksort(Type inicio, Type fin){
        if (inicio < fin){
            auto pivote = ordenar_particion(inicio, fin);
            quicksort(inicio,pivote - 1);
            quicksort( pivote + 1, fin);
        }
    }

    template <typename ContainerType>
    void execute(ContainerType cnt){
        auto inicio = cnt.begin();
        auto fin = cnt.end();
        quicksort(inicio, fin-1);
    }

    */

    template <typename ContainerType>
    void print(ContainerType cnt){
        Sort::print(cnt);
    }



};



#endif //SORTMETHODS_QUICKSORT_H
