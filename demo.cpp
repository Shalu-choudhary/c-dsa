#include<iostream>
#include<bits/stdc++.h>
using namespace std;
// LOOPS(Pattern)
// int main(){
    // int n=4;
    // for (int i=1;i<=n;i++){
    //   char ch='A';
    //   for(int j=1;j<=n;j++){
    //     cout<<ch;
    //     ch=ch+1;
    //   }

    //   cout<<endl;
    // }

    // int n=3;
    //  int num=1;
    // for(int i=0;i<n;i++){
     
    //   for(int j=0;j<n;j++){
    //     cout<<num;
    //     num++;
    //   }
    //   cout<<endl;
    // }

    // int n=3;
    // for(int i=0;i<n;i++){
    //   for(int j=i;j<n;j++){
    //     cout<<" * ";
    //   }
    //   cout<<endl;
    // }

    // int n=4;
    // for(int i=0;i<n;i++){
    //   for(int j=0;j<=i;j++){
    //     cout<<"*";
    //   }
    //   cout<<endl;
    // }
//      int n=4;
//      for(int i=1;i<=n;i++){
//       for(int j=1;j<=i;j++){
//         cout<<i;
//       }
//       cout<<endl;
//      }
//   return 0;
// }
int secondlarg(int arr[], int size){
  int largest=arr[0];
  int seclarg=-1;
  for(int i=0;i<size;i++){
    if(arr[i]>largest){
      seclarg=largest;
      largest=arr[i];
    }
    else if(arr[i]<largest&&arr[i]>seclarg){
      seclarg=arr[i];
    }
  }
  return seclarg;
}
int secsmall(int arr[],int size){
  int smallest=arr[0];
  int secsmal=INT_MAX;

  for(int i=0;i<size;i++){
    if(arr[i]<smallest){
      secsmal=smallest;
      smallest=arr[i];
    }
    else if(arr[i]!=smallest&&arr[i]<secsmal){
      secsmal=arr[i];
    }
  }
  return secsmal;

}

int main(){
int arr[]={2,3,4,5,7,6};
int size=sizeof(arr)/sizeof(arr[0]);
cout<<"sec largest : "<<secondlarg(arr,size)<<endl;
cout<<"sec smallest : "<<secsmall(arr,size)<<endl;
  return 0;
}