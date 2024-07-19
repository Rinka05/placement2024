#include <bits/stdc++.h>
using namespace std;
//write the time and space complexity
/*
tc -> O(logn)
sc -> o(n)
*/
int merge(vector<int>& nums , int s , int mid, int e){
    int len1 = e-s+1;
    int temp[len1];
  int count = 0;
    int i = s , j = mid, k = 0 ;
    while(i < mid  && j < e){
          if(nums[i] <= nums[j]){
             temp[k++] = nums[i++];
          }
          else{
            count += mid-i;
            temp[k++] = nums[j++];
          }
    }
    while(i < mid)temp[k++] = nums[i++];
    while(j < e)temp[k++] = nums[j++];
    for(int m = s,  p= 0 ; m< e ; m++ ){
         nums[m] = temp[p++];
    }
return count;
}



int invcount(vector<int>&nums , int s , int e){
int count=0;
while(e>s){
    int mid=(s+e)/2;
    int left_count=invcount(nums,s, mid);
    int right_count=invcount(nums,mid+1,e);
    int merging_count=merge(nums,s, mid+1, e);
  return left_count+right_count+merging_count;
}
return count;
}

int main(){
    int n ; cin >> n ; 
    vector<int>nums(n);
    for(int i = 0 ; i < n ; i++){
        int x ; cin >> x ;
        nums[i] = x;
    }
  cout <<  invcount(nums , 0 , n);

}


/*
arr-> 9 8 5 6 10 5 7  1 12  18 ->  ( 9 8 5 6 10) and  ( 5 7 1 12  18)
   
*/

/* 2 5 1 3 4    = 4
2 5 0 1 3 4  6 7 = 6
2 5 0 1  -> 4             3 4 6 7  ->0
0 1 2 5  ->4              3 4 6 7   ->0
0 1 2 3  4 5 6 7 
+1 +1

i = 0 i =1                 j j
3 6 7               0 1 2 5 8
0 -> 3
1 -> 3
2 -> 3
3 -> 0 
5 -> 2
7 -> 0
8 ->0






 */
