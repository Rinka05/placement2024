#include <bits/stdc++.h>
using namespace std;



int main(){

    int n ; cin >> n ;
    vector<int>nums(n);
    for(int i = 0 ; i < n ; i++){
        int x ; cin>> x;
          nums[i] = x;
    }
    int key ; cin>>key;
    int s = 0 , e = n-1;
    while( s <= e){
        int mid = (s+e)/2;
        if(nums[mid]== key){
            cout << mid << endl;
            break;
        }

        else if(nums[mid]  <= key){
            s = mid+1;
        }
        else {
            e = mid-1;
        }
    }
    // if key is not present it will give the index  of the number just greater than the key
cout<< lower_bound(nums.begin() , nums.end() , key)-nums.begin() << endl;
// this always gives the index of the number greater than the key
cout<< upper_bound(nums.begin() , nums.end() , key)-nums.begin() << endl;
    // cout << s << endl; 
    

}