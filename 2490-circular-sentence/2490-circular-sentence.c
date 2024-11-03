bool isCircularSentence(char* sen) {
    int s = strlen(sen);
    if (sen[0] != sen[s - 1])
        return false;
    for (int i = 0; sen[i]; i++) {
        if (sen[i] == ' ') {
            if (sen[i - 1] != sen[i + 1])
                return false;
        }
    }
    return true;
}