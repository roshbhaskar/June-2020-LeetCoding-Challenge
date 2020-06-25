int numTrees(int n){
//using dynamic programing top down approach
    int dp[n + 1]; 
    int i,j;
    for(i=0;i<n+1;i++)
    {
        dp[i]=0;
    }
    dp[0] = 1; 
    dp[1] = 1; 
    for (i = 2; i <= n; i++) { 
        for ( j = 1; j <= i; j++) {           
            dp[i] = dp[i] + (dp[i - j] * dp[j - 1]); 
        } 
    } 
    return dp[n]; 
}