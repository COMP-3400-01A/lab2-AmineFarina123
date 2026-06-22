#include <stddef.h> // For NULL
#include <stdlib.h> // For malloc
#include <ctype.h>  // For toupper

// returns a new string that is the same as s but with all lowercase letters uppercased
char* capitalize(const char* s) {
    // if NULL is passed in just return NULL
    if (s == NULL) {
        return NULL;
    }

    // find the length of the input string
    int len = 0;
    while (s[len] != '\0') {
        len++;
    }

    // allocate a new string (need len + 1 for the null terminator)
    char* result = malloc(sizeof(char) * (len + 1));

    // copy each character and uppercase it if its lowercase
    for (int i = 0; i < len; i++) {
        result[i] = toupper(s[i]);
    }

    // add null terminator at the end
    result[len] = '\0';

    return result;
}
