//
// Created by Carlos R. Arias on 10/5/22.
// https://github.com/csc2330-master/array-library-01


#include "array_library.h"

int LinearSearch(int array[], unsigned int size, int key){
    for (int i = 0; i < size; ++i) {
        if (array[i] == key)
            return i;
    }
    return -1;
}

int FindMax(int array[], unsigned int size){
    int max = array[0];
    for (int i = 1; i < size; ++i) {
        if (max < array[i])
            max = array[i];
    }
    return max;
}
int FindMin(int array[], unsigned int size){
    int min = array[0];
    for (int i = 1; i < size; ++i) {
        if (min > array[i])
            min = array[i];
    }
    return min;
}
double FindAverage(int array[], unsigned int size){
    double sum = 0.0;
    for (int i = 0; i < size; ++i) {
        sum += array[i];
    }
    return sum / size;
}
unsigned int MinimumPosition(int array[], unsigned int size, unsigned int startPosition){
//    unsigned minPosition = 0;
//    for (int i = startPosition; i < size; ++i) {
//        if (array[minPosition] > array[i])
//            minPosition = i;
//    }
//    return minPosition;
    int minimum = array[startPosition];
    unsigned int minimumPosition = startPosition;
    for (int i = startPosition; i < size; ++i) {
        if (minimum > array[i]){
            minimum = array[i];
            minimumPosition = i;
        }
    }
    return minimumPosition;
}

void Swap(int& a, int& b){
    int c = a;
    a = b;
    b = c;
}
void SelectionSort(int array[], unsigned int size){
    unsigned int minPos;
    for (int i = 0; i < size; ++i) {
        minPos = MinimumPosition(array, size, i);
        Swap(array[i], array[minPos]);
    }
}
double FindMedian(int array[], unsigned int size){
    if (size % 2 == 0)
        return (static_cast<double>(array[size/2]) + static_cast<double>(array[size/2]+ 1)) / 2.0;
    else
        return array[size / 2];
}
int BinarySearch(int array[], unsigned int size, int key){
    int secondaryArray[size];
    for (int i = 0; i < size; ++i) {
        secondaryArray[i] = array[i];
    }
    SelectionSort(secondaryArray, size);
    int low = 0;
    int high = size - 1;
    int mid;
    while (high >= low) {
        mid = (high + low) / 2;
        if (key < secondaryArray[mid]) {
            high = mid - 1;
        }
        else if (key > secondaryArray[mid]) {
            low = mid + 1;
        }
        else {
            return mid;
        }
    }
    return -1;
}
void PrintArray(ostream& output, int array[], unsigned int size){
    for (int i = 0; i < size; ++i) {
        output << array[i] << " ";
    }
}
void ReadArray(istream& input, int array[], unsigned int size){
    for (int i = 0; i < size; ++i) {
        input >> array[i];
    }
}


