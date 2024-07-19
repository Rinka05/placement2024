#include<bits/stdc++.h>
using namespace std;


/*
Tc O(nlogn)
sc O(n)

*/
void merge(vector<int>&nums , int s , int e){
    int mid = (s+e)/2;
    int len1 = mid-s+1;
    int first[len1];
    int len2 = e-mid;
    int second[len2];
    int k= s;
    for(int i = 0 ; i < len1 ; i++){
        first[i] = nums[k++];
    }
    k = mid+1;
    for(int  i = 0 ; i< len2 ; i++){
        second[i] = nums[k++];
    }
    int i = 0 , j = 0 ;
     k = s;
    while(i < len1 && j < len2){
        if(first[i] < second[j]){
            nums[k++] = first[i++];
        }
        else{
            nums[k++] = second[j++];
        }
    }
    while(i < len1) nums[k++] = first[i++];
    while(j < len2)nums[k++] = second[j++];
   
}

void mergesort(vector<int>&nums , int s , int e){
    if(s >= e)return ;
    int mid = (s+e)/2;
    mergesort(nums , s , mid);
    mergesort(nums , mid+1 , e);
    merge(nums , s , e);
}

int main(){
    int n ; cin >> n ;
    vector<int>nums(n);
    for(int i = 0 ; i < n ; i++){
        int x ; cin >> x;
        nums[i] = x;
    }
    mergesort(nums , 0 , n);
    for(int i = 0 ; i < n ; i++){
      cout << nums[i] << " ";
    }
}