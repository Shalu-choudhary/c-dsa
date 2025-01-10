#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// pair<int, int> maxminfun(vector<int> arr) {
//     int sz = arr.size();  // Get the size of the array
//     int minele = INT_MAX;
//     int maxele = INT_MIN;

//     // Iterate in pairs
//     for (int i = 0; i < sz - 1; i += 2) {  // Process elements in pairs
//         int localmin, localmax;

//         // Compare the pair and assign localmin and localmax
//         if (arr[i] > arr[i + 1]) {
//             localmax = arr[i];
//             localmin = arr[i + 1];
//         } else {
//             localmax = arr[i + 1];
//             localmin = arr[i];
//         }

//         // Update global min and max
//         if (localmin < minele) {
//             minele = localmin;
//         }
//         if (localmax > maxele) {
//             maxele = localmax;
//         }
//     }

//     // If there is an odd number of elements, check the last one
//     if (sz % 2 != 0) {
//         if (arr[sz - 1] < minele) {
//             minele = arr[sz - 1];
//         }
//         if (arr[sz - 1] > maxele) {
//             maxele = arr[sz - 1];
//         }
//     }

//     return {maxele, minele};
// }

// int main() {
//     vector<int> arr = {3, 5, 4, 1, 9};  // Example array
//     pair<int, int> result = maxminfun(arr);  // Call the function

//     cout << "Min element is: " << result.second << endl;
//     cout << "Max element is: " << result.first << endl;

//     return 0;
// }
pair<int,int>maxminfunc(vector<int>arr){
    int n=arr.size();
    int minele=arr[0];
    int maxele=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]<minele){
            minele=arr[i];
        }if(arr[i]>maxele){
            maxele=arr[i];
        }
    }return {minele,maxele};
}
int main(){
    vector<int>arr={3,5,4,1,9};
    pair<int,int>result=maxminfunc(arr);
    cout<<"minele is : "<<result.first<<endl;
    cout<<"maxele is : "<<result.second;
    return 0;
}