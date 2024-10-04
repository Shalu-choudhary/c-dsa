#include<iostream>
using namespace std;
void selection_sort(int arr[],int n){
    for(int i=0;i<=n-2;i++){
        int minindx=i;
        for(int j=i;j<=n-1;j++){
            if(arr[j]<arr[minindx])
            { minindx=j;}
        }
        int temp=arr[minindx];
        arr[minindx]=arr[i];
        arr[i]=temp;
    }
}

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

void insertion_sort(int arr[], int n){
    for(int i=0;i<=n-1;i++){
        int j=i;
        while(j>0&&arr[j-1]>arr[j]){
            int temp=arr[j-1];
            arr[j-1]=arr[j];
            arr[j]=temp;

            j--;
        }
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];

    // selection_sort(arr,n);
    // bubble_Sort(arr,n);
    insertion_sort(arr,n);

    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
    return 0;
}