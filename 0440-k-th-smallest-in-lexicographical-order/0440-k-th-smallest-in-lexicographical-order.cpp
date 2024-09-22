class Solution {
public:

   int steps(int n ,long n1 , long n2) {
    int cnt = 0;
    while(n1 <= n) {
        cnt += min((long) n+1, n2) - n1;
        n2 *=10;
        n1 *=10;
    }
    return cnt;
   }
    int findKthNumber(int n, int k) {
        // To solve the problem in 10^8 we need to define a range to get a logrithmic solution

        int curr = 1;
        k = k-1;

        while(k > 0) {
            // getting the number exits between curr and curr +1 in lexiographical order
            int cnt = steps(n, curr , curr+1);
            // cnt <= k it means that there exits only one number
            if(cnt <=k) {
                k -= cnt;
                curr++;
                //there are more than one number exitings
            }else {
              k--;
              curr *=10;
            } 
        }
        return curr;
    }
};