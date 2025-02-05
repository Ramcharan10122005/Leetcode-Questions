bool areAlmostEqual(char* s1, char* s2) {
    int map1[26] = {0};
    int map2[26] = {0};
    int count = 0;
    for (int i = 0; s1[i] != '\0'; i++) {
        map1[s1[i] - 'a']++;
        map2[s2[i] - 'a']++;
        if (s1[i] != s2[i])
            count++;
    }
    for (int i = 0; i < 26; i++) {
        if (map1[i] != map2[i])
            return false;
    }
    return count == 0 || count == 2;
}