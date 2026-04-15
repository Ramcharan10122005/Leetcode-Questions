class Solution {
public:
    int closestTarget(vector<string>& words, string target, int startIndex) {
        int clock = 0, anti = 0;
        bool found1 = false, found2 = false;
        int n = words.size();
        for (int i = 0; i < n; i++) {
            int idx = (startIndex + i) % n;
            if (words[idx] == target) {
                found1 = true;
                clock = i;
                break;
            }
        }
        for (int i = 0; i < n; i++) {
            int idx = (startIndex - i + n) % n;
            if (words[idx] == target) {
                found2 = true;
                anti = i;
                break;
            }
        }
        if (found1 && found2) {
            return min(clock, anti);
        } else if (found1)
            return clock;
        else if (found2)
            return anti;
        else
            return -1;
    }
};