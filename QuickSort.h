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


    template <typename ContainerType>
    ContainerType ordenar_particion(ContainerType primeraMitad, ContainerType segundaMitad)
    {
        auto pM = primeraMitad-1;
        for(auto comparador = primeraMitad; comparador < segundaMitad ; advance(comparador,1))
        {
            if(*comparador <= *segundaMitad)
            {
                ++pM;
                swap(*pM,*comparador);
            }
        }
        swap(*(pM+1),*segundaMitad);
        return ++pM;
    }

    template <typename ContainerType>
    void quicksort(ContainerType primeraMitad, ContainerType segundaMitad)
    {
        auto size = segundaMitad - primeraMitad;
        if (primeraMitad < segundaMitad)
        {
            if (size >= 1)
            {
                auto pivote = ordenar_particion(primeraMitad, segundaMitad);
                quicksort(primeraMitad, pivote - 1);
                quicksort(pivote + 1, segundaMitad);
            }
        }

    }
    template <typename ContainerType>
    void execute(ContainerType &cnt) {
        auto inicio = cnt.begin();
        auto fin = cnt.end();
        quicksort(inicio, fin-1);
    }



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

    template <typename ContainerType>
    void quicksort(ContainerType inicio, ContainerType fin){
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
