class Solution {
public:
    int maxSum(vector<int>& arr1, vector<int>& arr2) {
        long long i = 0, j = 0;
        long long sum1 = 0, sum2 = 0, ans = 0;
        long long MOD = 1e9 + 7; 
        while (i < arr1.size() && j < arr2.size()) {
            if (arr1[i] < arr2[j]) {
                sum1 += arr1[i];
                i++;
            } else if (arr1[i] > arr2[j]) {
                sum2 += arr2[j];
                j++;
            } else {
                ans += max(sum1, sum2);
                ans += arr1[i];  
                ans %= MOD;  
                i++;
                j++;
                sum1 = 0;
                sum2 = 0;
            }
        }

        while (i < arr1.size()) {
            sum1 += arr1[i];
            i++;
        }
        while (j < arr2.size()) {
            sum2 += arr2[j];
            j++;
        }

        ans += max(sum1, sum2);
        ans %= MOD;  
        return ans % MOD;  
    }
};
