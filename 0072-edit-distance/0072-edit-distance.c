#define MIN(a, b) ((a) < (b) ? (a) : (b))

int minDistance(char* word1, char* word2) {
    int m = strlen(word1);
    int n = strlen(word2);
    int dp[m + 1][n + 1];
    
    for (int i = 0; i <= m; ++i)
        dp[i][0] = i;
    for (int j = 0; j <= n; ++j)
        dp[0][j] = j;
    
    for (int i = 1; i <= m; ++i) {
        for (int j = 1; j <= n; ++j) {
            if (word1[i - 1] == word2[j - 1])
                dp[i][j] = dp[i - 1][j - 1];
            else
                dp[i][j] = 1 + MIN(MIN(dp[i][j - 1], dp[i - 1][j]), dp[i - 1][j - 1]);
        }
    }
    
    return dp[m][n];
}




