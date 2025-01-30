int minCostClimbingStairs(int* cost, int s) {
    for(int i=2;i<s;i++){
        cost[i]+=fmin(cost[i-1],cost[i-2]);
    }
    return fmin(cost[s-1],cost[s-2]);
}