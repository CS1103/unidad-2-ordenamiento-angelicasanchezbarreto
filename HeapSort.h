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
    void heapsort(ContainerType &cnt){
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
    template<typename ContainerType>
    void heapsort(ContainerType cnt, int size) {
        buildheap(cnt, size);
        //int size = cnt.size();
        for (int i = size; i > 0; i--) {
            swap(cnt.at(0), cnt.at(i - 1));
            heapify(cnt, 0, i - 1);
        }
    }

    template<typename ContainerType>
    void buildheap(ContainerType cnt, int size) {
        //int size = cnt.size();
        for (int i = (size / 2) - 1; i > 0; i--) {
            heapify(cnt, i, size - 1);
        }
    }

    template<typename ContainerType>
    void heapify(ContainerType cnt, int it, int j) {
        int k;
        if (2 * it + 1 > j) return;
        if (2 * it + 2 > j)
            k = 2 * it + 1;
        else if (cnt.at(2 * it + 1) > cnt.at(2 * it + 2))
            k = 2 * it + 1;
        else
            k = 2 * it + 2;
        if (cnt.at(it) < cnt.at(k)) {
            swap(cnt.at(it), cnt.at(k));
            heapify(cnt, k, j);
        }
    }

    template<typename ContainerType>
    void print(ContainerType cnt) {
        for (int i : cnt) {
            cout << i << " ";
        }

    }

     */
};


#endif //SORTMETHODS_HEAP_SORT_H
