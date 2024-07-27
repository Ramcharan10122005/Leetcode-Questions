bool isAcronym(char** w, int s, char* a) {
    char* temp = malloc((s + 1) * sizeof(char));
    for (int i = 0; i < s; i++) {
        temp[i] = w[i][0];
    }
    temp[s] = '\0';
    if (!strcmp(temp, a))
        return true;
    return false;
}
