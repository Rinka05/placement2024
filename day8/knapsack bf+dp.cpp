#include <bits/stdc++.h>
using namespace std;

 int solve(int ind , int w , vector<int>&wt , vector<int>&val, vector<vector<int>>&dp){
    if(ind == 0){
        if(wt[0] < w)return val[0];
        else return 0;
    }
    if(dp[ind][w] != -1)return dp[ind][w];
    int ntake = 0+solve(ind-1 , w , wt , val, dp);
    int take = INT_MIN;
     if(wt[ind] <= w){
             take = val[ind]+solve(ind-1 , w-wt[ind], wt , val, dp);
     }
     return dp[ind][w] =  max(take , ntake);
 }

int main(){
    int n ; cin >> n ;
    int w ; cin >> w;
    vector<int>wt;
    for(int i = 0 ; i < n ; i++){
        int x ; cin >> x;
        wt.push_back(x);
    }
    vector<int>val;
    for(int i =0 ; i < n ; i++){
        int x ; cin >> x;
        val.push_back(x);
    }
    // vector<vector<int>>dp(n, vector<int>(w+1 , -1));
    // cout << solve(n-1 , w , wt , val, dp) << endl;
    
    vector<vector<int>>dp(n , vector<int>(w+1 , 0));
    for(int i = wt[0]; i <= w ; i++ ){
        dp[0][i] = val[0];
    }
    for(int i = 1 ; i < n ; i++){
        for(int j = 0 ; j <= w ; j++){
            int ntake = 0+dp[i-1][j];
            int take = INT_MIN;
            if(wt[i] <= w){
              take = val[i]+dp[i-1][w-wt[i]];
            }
            dp[i][w] = max(take , ntake);
        }
    }
    cout << dp[n-1][w] << endl;

}

