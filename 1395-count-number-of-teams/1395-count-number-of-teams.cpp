class Solution {
public:
    int numTeams(vector<int>& rating) {
        int n = rating.size();
        int ans = 0;
        for (int i = 1; i < n - 1; i++) {
            int largerLeft = 0, largerRight = 0, smallerLeft = 0,
                smallerRight = 0;
            int middle = rating[i];
            for (int j = 0; j <= i; j++) {
                if (rating[j] < middle)
                    smallerLeft++;
                else if (rating[j] > middle)
                    largerLeft++;
            }
            for (int j = i + 1; j < n; j++) {
                if (rating[j] < middle)
                    smallerRight++;
                else if (rating[j] > middle)
                    largerRight++;
            }
            ans += (smallerLeft * largerRight) + (largerLeft * smallerRight);
        }
        return ans;
    }
};