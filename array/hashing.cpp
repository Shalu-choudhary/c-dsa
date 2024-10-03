#include<iostream>
#include<bits/stdc++.h>
using namespace std;
// int main(){
//     string s;
//     cout<<"enter a string : "<<endl;
//     cin>>s;
//     int hash[26]={0};
//     for(int i=0;i<s.size();i++){
//         hash[s[i]-'a']++;
//     }
//     int q;
//     cout<<"enter how many charcter you want to fetch from the array : "<<endl;
//     cin>>q;
//     while(q--){
//         char ch;
//         cout<<"enter the character: "<<endl;
//         cin>>ch;
    
//     cout<<"the corresponding index is :"<<hash[ch-'a']<<endl;
//     }

//     return 0;
// }

// highest & lowest frequency element:->>>
void frequency_ele(int arr[], int n){
    unordered_map<int,int>map;
    for(int i=0;i<n;i++){
        map[arr[i]]++;
    }
    int maxfreq=0, minfreq=n;
    int maxele=0, minele=0;
    for(auto it:map){
        int count=it.second;
        int element=it.first;

        if(count>maxfreq){
            maxele=element;
            maxfreq=count;
        }
        if(count<minfreq){
            minele=element;
            minfreq=count;
        }
    }
    cout<<"higher frequency element is : "<<maxele<<endl;
    cout<<"lower frequency element is : "<<minele<<endl;
}
int main(){
    int arr[]={10,10,5,15,5,10};
    int n=sizeof(arr)/sizeof(arr[0]);
    frequency_ele(arr,n);
    return 0;
}