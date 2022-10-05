#include <iostream>

#include "array_library.h"

using std::cout;
using std::cin;
using std::endl;

int main() {
    int data[] = {7, 4, 1, 9, 0, 11, 21, 3, 8, 5};
    const unsigned int SIZE = sizeof(data) / sizeof (data[0]);

    int position = LinearSearch(data, SIZE, 8);
    cout << "8 found in position " << position << endl;

    return 0;
}
