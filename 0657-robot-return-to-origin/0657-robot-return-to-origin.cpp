class Solution {
public:
    bool judgeCircle(string moves) {
        int up = 0, right = 0;
        for (int i = 0; i < moves.length(); i++) {
            if (moves[i] == 'U')
                up++;
            else if (moves[i] == 'D')
                up--;
            else if (moves[i] == 'R')
                right++;
            else
                right--;
        }
        if (up == 0 && right == 0)
            return true;
        return false;
    }
};