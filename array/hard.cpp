// // type 1
// // #include <bits/stdc++.h>
// // using namespace std;

// // int nCr(int n, int r) {
// //     long long res = 1;

// //     // calculating nCr:
// //     for (int i = 0; i < r; i++) {
// //         res = res * (n - i);
// //         res = res / (i + 1);
// //     }
// //     return res;
// // }

// // int pascalTriangle(int r, int c) {
// //     int element = nCr(r - 1, c - 1);
// //     return element;
// // }

// // int main()
// // {
// //     int r = 5; // row number
// //     int c = 3; // col number
// //     int element = pascalTriangle(r, c);
// //     cout << "The element at position (r,c) is: "
// //             << element << "n";
// //     return 0;
// // }
        
//         // type 3
// // #include <bits/stdc++.h>
// // using namespace std;

// // int nCr(int n, int r) {
// //     long long res = 1;

// //     // calculating nCr:
// //     for (int i = 0; i < r; i++) {
// //         res = res * (n - i);
// //         res = res / (i + 1);
// //     }
// //     return (int)(res);
// // }

// // vector<vector<int>> pascalTriangle(int n) {
// //     vector<vector<int>> ans;

// //     //Store the entire pascal's triangle:
// //     for (int row = 1; row <= n; row++) {
// //         vector<int> tempLst; // temporary list
// //         for (int col = 1; col <= row; col++) {
// //             tempLst.push_back(nCr(row - 1, col - 1));
// //         }
// //         ans.push_back(tempLst);
// //     }
// //     return ans;
// // }

// // int main()
// // {
// //     int n = 5;
// //     vector<vector<int>> ans = pascalTriangle(n);
// //     for (auto it : ans) {
// //         for (auto ele : it) {
// //             cout << ele << " ";
// //         }
// //         cout << "n";
// //     }
// //     return 0;
// // }

        
// #include<iostream>
// using namespace std;
// int countk(int arr[], int k){

//     int n=sizeof(arr)/sizeof(arr[0]);
//     int cnt=0;
//     for(int i=0;i<n;i++){
//         for(int j=i;j<n;j++){
//             int xor1=0;
//             for(int k=i;k<j;k++){
//                 xor1=xor1^arr[k];
//                 cnt++;
//             }
//         }
//     }
//     return cnt;
// }
// int main(){
//     int arr[]={4,2,2,6,4};
//     // int n=sizeof(arr)/sizeof(arr[0]);
//     int k=6;
//     cout<<countk(arr,k);

//     return 0;
// }


