int findMaxConsecutiveOnes(int* n, int s) {
    int max=0;
    int count=0;
    for(int i=0;i<s;i++){
        if(n[i]==1)
        count++;
        if(n[i]!=1)
        count=0;
        if(max<count)
        max=count;
    }
    return max;
}