#include<iostream>
#include<vector>
using namespace std;
void reversearray(int arr[], int n){
    int p1=0;
    int p2=n-1;
    while(p1<p2){
        swap(arr[p1],arr[p2]);
        p1++;
        p2--;
    }
}
void rotatemat(vector<vector<int>>&mat){
    int n=mat.size();
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            swap(mat[i][j],mat[j][i]);
        }
    }

for(int i=0;i<n;i++){
    reversearray(mat[i].begin(),mat[i].end());
}

}
int main(){
    

    return 0;
}