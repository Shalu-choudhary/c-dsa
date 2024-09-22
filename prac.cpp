//The task is to determine the number of elements within a specified range in an unsorted array. Given an array of size n, the goal is to count the elements that fall between two given values, i and j, inclusively.

// # include<iostream>
// #include<bits/stdc++.h>
// using namespace std;

// int lowerindex(int arr[], int n, int x){
//     int low=0; 
//     int high=n-1;
//     while(low<=high){
//         int mid=(low+high)/2;
//         if(arr[mid]>=x){
//             high=mid-1;
//         }
//         else{ low=mid+1;}
//     } return low;
// }
// int upperindex(int arr[], int n , int y){
//     int low=0;
//     int high=n-1;
//     while(low<=high){
//         int mid=(low+high)/2;
//         if(arr[mid]<=y){
//            low=mid+1;
//         }else{
//             high=mid-1;
//         }
//     } return high;
// }
// int countElmInRange(int arr[], int n, int x , int y){
//     int count=0;
//      count=upperindex(arr,n,y)-lowerindex(arr,n,x)+1;
//     return count;
// }
// int main(){
//     int arr[]={ 1, 3, 2, 9, 10, 4,12};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     sort(arr,arr+n);
//     int lowerRange=1;
//     int upperRange=4;

//     cout<<"for range 1 to 4 : "<<countElmInRange(arr,n,lowerRange,upperRange)<<endl;

//     lowerRange=9;
//     upperRange=12;
// cout<<"for range 9 to 12 : "<<countElmInRange(arr,n,lowerRange,upperRange)<<endl;
    
//     return 0;
// }

/*the majority element in an array is defined as the element that appears more than ⌊n/2⌋ times, where n is the length of the array.
In other words, it is the element that occurs most frequently and makes up more than half of the array.
Given an array of integers, the task is to find the majority element and return it. If there is no majority element, If there is no majority element, the algorithm should indicate that.
Example 1:
Input: [3, 3, 4, 2, 4, 4, 2, 4, 4]
Output: 4*/

#include<iostream>
#include<vector>
using namespace std;

vector<int>movezero(vector<int> nums){
    int j=-1;
    for(int i=0;i<nums.size();i++){
        if(nums[i]==0){
            j=1;
            break;
        }
    }
    for(int i=j+1;i<nums.size();i++){
        if(nums[i]!=0){
            swap(nums[i],nums[j]);
            j++;
        }
    }
}