#include <bits/stdc++.h>
using namespace std;

int solve(){
       int n ; cin>>n;
        vector<int>gas(n);
        vector<int>cost(n);
        for(int i = 0 ; i < n ;i++){
            int p ; cin>>p;
            gas[i] =p;
        }
         for(int i = 0 ; i < n ;i++){
            int p ; cin>>p;
            cost[i] =p;
        }
        int r = 0 , total = 0 , sum = 0;
        for(int i = 0 ; i < n ;i++){
            sum += gas[i]-cost[i];
            total += gas[i]-cost[i];
            if(total <=0){
              total = 0;
              r = i+1;
            }
        }
        if(sum <0) return -1;
        return r ;
        
}





int main(){
    int t ; cin>> t ;
    while(t--){
       cout << solve() << endl;

    }
}