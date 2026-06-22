#include <stddef.h> // For NULL

// fills the dest string with the character c
// leaves the last spot for the null terminator
void string_fill(char dest[], int dest_cap, char c) {
    // if dest is NULL we do nothing
    if (dest == NULL) {
        return;
    }

    // if theres no space at all just return
    if (dest_cap <= 0) {
        return;
    }

    // fill characters up to dest_cap - 1 to leave room for '\0'
    int i = 0;
    while (i < dest_cap - 1) {
        dest[i] = c;
        i++;
    }

    // put the null terminator at the end
    dest[dest_cap - 1] = '\0';
}
