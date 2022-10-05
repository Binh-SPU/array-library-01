#include <iostream>
#include <cassert>

#include "array_library.h"

using std::cout;
using std::cin;
using std::endl;

int main() {
    int data[] = {7, 4, 1, 9, 0, 11, 21, 3, 8, 5};
    // Average 6.9
    // Sorted: 0 1 3 4 5 7 8 9 11 21
    // Median 6

    const unsigned int SIZE = sizeof(data) / sizeof (data[0]);

    assert(LinearSearch(data, SIZE, 7) == 0);
    assert(LinearSearch(data, SIZE, 4) == 1);
    assert(LinearSearch(data, SIZE, 1) == 2);
    assert(LinearSearch(data, SIZE, 9) == 3);
    assert(LinearSearch(data, SIZE, 0) == 4);
    assert(LinearSearch(data, SIZE, 11) == 5);
    assert(LinearSearch(data, SIZE, 21) == 6);
    assert(LinearSearch(data, SIZE, 3) == 7);
    assert(LinearSearch(data, SIZE, 8) == 8);
    assert(LinearSearch(data, SIZE, 5) == 9);

    assert(LinearSearch(data, SIZE, 10) == -1);

    assert(FindMin(data, SIZE) == 0);
    assert(FindMax(data, SIZE) == 21);

    assert(FindAverage(data, SIZE) - 6.9 < 0.000001);

    return 0;
}
