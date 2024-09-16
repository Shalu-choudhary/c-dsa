#include<iostream>
using namespace std;

// // Left rotate array by one place
// void rotate(int arr[], int n) {
//     if (n <= 0) return; // Handle edge cases
    
//     int temp = arr[0];
//     for (int i = 0; i < n - 1; i++) {
//         arr[i] = arr[i + 1];
//     }
//     arr[n - 1] = temp;
// }

// void printArray(const int arr[], int n) {
//     for (int i = 0; i < n; i++) {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
// }

// int main() {
//     int arr[] = {1, 2, 3, 4, 5};
//     int n = sizeof(arr) / sizeof(arr[0]);

//     rotate(arr, n);
//     printArray(arr, n);

//     return 0;
// }

// left rotate array by d places  (d=1,2,3....)
/*void rotatearray(int n, int arr[],int d){
    d=d%n;
    int temp[d];
    for(int i=0;i<n;i++ ){   // add value in the temp
        temp[i]=arr[i];
    }
     
    for(int i=d;i<n;i++){   // shifting the element left side except thn temp element
        arr[i-d]=arr[i];
    }

    for(int i=n-d;i<n;i++){   // put back the temp element un the array
       arr[i]= temp[i-(n-d)];
    }
 }
int main(){
    int n;
    cout<<"enter the value of n : "<<endl;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
    cin>>arr[i];
    }
    int d;
    cout<< "enter the value of d"<<endl;
    cin>>d;
    rotatearray(n,arr,d);
    cout<<"the left rotate array is : "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}*/

// linear search in array
int main(){
int arr[]={2,3,5,4,6};
int n=sizeof(arr)/sizeof(arr[0]);
int num=2;
for(int i=0;i<n;i++){
    if(arr[i]==num){
        cout<< i;
    }
}
return -1;

    return 0;
}