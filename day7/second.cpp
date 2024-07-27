#include <bits/stdc++.h>
using namespace std;
int dr[4] = {-1 , 1 , 0 , 0};
int dc[4] = {0 , 0 , -1 , 1};
void dfs(int i, int j , vector<vector<int>>&g, int &cnt){
     int n = g.size(); int m = g[0].size();
     if(g[i][j] ==1)cnt++;
      g[i][j] =0;
    for(int r = 0 ; r < 4 ; r++){
        int nr = i+dr[r];
        int nc = j+dc[r];
        if(nr >= 0 && nc >=0 && nr < n && nc < m&& g[nr][nc]==1){
            dfs(nr , nc ,g , cnt);
        }
    }
     
}



int main(){
    int n ; cin >> n; 
    vector<vector<int>>g(n , vector<int>(n  , 0));
       for(int i = 0 ; i < n ;i++){
        for(int j = 0 ; j < n ; j++){
            int p ; cin >> p;
            g[i][j] =p;
        }
       }
       int maxi = 0 ;
        for(int i = 0; i < n ; i++){
            for(int j = 0 ; j < n ;j++){
                int cnt = 0;
                if(g[i][j] ==1){
                   dfs(i , j , g , cnt);
                   maxi = max(maxi , cnt);
                }
            }
        }
        cout << maxi << endl;
       
}