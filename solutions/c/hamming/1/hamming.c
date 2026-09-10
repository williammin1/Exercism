#include "hamming.h"

int compute(const char *lhs, const char *rhs) {
    int diff = 0;
    int i = 0;
    while (lhs[i] != '\0' && rhs[i] != '\0') {
        if (lhs[i] != rhs[i])
            diff++;
        i++;
    }
    if (lhs[i] != '\0' || rhs[i] != '\0')
        return -1;
    return diff;
}