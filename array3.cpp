#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;

// missing number in an array(brute soln):-
// int missing(int arr[], int n){
//     for(int i=1;i<=n;i++){
//        int flag=0;
//        for(int j=0;j<n-1;j++){
//         if(arr[j]==i){
//              flag=1;
//             break;
//         }}
//        if(flag==0){
//        return i; }
//     }
// }
// int main(){
//     int arr[]={1,3,4,5};
//     int size=sizeof(arr)/sizeof(arr[0]);
//    cout<< missing(arr,5);
//    return 0;
// }

// optimal sol:
// int missingno(int arr[], int N){
//     int XOR1=0,XOR2=0;
//     for(int i=0;i<N-1;i++){
//         XOR2=XOR2^(arr[i]);
//         XOR1=XOR1^(i+1);
//     }
//     XOR1=XOR1^N;
//     return XOR1^XOR2;
// }
// int main(){
//     int arr[]={1,2,4,5};
//     int size=sizeof(arr)/sizeof(arr[0]);
//     cout<<missingno(arr,5);
//    return 0;
// }

// Maximum consiqutive ones(1's):-
// int maxione(int arr[],int size){
//     int maxi=0;
//     int count=0;
//     for(int i=0;i<size;i++){
//         if(arr[i]==1){
//             count++;
//         maxi=max(maxi,count);}
//         else{
//             count=0;
//         }
//     }
//     return maxi;
// }
// int main(){
//     int arr[]={1,1,0,1,1,1,1,0,1,1};
//     int size=sizeof(arr)/sizeof(arr[0]);
//     cout<<maxione(arr,size);
//    return 0;
// }

// find the number that appear once and other is twice
// int oncenum(int arr[], int size){
//     int XOR1=0;
//     for(int i=0;i<size;i++){
//         XOR1=XOR1^arr[i];
//     }
//     return XOR1;
// }

// int main(){
//     int arr[]={1,1,2,2,3,3,8};
//     int size=sizeof(arr)/sizeof(arr[0]);
// cout<<oncenum(arr,size);
//     return 0;
// }

// Find out the MAJORITY ELEMENT in an array (Moon's voting algo  [OPTIMAL SOL] )

// int majorityElem(vector<int>vec){
//     int cnt=0;
//     int el;
//     for(int i=0;i<vec.size();i++){
//         if(cnt==0){
//             cnt++;
//             el=vec[i];
//         }
//         else if(vec[i]==el){
//             cnt++;
//         }
//         else{
//             cnt--;
//         }
       
//     }
//     int count1=0;
//     for(int i=0;i<vec.size();i++){
//         if(vec[i]==el){
//             count1++;
//         }
//         if(count1>(vec.size()/2)){
//             return el;
//         }
//     }
//     return -1;
// }

// <<<<<<<<<<<<<<--------------------KADANE's ALGORITHM:-------->>>>>>>>>>>>>>>

int main(){
    int arr[]={1,2,-3,4,5};
    int sz=sizeof(arr)/sizeof(arr[0]);
    // for printing all subrrays
    // for(int start=0;start<sz;start++){
    //     for(int end=start;end<sz;end++){
    //         for(int i=start;i<end;i++){
    //             cout<<arr[i];
    //         }
    //         cout<<" ";
    //     }
    //     cout<<endl;
    // }

    // MAX SUBRRAY SUM (BRUTE FORCE SOLN)
    int maxsum=INT_MIN;
    for(int st=0;st<sz;st++){
        int currsum=0;
        for(int end=st;end<sz;end++){
            currsum+=arr[end];
            maxsum=max(currsum,maxsum);
        }
    }
    cout<<"maxsubarray sum is : "<<maxsum<<endl;
    return 0;
}