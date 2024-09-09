int pivotIndex(int* n, int s) {
    int total = 0, left = 0;
    for (int i = 0; i < s; i++) {
        total += n[i];
    }
    for (int i = 0; i < s; i++) {
        int right = total - left - n[i];
        if (left == right) {
            return i;
            break;
        }
        left += n[i];
    }
    return -1;
}