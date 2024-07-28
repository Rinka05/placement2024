#include <bits/stdc++.h>
using namespace std;


/*
TC = O(nlogn)           worstcase O(n*n)
SC = O(1)
*/
 int findpivot( vector<int>&nums  , int s, int e){
      int pivot = nums[s];
      int count = 0 ;
      for(int i = s ; i < e ; i++){
        if(nums[i] < pivot){
            count++;
        }
      }
    //nums[count+s] = pivot;
      int ind = count+s;
       swap(nums[count+s], nums[s]);
        int st = s , end = e ;
         while(st < end){
                while(nums[st] < nums[ind]){
                    st++;
                }
                while(nums[end] > nums[ind] ){
                    end--;
                }
                  swap(nums[end], nums[st]);
                   end--; st++;
         }
      return count+s;
 }


 void quicksort( vector<int>&nums, int s , int e){
       
           if(s >= e)return;
       int pv = findpivot(nums, s , e);
       quicksort(nums , s , pv-1);
       quicksort(nums , pv+1 , e);
       
       
 }

int main(){
    int n ; cin >> n ;
    vector<int>nums(n);
    for(int i= 0 ; i < n ; i++){
        int x ; cin >>x;
        nums[i] = x;
    }
    quicksort(nums  , 0 , n);

    for(int i = 0 ; i < n ; i++){
        cout << nums[i] << " ";
    }

}
/* 
 9 8 4 5 3
*/