// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;

// int secelement(vector<int>& arr) {
//     int n = arr.size();
    
//     // If there are less than two elements, there is no second largest element
//     if (n < 2) {
//         return -1;  // Indicating there's no second largest element
//     }

//     // Sort the array in ascending order
//     sort(arr.begin(), arr.end());

//     // Find the largest element
//     int largest = arr[n - 1];
    
//     // Start from the second-to-last element and skip duplicates of the largest
//     for (int i = n - 2; i >= 0; i--) {
//         if (arr[i] != largest) {
//             return arr[i];  // Return the first element that is not equal to the largest
//         }
//     }

//     // If no second largest element is found (i.e., all elements are the same), return -1
//     return -1;
// }

// int main() {
//     int n;
//     cout << "Enter the number of elements: ";
//     cin >> n;

//     vector<int> arr(n);
//     cout << "Enter the elements: " << endl;
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }

//     cout << "Second largest element is: " << secelement(arr) << endl;

//     return 0;
// }

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={1,1,1,3,3,2,2,2};
    int list={};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        if(list.size()==0
    }




    return 0;
}

