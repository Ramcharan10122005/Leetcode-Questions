int countOccurrences(char** words, int size, char* word) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (strcmp(words[i], word) == 0) {
            count++;
        }
    }
    return count;
}

int countWords(char** words1, int s1, char** words2, int s2) {
    int ans = 0;
    for (int i = 0; i < s1; i++) {
        int count1 = countOccurrences(words1, s1, words1[i]);
        int count2 = countOccurrences(words2, s2, words1[i]);
        if (count1 == 1 && count2 == 1) {
            ans++;
        }
    }

    return ans;
}