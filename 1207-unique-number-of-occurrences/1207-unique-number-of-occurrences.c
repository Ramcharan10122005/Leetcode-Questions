bool uniqueOccurrences(int* a, int s) {
    int* freq = (int*)calloc(2001, sizeof(int));
    for (int i = 0; i < s; i++) {
        freq[a[i] + 1000]++;
    }
    bool occurrences[2001] = {false};
    for (int i = 0; i < 2001; i++) {
        if (freq[i] != 0) {
            if (occurrences[freq[i]]) {
                return false;
            }
            occurrences[freq[i]] = true;
        }
    }
    return true;
}
