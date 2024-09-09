bool isSubsequence(char* s, char* t) {
    int len1 = strlen(s), len2 = strlen(t), i = 0, j = 0;
    while (j < len2 && i < len1) {
        if (s[i] == t[j]) {
            i++;
        }
        j++;
    }
    return i == len1;
}