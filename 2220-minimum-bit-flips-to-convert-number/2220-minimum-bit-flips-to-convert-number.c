int minBitFlips(int start, int goal) {
    int xorBits = start ^ goal;
    int count = 0;
    while (xorBits > 0) {
        count += xorBits & 1;
        xorBits >>= 1;
    }
    return count;
}
