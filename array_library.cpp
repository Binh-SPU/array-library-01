//
// Created by Carlos R. Arias on 10/5/22.
//


#include "array_library.h"

int LinearSearch(int array[], unsigned int size, int key){
    for (int i = 0; i < size; ++i) {
        if (array[i] == key)
            return i;
    }
    return -1;
}


