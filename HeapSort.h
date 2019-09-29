//
// Created by lica-pc on 9/27/19.
//

#ifndef SORTMETHODS_HEAP_SORT_H
#define SORTMETHODS_HEAP_SORT_H


#include <vector>
#include <iterator>
#include <iostream>
#include <string>
#include "Sort.h"
#include "CountryTrade.h"

using namespace std;

struct HeapSort:Sort {

        template<typename ContainerType>
        void heap(ContainerType &cnt, int size, int root)
        {

            int mayor = root;
            int l = 2*root + 1;
            int r = 2*root + 2;
            if (l < size && cnt.at(l) > cnt.at(mayor))
                mayor = l;
            if (r < size && cnt.at(r) > cnt.at(mayor))
                mayor = r;
            if (mayor != root)
            {
                swap(cnt.at(root), cnt.at(mayor));
                heap(cnt, size, mayor);
            }

        }

        template <typename ContainerType>
        void heapsort(ContainerType &cnt)
        {
            int size = cnt.size();
            for (int i = size / 2 - 1; i >= 0; i--)
                heap(cnt, size, i);

            for (int i=size-1; i>=0; i--)
            {
                swap(cnt.at(0), cnt.at(i));
                heap(cnt, i, 0);
            }

        }


    template <typename ContainerType>
    void print(ContainerType cnt){
        Sort::print(cnt);
    }

    /*
    template<typename ContainerType, typename T>
    void heap(ContainerType &cnt, T begin, T end, int size, int root, int col)
    {
        auto *pbegin = (CountryTrade *) *begin;
        auto *pend = (CountryTrade *) *(end-1);
        if(col==1) {
            int mayor = root;
            int l = 2 * root + 1;
            int r = 2 * root + 2;
            auto *uno = (CountryTrade*) *(begin+1);
            auto *dos = (CountryTrade*) *(begin+mayor);
            if (l < size && uno->Year > dos->Year)
                mayor = l;

            auto *tres = (CountryTrade*) *(begin+r);
            if (r < size && tres->Country_Area > dos->Country_Area)
                mayor = r;

            if (mayor != root) {
                swap(cnt.at(root), cnt.at(mayor));
                heap(cnt, begin, end, size, mayor, col);
            }
        }

    }

    template <typename ContainerType, typename T>
    void heapsort(ContainerType &cnt, T begin, T end, int col)
    {

        if(col==1) {
            int size = cnt.size();
            for (int i = size / 2 - 1; i >= 0; i--)
                heap(cnt, begin, end, size, i, col);

            for (int i = size - 1; i >= 0; i--) {
                swap(cnt.at(0), cnt.at(i));
                heap(cnt, begin, end, i, 0, col);
            }

        }
    }

    */


};


#endif //SORTMETHODS_HEAP_SORT_H
