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
unsigned int MinimumPosition(int array[], unsigned int size, unsigned int startPosition = 0){
//    unsigned minPosition = 0;
//    for (int i = startPosition; i < size; ++i) {
//        if (array[minPosition] > array[i])
//            minPosition = i;
//    }
//    return minPosition;
    int minimum = array[0];
    unsigned int minimumPosition = startPosition;
    for (int i = startPosition; i < size; ++i) {
        if (minimum > array[i]){
            minimum = array[i];
            minimumPosition = i;
        }
    }
    return minimumPosition;
}
void SelectionSort(int array[], unsigned int size){

}
double FindMedian(int array[], unsigned int size){
    SelectionSort(array, size);
    if (size % 2 == 0)
        return (static_cast<double>(array[size/2]) + static_cast<double>(array[size/2]+ 1)) / 2.0;
    else
        return array[size / 2];
}
int BinarySearch(int array[], unsigned int size, int key){
    // Someday...
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



