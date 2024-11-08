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
void bubble_Sort(int arr[], int n){
    for(int i=n-1;i>=0;i--){
        int didswap=0;
        for(int j=0;j<=i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
                didswap=1;
            }
        }
        if(didswap==0){
            break;
        }
    }
}
 int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];

   
    bubble_Sort(arr,n);
   

    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
   
    return 0;
}
