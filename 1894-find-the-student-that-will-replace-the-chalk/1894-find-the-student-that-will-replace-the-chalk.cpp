class Solution {
public:
    int chalkReplacer(vector<int>& chalk, int k) {
        int n = chalk.size();
        vector<long long> sum(n);

        sum[0] = chalk[0];
        for (int i = 1; i < n; i++) {
            sum[i] = sum[i - 1] + chalk[i];
        }

        k %= sum[n - 1];

        int left = 0, right = n - 1;
        while (left < right) {
            int mid = left + (right - left) / 2;
            if (sum[mid] > k) {
                right = mid;
            } else {
                left = mid + 1;
            }
        }

        return left;
    }
};
