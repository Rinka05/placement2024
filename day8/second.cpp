#include <bits/stdc++.h>
using namespace std;


int main(){
    int v , e ; cin >> v >> e;
   vector<vector<int>>adj[v];
    for(int i = 0; i < e ; i++ ){
        int st , ed , wt;
        cin >> st >> ed >>wt;
       adj[st].push_back({ed , wt});
       adj[ed].push_back({st , wt});
    }
    priority_queue<pair<int , int>, vector<pair<int , int>>, greater<pair<int, int>>>pq;
    vector<int>dist(v);
    for(int i = 0 ; i < v ; i++){
        dist[i] = 1e9;
    }
    dist[0]=0 ;
    pq.push({0 , 0});
    while(!pq.empty()){
        int dis = pq.top().first;
        int node = pq.top().second;
        pq.pop();
        for(auto it : adj[node]){
            int wt = it[1];
            int nbr= it[0];
            int total = dis+wt;
            if(total < dist[nbr]){
                dist[nbr] = total;
                pq.push({dist[nbr], nbr});
            }
        }
    }
    for(int i = 0 ; i < v ; i++){
        cout << i << " "<<  dist[i] << " " << endl;
    }
}