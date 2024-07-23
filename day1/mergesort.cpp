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



// int n;
// int nums[N];

const int N = 1e6 + 10;
int tmp[N];

void merge_sort(int nums[], int left, int right) {
    if (left >= right) return;
    int mid = (left + right) >> 1;
    merge_sort(nums, left, mid);
    merge_sort(nums, mid + 1, right);
    int i = left, j = mid + 1, k = 0;
    while (i <= mid && j <= right) {
        if (nums[i] <= nums[j])
            tmp[k++] = nums[i++];
        else
            tmp[k++] = nums[j++];
    }
    while (i <= mid) tmp[k++] = nums[i++];
    while (j <= right) tmp[k++] = nums[j++];
    for (i = left, j = 0; i <= right; ++i, ++j) nums[i] = tmp[j];
}