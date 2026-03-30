class Solution {
public:
    bool checkStrings(string s1, string s2) {
        int n = s1.length();
        vector<int> oddhash(26, 0);
        vector<int> evenhash(26, 0);
        for (int i = 0; i < n; i += 2) {
            oddhash[s1[i] - 'a']++;
        }
        for (int i = 1; i < n; i += 2) {
            evenhash[s1[i] - 'a']++;
        }
        for (int i = 0; i < n; i += 2) {
            oddhash[s2[i] - 'a']--;
        }
        for (int i = 1; i < n; i += 2) {
            evenhash[s2[i] - 'a']--;
        }
        for (int i = 0; i < 26; i++) {
            if (oddhash[i] != 0 || evenhash[i] != 0)
                return false;
        }
        return true;
    }
};