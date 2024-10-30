#include<iostream>
using namespace std;

int main(){
    int s,r;
    cout<<"enter the no. of sample : ";
    cin>>s;
    cout<<"enter the range : ";
    cin>>r;
   
    int a[1000];
     cout<<"enter the numbers:";
    for(int i=0;i<s;i++){
        cin>>a[i];
    }
    for(int i=0;i<r;i++){
        int count=0;
        cout<<"enter the min and max value of the range : \n";
        int left,right;
        cin>>left>>right;
       
        for(int j=0;j<s;j++){
            if(a[j]>=left&&a[j]<=right){
                count++;
            }
        }
        cout<<count;
    }

    return 0;
}