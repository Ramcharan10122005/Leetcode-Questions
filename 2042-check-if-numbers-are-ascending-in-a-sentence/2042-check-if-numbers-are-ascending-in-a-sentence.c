bool areNumbersAscending(char* s) {
    char* token = strtok(s, " ");
    int prev = -1;
    int curr;
    while (token != NULL) {
        if (isdigit(token[0])) {
            curr = atoi(token);
            if (curr <= prev) {
                return false;
            }
            prev = curr;
        }
        token = strtok(NULL, " ");
    }

    return true;
}