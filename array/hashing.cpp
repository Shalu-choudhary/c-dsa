#include<iostream>
using namespace std;
int main(){
    string s;
    cout<<"enter a string : "<<endl;
    cin>>s;
    int hash[26]={0};
    for(int i=0;i<s.size();i++){
        hash[s[i]-'a']++;
    }
    int q;
    cout<<"enter how many charcter you want to fetch from the array : "<<endl;
    cin>>q;
    while(q--){
        char ch;
        cout<<"enter the character: "<<endl;
        cin>>ch;
    
    cout<<"the corresponding index is :"<<hash[ch-'a']<<endl;
    }

    return 0;
}