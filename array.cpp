#include<iostream>
#include <limits.h>   // for int_max
#include <vector>
using namespace std;
// Largest element in an array:  tc-->0(n), sc-->0(1)
// int main(){
//     int arr[6]={2,3,8,5,2};
//     int largest=arr[0];   // or we can take largest=INT_MIN
//     for(int i=0;i<6;i++){
//         if(arr[i]>largest){
//             largest=arr[i];
//         }
//     }
//     cout<<largest;
//     return 0;
// }

//2nd largest element in an array--->>>>>  (better soln)   0(2n)
// int main(){
//     int arr[6]={2,3,4,5,6,9};
//     int largest=arr[0];
//     int seclargest=-1;

//     for(int i=0;i<6;i++){
//         if(arr[i]>largest){
//         largest=arr[i];
//         }
//     }

//     for(int i=0;i<6;i++){
//         if(arr[i]!=largest&&arr[i]>seclargest){
//             seclargest=arr[i];
//         }
//     }
//     cout<<seclargest;
//     return 0;
// }

// 2nd largest or 2nd smallest no in array(optimal sol)    0(N)

// int slargest(int arr[6]){
//     int largest=arr[0];
//     int slargest=-1;
//     for(int i=1;i<6;i++){
//         if(arr[i]>largest){
//             slargest=largest;
//             largest=arr[i];
//         }
//         else if(arr[i]<largest&&arr[i]>slargest){
//             slargest=arr[i];
//         }
//     }
//     return slargest;
// }

// int secondsmallest(int arr[6]){
//     int smallest=arr[0];
//     int ssmallest=INT_MAX;
//     for(int i=1;i<6;i++){
//         if(arr[i]<smallest){
//             ssmallest=smallest;
//             smallest=arr[i];
//         }
//         else if(arr[i]!=smallest && arr[i]<ssmallest){
//             ssmallest=arr[i];
//         }
//     }
//     return ssmallest;
// }
// int main(){
//     int arr[6]={3,4,9,7,5,1};
// cout<<"smallest : "<<secondsmallest(arr)<<endl;
// cout<<"slargest: "<<slargest(arr)<<endl;
//     return 0;
// }

// check if the array is sorted or not:-->>>>>>  TCOM--> 0(n)
// int issorted(int arr[6]){
//     for(int i=1;i<6;i++){
//         if(arr[i]>arr[i-1]){
            
//         }
//         else{
//             return false;
//         }
//     }
//     return true;
// }
// int main(){
// int arr[5]={1,2,3,4,5};
// cout<<issorted(arr);
//     return 0;
// }

// int issorted(int n, vector<int >arr){    by vector
//       for(int i=1;i<6;i++){
//         if(arr[i]>arr[i-1]){
            
//         }
//         else{
//             return false;
//         }
//     }
//     return true;
// }

// remove duplicate value from the sorted array [optimal soln]:--->>>>>>>>>>>     Time comp=== 0(n)

// int removeDuplicates(int arr[], int size) {
//     if (size == 0) return 0; // Edge case: empty array

//     int uniqueIndex = 0; // Index for the next unique element

//     for (int j = 1; j < size; ++j) {
//         if (arr[uniqueIndex] != arr[j]) {
//             uniqueIndex++;
//             arr[uniqueIndex] = arr[j];
//         }
//     }
//     return uniqueIndex + 1; // New size of the array with unique elements
// }
// int main() {
//     int arr[] = {1, 1, 2, 2, 2, 3, 3}; // Array with 7 elements
//     int size = sizeof(arr) / sizeof(arr[0]); // Calculate size of the array
//     int newSize = removeDuplicates(arr, size);
//     cout << "New size: " << newSize << endl;
//     cout << "Array after removing duplicates: ";
//     for (int i = 0; i < newSize; ++i) {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
//     return 0;
// }

// smaleest
// int main(){
//     int nums[]={12,23,43,1,-12};
//     int size=5;
//     int smallest=INT_MAX;
//     for(int i=0;i<size;i++){
//         if(nums[i]<smallest){
//             smallest=nums[i];
//         }
//     }
// cout<<smallest<<endl;

//     return 0;
// }
// int indexsmall(int num[],int size){
//     int index=0;
//     int small=INT_MAX;
//      for(int i=0;i<size;i++){
//         if(num[i]<small){
//             small=num[i];
//             index=i;   
//         }
//     }
//       return index;
// }
// int main(){
//     int num[]={12,21,23,2,1,34};
//     int size=6;
    
//     cout<<"smallest no at the index of: "<<indexsmall(num,size)<<endl;
//     return 0;
//}

void reversearr(int arr[],int sz){
    int start=0,end=sz-1;
    while(start<end){   // jb array even ho to start<end, jb odd ho to start<=end
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}
int main(){
    int arr[]={1,2,3,4,5};
    int sz=5;
    reversearr(arr,sz);
    for(int i=0;i<sz;i++){
        cout<<arr[i];
    }
    cout<<endl;
}
