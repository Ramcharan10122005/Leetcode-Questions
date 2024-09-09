#include <stdbool.h>

bool canPlaceFlowers(int* f, int s, int n) {
    int i = 0;
    while (i < s) {
        if (f[i] == 0 && (i == 0 || f[i - 1] == 0) &&
            (i == s - 1 || f[i + 1] == 0)) {
            n--;
            f[i] = 1;
        }
        i++;
    }
    return n <= 0;
}
