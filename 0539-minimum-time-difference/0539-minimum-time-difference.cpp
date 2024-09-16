class Solution {
public:
    int findMinDifference(vector<string>& timePoints) {
        vector<int> minutes;

        for (const string time : timePoints) {
            int hours = stoi(time.substr(0, 2));
            int mins = stoi(time.substr(3, 2));
            minutes.push_back(hours * 60 + mins);
        }

        sort(minutes.begin(), minutes.end());
        int minDifference = INT_MAX;

        for (int i{1}; i < minutes.size(); i += 1) {
            minDifference = min(minDifference, minutes[i] - minutes[i - 1]);
        }

        int wrapAroundDifference = 1440 - (minutes.back() - minutes.front());
        minDifference = min(minDifference, wrapAroundDifference);

        return minDifference;
    }
};