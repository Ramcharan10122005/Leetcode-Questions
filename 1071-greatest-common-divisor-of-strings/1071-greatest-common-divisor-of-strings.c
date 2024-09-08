char* gcdOfStrings(char* str1, char* str2) {
    int pointer = 0;
    while (str1[pointer] != '\0' && str2[pointer] != '\0') {
        if (str1[pointer] == str2[pointer]) {
            pointer++;
        } else {
            return "";
        }
    }
    if (str1[pointer] == '\0' && str2[pointer] == '\0') {
        return str1;
    } else {
        if (str1[pointer] == '\0') {
            return gcdOfStrings(str1, str2 + pointer);
        } else {
            return gcdOfStrings(str1 + pointer, str2);
        }
    }
}