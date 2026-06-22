#include <stddef.h> // For NULL
#include <stdbool.h> // For true/false
#include <ctype.h>

// checks if a password follows all the rules
bool valid_password(const char* s) {
    // if the string is NULL its definitely not valid
    if (s == NULL) {
        return false;
    }

    int length = 0;
    int upper_count = 0;
    int lower_count = 0;

    // find the length by counting until null terminator
    while (s[length] != '\0') {
        length++;
    }

    // password must be between 6 and 10 characters
    if (length < 6 || length > 10) {
        return false;
    }

    // check every character in the password
    for (int i = 0; i < length; i++) {
        char c = s[i];

        if (isupper(c)) {
            upper_count++;
        } else if (islower(c)) {
            lower_count++;
        } else if (isdigit(c)) {
            // digits are allowed so do nothing
        } else {
            // any other character is not allowed
            return false;
        }
    }

    // need at least 2 uppercase AND at least 2 lowercase
    if (upper_count < 2 || lower_count < 2) {
        return false;
    }

    return true;
}
