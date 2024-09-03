int* plusOne(int* digits, int digitsSize, int* returnSize) {
    *returnSize = digitsSize;
    int* result = malloc(digitsSize * sizeof(int));

    for (int i = 0; i < digitsSize; i++)
        result[i] = digits[i];
    
    result[digitsSize - 1]++;
    for (int i = digitsSize - 1; i - 1 >= 0; i--) {
        if (result[i] == 10) {
            result[i] = 0;
            result[i - 1]++;
        }
    }

    if (result[0] == 10) {
        (*returnSize)++;
        int* temp = realloc(result, *returnSize * sizeof(int));
        result = temp;
        // Shift the existing digits to make space for the new digit
        for (int i = *returnSize - 1; i > 0; i--) {
            result[i] = result[i - 1];
        }
        result[0] = 1;
        result[1] = 0;
    }
    return result;
}
