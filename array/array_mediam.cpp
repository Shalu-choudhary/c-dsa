#include<iostream>
// #include <algorithm>   // for std::reverse
#include<bits/stdc++.h>
using namespace std;
// sum of two number is exist in an array (brute sol.) tc=== ~~o(n^2)
// string sum(int arr[], int size){
//     int target_sum=14;
//     for(int i=0;i<size;i++){
//         for(int j=i+1;j<size;j++){
//             if(arr[i]+arr[j]==target_sum){
              
//               return "yes";
//             }
//         }
//     }
//     return "no";
// }
// int main(){
//     int arr[]={1,2,6,8,11};
//     int size=sizeof(arr)/sizeof(arr[0]);
// cout<<sum(arr,size);
//     return 0;
// }

// pair<int, int>sum(int arr[], int n){
//     int target=14;
//     for(int i=0;i<n;i++){
//         for(int j=i+1;j<n;j++){
//             if(arr[i]+arr[j]==target){
//                 return make_pair(i,j);
//             }
//         }
//     }
// }
// int main(){
//     int arr[]={1,2,6,8,11};
//    int n=sizeof(arr)/sizeof(arr[0]);
//     pair<int, int> indices = sum(arr, n);
//    cout<<indices.first<<"and"<<indices.second<<endl;
//     return 0;
// }


// REARRANGE THE ARRAY ELEMENT BY THEIR SIGN:->>>>>>>>>
// int fun(int arr[],int n){
//     vector<int>ans(n,0);
//     int posindex=0;
//      int negindex=1;
     
//      for(int i=0;i<n;i++){
//         if(arr[i]<0){
//             ans[negindex]=arr[i];
//             negindex+=2;
//         }else{
//             ans[posindex]=arr[i];
//             posindex+=2;
//         }
        
//     }
//       return ans;
// }
// int main(){
//      int arr[]={3,1,-2,-5,2,-4};
//      int n=sizeof(arr)/sizeof(arr[0]);
     
//     cout<<fun(arr,n);
//     return 0;
// }

void nextPerm(int arr[], int sz){
    int ind=-1;
    for(int i=sz-2;i>=0;i--){
        if(arr[i]<arr[i+1]){
            ind=i;
            break;
        }
    }
    if(ind==-1){
        return ;
    }
    for(int i=sz-1;i>ind;i--){
        if(arr[i]>arr[ind]){
            swap(arr[i],arr[ind]);
            break;
        }
    }
    std::reverse(arr + ind + 1, arr + sz);
}
int main(){
    int arr[]={2,1,5,4,3,0,0};
    int sz=sizeof(arr)/sizeof(arr[0]);
    nextPerm(arr,sz);
    for(int i=0;i<sz;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}