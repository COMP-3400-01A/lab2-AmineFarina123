#include <stddef.h> // For NULL

// this function fills the array with numbers from begin to end
// it stops early if the array runs out of space
int array_fill(int* array, int array_len, int begin, int end) {
    // if array is null or has no space return 0
    if (array == NULL || array_len == 0) {
        return 0;
    }

    // if begin is bigger than end theres nothing to fill
    if (begin > end) {
        return 0;
    }

    int count = 0;
    int num = begin;

    // loop and fill until we reach the end or run out of space
    while (num <= end && count < array_len) {
        array[count] = num;
        num++;
        count++;
    }

    return count;
}
