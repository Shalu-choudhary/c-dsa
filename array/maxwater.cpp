// #include<iostream>
//  using namespace std;
// problem of max water container:-->>>>>>>>>>

// int container(int height[], int size){
//     int maxwater=0;
//     for(int i=0;i<size;i++){
//         for(int j=i+1;j<size;j++){
//             int width=j-i;
//             int ht=min(height[i],height[j]);
//             int area=width*ht;
//             maxwater=max(maxwater,area);

//         }
//     }
//     return maxwater;
// }
// int main(){
//     int height[]={1,8,6,2,5,4,8,3,7};
//     int size=sizeof(height)/sizeof(height[0]);
//     cout<<"the max heigth for contain the water is : "<<container(height,size)<<endl;
//     return 0;
// }


// optimal sol
// int container(int height[], int size){
//     int maxwater=0;
//     int lp=0;
//     int rp=size-1;
//     while(lp<rp){
//         int wt=rp-lp;
//         int ht=min(height[lp], height[rp]);
//         int area=wt*ht;
//         maxwater=max(maxwater,area);
//         height[lp]<height[rp]?lp++:rp--;
//     }
//     return maxwater;
// }
// int main(){
//     int height[]={1,8,6,2,5,4,8,3,7};
//    int size=sizeof(height)/sizeof(height[0]);
//    cout<<"the max heigth for contain the water is : "<<container(height,size)<<endl;
//     return 0;
// }

// PRODUCT OF ARRAY EXCEPT SELF:--
// void product(int arr[], int sz){
//     int ans[];
//     for(int i=0;i<sz;i++){
//         int prod=1;
//         for(int j=0;j<sz;j++){
//             if(i!=j)
//             prod*=arr[j];
//         }
//         ans[i]=prod;
//         cout<<arr[i]<<endl;
//     }
// }
// int main(){
// int arr[]={1,2,3,4};
// int sz=sizeof(arr)/sizeof(arr[0]);
// cout<<product(arr,sz);
//     return 0;
// }


#include <bits/stdc++.h>

using namespace std;

vector<int> printSpiral(vector<vector<int>> mat) {
 
  // Define ans array to store the result.
  vector<int> ans;
 
  int n = mat.size(); // no. of nows
  int m = mat[0].size(); // no. of columns
  
  // Initialize the pointers reqd for traversal.
  int top = 0, left = 0, bottom = n - 1, right = m - 1;

  // Loop until all elements are not traversed.
  while (top <= bottom && left <= right) {
      
    // For moving left to right
    for (int i = left; i <= right; i++)
      ans.push_back(mat[top][i]);

    top++;

    // For moving top to bottom.
    for (int i = top; i <= bottom; i++)
      ans.push_back(mat[i][right]);

    right--;
    
    // For moving right to left.
    if (top <= bottom) {
      for (int i = right; i >= left; i--)
       ans.push_back(mat[bottom][i]);

      bottom--;
    }

    // For moving bottom to top.
    if (left <= right) {
      for (int i = bottom; i >= top; i--)
        ans.push_back(mat[i][left]);

      left++;
    }
  }
  return ans;
}

int main() {
    
  //Matrix initialization.
  vector<vector<int>> mat   {{1, 2, 3, 4},
                             {5, 6, 7, 8},
	                         {9, 10, 11, 12},
		                     {13, 14, 15, 16}};
		                     
  vector<int> ans = printSpiral(mat);

  for(int i = 0;i<ans.size();i++){
      
      cout<<ans[i]<<" ";
  }
  
  cout<<endl;
  
  return 0;
}