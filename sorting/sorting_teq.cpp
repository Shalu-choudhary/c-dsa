// #include<iostream>
// using namespace std;
// void selection_sort(int arr[],int n){
//     for(int i=0;i<=n-2;i++){
//         int minindx=i;
//         for(int j=i;j<=n-1;j++){
//             if(arr[j]<arr[minindx])
//             { minindx=j;}
//         }
//         int temp=arr[minindx];
//         arr[minindx]=arr[i];
//         arr[i]=temp;
//     }
// }

// void bubble_Sort(int arr[], int n){
//     for(int i=n-1;i>=0;i--){
//         int didswap=0;
//         for(int j=0;j<=i-1;j++){
//             if(arr[j]>arr[j+1]){
//                 int temp=arr[j+1];
//                 arr[j+1]=arr[j];
//                 arr[j]=temp;
//                 didswap=1;
//             }
//         }
//         if(didswap==0){
//             break;
//         }
//     }
// }

// void insertion_sort(int arr[], int n){
//     for(int i=0;i<=n-1;i++){
//         int j=i;
//         while(j>0&&arr[j-1]>arr[j]){
//             int temp=arr[j-1];
//             arr[j-1]=arr[j];
//             arr[j]=temp;

//             j--;
//         }
//     }
// }
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++)
//     cin>>arr[i];

//     // selection_sort(arr,n);
//     // bubble_Sort(arr,n);
//     insertion_sort(arr,n);

//     for(int i=0;i<n;i++)
//     cout<<arr[i]<<" ";
//     return 0;
// }


// merge sort:- 
#include <bits/stdc++.h>
using namespace std;

void merge(vector<int> &arr, int low, int mid, int high) {
    vector<int> temp; // temporary array
    int left = low;      // starting index of left half of arr
    int right = mid + 1;   // starting index of right half of arr

    //storing elements in the temporary array in a sorted manner//

    while (left <= mid && right <= high) {
        if (arr[left] <= arr[right]) {
            temp.push_back(arr[left]);
            left++;
        }
        else {
            temp.push_back(arr[right]);
            right++;
        }
    }

    // if elements on the left half are still left //

    while (left <= mid) {
        temp.push_back(arr[left]);
        left++;
    }

    //  if elements on the right half are still left //
    while (right <= high) {
        temp.push_back(arr[right]);
        right++;
    }

    // transfering all elements from temporary to arr //
    for (int i = low; i <= high; i++) {
        arr[i] = temp[i - low];
    }
}

void mergeSort(vector<int> &arr, int low, int high) {
    if (low >= high) return;
    int mid = (low + high) / 2 ;
    mergeSort(arr, low, mid);  // left half
    mergeSort(arr, mid + 1, high); // right half
    merge(arr, low, mid, high);  // merging sorted halves
}

int main() {

    vector<int> arr = {9, 4, 7, 6, 3, 1, 5}  ;
    int n = 7;

    cout << "Before Sorting Array: " << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " "  ;
    }
    cout << endl;
    mergeSort(arr, 0, n - 1);
    cout << "After Sorting Array: " << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " "  ;
    }
    cout << endl;
    return 0 ;
}