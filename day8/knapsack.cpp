#include <bits/stdc++.h>
using namespace std;

int help(int ind,int w,int *wt,int *val,vector<vector<int>>&dp){
if(ind==0) {
if(wt[0]<=w) return val[0];
return 0;
}
if(dp[ind][w] !=-1) return dp[ind][w];
int nottake=0+help(ind-1,w,wt,val,dp);
int take=INT_MIN;
if(wt[ind]<=w) take=val[ind]+help(ind-1,w-wt[ind],wt,val,dp);
return dp[ind][w] =max(take,nottake);
}
int knapsack(int* weight, int* value, int n, int maxWeight) {
vector<vector<int>> dp(n,vector<int>(maxWeight+1,-1));
return help(n-1,maxWeight,weight,value,dp);
}
int main() {
    int n;
    cin >> n;
    int* wt = new int[n];
    int* val = new int[n];
    for (int i = 0; i < n; i++) {
        cin >> wt[i];
    }
    for (int j = 0; j < n; j++) {
        cin >> val[j];
    }
    int w;cin >> w;
    cout << knapsack(wt, val, n, w) << endl;
}