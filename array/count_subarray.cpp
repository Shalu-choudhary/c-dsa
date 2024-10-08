#include <bits/stdc++.h>
#include<vector>
using namespace std;
// int findAllSubarraysWithGivenSum(vector < int > & arr, int k) {
//     int n = arr.size(); // size of the given array.
    // int cnt = 0; // Number of subarrays:
    // for (int i = 0 ; i < n; i++) { // starting index i

    //     for (int j = i; j < n; j++) { // ending index j
    //         // calculate the sum of subarray [i...j]
    //         int sum = 0;
    //         for (int K = i; K <= j; K++)
    //             sum += arr[K];
    //         // Increase the count if sum == k:
    //         if (sum == k)
    //             cnt++;
    //     }
    // }
    // return cnt;

    //better  solution(o(n^2))
//     int count=0;
//     for(int i=0;i<n;i++){
//         int sum=0;
//         for(int j=i;j<n;j++){
//             sum+=arr[j];
//             if(sum==k){
//                 count++;
//             }
//         }
//     }return count;
// }

//optimal solution
int countsum(vector<int> &arr,int k){
    int n=arr.size();
    unordered_map<int,int> mpp;
    mpp[0]=1;
    int presum=0;
    int cnt=0;
    for(int i=0;i<n;i++){
        presum+=arr[i];
        int remove=presum-k;
        cnt+=mpp[remove];
        mpp[presum]+=1;

    }return cnt;
}
int main()
{
    vector<int>arr = {3, 1, 2, 4};
    int k = 6;
    int cnt =countsum(arr, k);
    cout << "The number of subarrays is: " << cnt << "\n";
    return 0;
}




