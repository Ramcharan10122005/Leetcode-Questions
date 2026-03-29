class Solution {
public:
    bool canBeEqual(string s1, string s2) {
        if (s1 == s2)
            return true;
        string t1, t2, t3;
        t1 = s1, t2 = s1, t3 = s1;
        char temp1, temp2;
        temp1 = t1[0];
        t1[0] = t1[2];
        t1[2] = temp1;
        if (t1 == s2)
            return true;
        temp1 = t2[1];
        t2[1] = t2[3];
        t2[3] = temp1;
        if (t2 == s2)
            return true;
        temp1 = t3[0];
        temp2 = t3[1];
        t3[0] = t3[2];
        t3[2] = temp1;
        t3[1] = t3[3];
        t3[3] = temp2;
        if (t3 == s2)
            return true;

        return false;
    }
};