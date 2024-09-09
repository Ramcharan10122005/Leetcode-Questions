int result[100];

int tribonacci(int n){
    if(n==0)
    return 0;
    else if(n==1||n==2)
    return 1;
    else if(result[n]!=0)
    return result[n];
    else{
        result[n]=tribonacci(n-1)+tribonacci(n-2)+tribonacci(n-3);
        return result[n];
    }
}