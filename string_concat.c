#include <stddef.h> // For NULL

// adds src2 to the end of src1
// src1_cap is the total size of the src1 buffer
void string_concat(char* src1, int src1_cap, const char* src2) {
    // if either string is null we cant do anything
    if (src1 == NULL || src2 == NULL) {
        return;
    }

    // first find where src1 currently ends
    int end = 0;
    while (src1[end] != '\0') {
        end++;
    }

    // now copy src2 into src1 starting from where src1 ended
    // but stop if we run out of space (need room for '\0')
    int i = 0;
    while (src2[i] != '\0' && (end + i) < src1_cap - 1) {
        src1[end + i] = src2[i];
        i++;
    }

    // make sure we null terminate
    src1[end + i] = '\0';
}
