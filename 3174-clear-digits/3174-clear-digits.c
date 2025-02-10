char* clearDigits(char* s) {
    int len = strlen(s);
    char* result = (char*)malloc((len + 1) * sizeof(char));
    strcpy(result, s);

    while (1) {
        int digitIndex = -1;
        int leftNonDigitIndex = -1;

        for (int i = 0; result[i] != '\0'; i++) {
            if (isdigit(result[i])) {
                digitIndex = i;
                break;
            }
        }

        if (digitIndex == -1) {
            break;
        }

        for (int i = digitIndex - 1; i >= 0; i--) {
            if (!isdigit(result[i])) {
                leftNonDigitIndex = i;
                break;
            }
        }

        int newLen = strlen(result) - ((leftNonDigitIndex != -1) ? 2 : 1);
        char* temp = (char*)malloc((newLen + 1) * sizeof(char));
        int index = 0;
        for (int i = 0; result[i] != '\0'; i++) {
            if (i == digitIndex || i == leftNonDigitIndex) {
                continue;
            }
            temp[index++] = result[i];
        }
        temp[index] = '\0';

        free(result);
        result = temp;
    }

    return result;
}
