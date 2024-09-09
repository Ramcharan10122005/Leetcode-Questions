void moveZeroes(int* n, int s) {
    int nonZeroPos = 0;
    for (int i = 0; i < s; i++) {
        if (n[i] != 0) {
            if (i != nonZeroPos) {
                int temp = n[i];
                n[i] = n[nonZeroPos];
                n[nonZeroPos] = temp;
            }
            nonZeroPos++;
        }
    }
}