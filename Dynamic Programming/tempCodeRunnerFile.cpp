bool dp[n+1][sum+1];
    for(int i=0;i<=sum;i++)
        dp[0][i] = false;
    
    for(int i=0;i<=n;i++)
        dp[i][0] = true;

    for(int i=1;i<n+1;i++){
        for(int j=1;j<sum+1;j++){ 
            if(arr[i-1] <= j)
            dp[i][j] = dp[i-1][j-arr[i-1]] || dp[i-1][j];

            else
            dp[i][j] = dp[i-1][j];
        }
    }

    vector<bool> ans;
    for(int i=0;i<sum+1;i++)
        ans.push_back(dp[n][i]);
    return ans;