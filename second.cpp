
/*
5 2
3 4
x = 5 -> 0 , 1 ,2 , 3 , 4  , 5
n = 2;
0 , 0 , 0 , 1 , 1 , 0
*/
#include <bits/stdc++.h>
using namespace std;


int main(){
    int t ; cin >> t ;
    while(t--){
    int x ; cin >> x;
    int n ; cin >> n;
    vector<int>nums(x, 0);
    vector<int>ans;
    while(n--){
        set<int>st;
        int maxi = 0;
        int p ; cin >> p;
        if(st.empty()){
        st.insert(p);
        ans.push_back(p);
        maxi = p;
        }
        else {
            if(abs(p-st.rbegin()) )
        }


    }
    }
}

