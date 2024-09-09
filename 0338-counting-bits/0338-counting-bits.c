#include <stdlib.h>

int* countBits(int n, int* returnSize) {
    *returnSize = n + 1;
    int count;
    int* xor = (int*)malloc((*returnSize) * sizeof(int));
    for (int i = 0; i <= n; i++) {
        int num = i;
        count = 0;
        while (num != 0) {
            if (num & 1)
                count++;
            num >>= 1;
        }
        xor[i] = count;
    }
    return xor;
}
