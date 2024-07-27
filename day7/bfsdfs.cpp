#include <bits/stdc++.h>
using namespace std;
// tc o(n+e)
void solvedfs(int s , vector<int>adj[], vector<int>&visited , vector<int>&dfs){
      if(visited[s] ==0)visited[s] =1;
      dfs.push_back(s);
      for(auto it:adj[s]){
              if(visited[it] ==0){
                   solvedfs(it , adj , visited , dfs);
              }
      }
      
}
//tc O(n+e)
void solvebfs(int s ,vector<int>adj[] , vector<int>&visited , vector<int>&bfs){
     queue<int>q;
     q.push(s);
     visited[s] =1;
     while(!q.empty()){
        int r = q.front();
        bfs.push_back(r);
        q.pop();
        visited[r] =1;
        for(auto it : adj[r]){
              if(visited[it] ==0){
                q.push(it);
              }
        }
     }
}

int main(){
    int n , e ; cin >> n >> e ;
    // n = 6 e = 4
    vector<int>adj[n];
   for(int i = 0 ; i < e ; i++){
        int u , v;
        cin>>u >>v;
       adj[u].push_back(v);
       adj[v].push_back(u);
    }
    vector<int>bfs;
    vector<int>dfs;
    vector<int>visited(n , 0);
    // dfs
    // handle disconnected nodes
    for(int i = 0 ; i < n ; i++){
        if(visited[i] ==0){
            solvedfs(i , adj , visited , dfs);
            visited[i] =1;
        }
    }
    for(int i = 0 ; i < dfs.size(); i++){
        cout << dfs[i] << " ";
    }



    // bfs
    for(int i = 0 ; i< n ; i++){
        if(visited[i] ==0){
           solvebfs(i , adj  , visited , bfs);
        }
    }
    for(int i = 0 ; i < bfs.size(); i++){
        cout << bfs[i] << " ";
    }
}



// 6 4
// 0 1
// 1 3
// 0 2
// 4 5
