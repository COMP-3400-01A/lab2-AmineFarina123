#include <stddef.h> // For NULL
#include <stdlib.h> // For malloc

int array_fill(int* array, int array_len, int begin, int end);

// creates a new array filled with even numbers from begin to end
int* array_create_evens(int begin, int end) {
    // if the range is impossible return NULL
    if (begin >= end) {
        return NULL;
    }

    // find the first even number that is >= begin
    int start = begin;
    if (start % 2 != 0) {
        start++;
    }

    // if the first even is already past end, return NULL
    if (start > end) {
        return NULL;
    }

    // count how many even numbers are in the range
    int count = 0;
    int num = start;
    while (num <= end) {
        count++;
        num += 2;
    }

    // allocate the array
    int* arr = malloc(sizeof(int) * count);

    // fill in the even numbers manually
    for (int i = 0; i < count; i++) {
        arr[i] = start + i * 2;
    }

    return arr;
}
