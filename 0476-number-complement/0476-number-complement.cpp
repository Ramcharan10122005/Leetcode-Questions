class Solution {
public:
    int findComplement(int n) {
        if (n == 0)
            return 1;
        long long ans = 0, place = 1;
        while (n) {
            int bit = n % 2;
            ans += ((bit ^ 1) * place);
            place *= 2;
            n /= 2;
        }
        return ans;
    }
};