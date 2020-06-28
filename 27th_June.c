#include<math.h>

int min(int x,int y)
{
    if(x>y){
        return y;
    }
    return x;
}
int numSquares(int n){
    if(n<=3){
        return n;
    }
    int dp[n + 1]; 
    dp[0] = 0; 
    dp[1] = 1; 
    dp[2] = 2; 
    dp[3] = 3; 
    int i,j,var;
    
    for (i = 4; i <= n; i++) { 
        dp[i] = i; 
  
        for ( var = 1; var <= ceil(sqrt(i)); var++) { 
            int temp = var * var; 
            if (temp > i) 
                break; 
            else
                dp[i] = min(dp[i], 1 + dp[i - temp]); 
        } 
    } 
  
    return dp[n]; 
    
}