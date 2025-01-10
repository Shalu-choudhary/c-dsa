#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int removestr(string mainstr, vector<string>&substring){
    int removecnt=0;
    bool removed=true;
    while(removed){
        removed=false;
        for(const string &sub:substring){
            int pos=mainstr.find(sub);
            if(pos!=string::npos){
                mainstr=mainstr.substr(0,pos)+mainstr.substr(pos+sub.length());
                removecnt++;
                removed=true;
                break;
            }
        }
    }return removecnt;

}
int main(){
    string mainstr;
    int num;
    cout<<"enter the main str";
    cin>>mainstr;
    cout<<"enter the number";
    cin>>num;
    vector<string>substring(num);
    for(int i=0;i<num;i++){
        cout<<"enter substring"<<i+1;
        cin>>substring[i];
    }int result=removestr(mainstr,substring);
    cout<<result;

    return 0;
}