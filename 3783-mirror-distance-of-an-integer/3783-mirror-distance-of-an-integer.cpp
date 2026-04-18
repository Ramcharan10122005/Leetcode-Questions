class Solution {
public:
    int reverseInteger(int& n) {
        int reversedNum = 0;
        while (n != 0) {
            int remainder = n % 10; 
            reversedNum = reversedNum * 10 + remainder; 
            n /= 10;                                    
        }
        return reversedNum;
    }
    int mirrorDistance(int n) {
        return abs(n-reverseInteger(n));
    }
};