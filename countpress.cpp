#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int countpress(int wallwidth,int wallhigh, int brushwid, int brushhight){

    int presswid=(wallwidth+brushwid-1)/brushwid;
    int presshight=(wallhigh+brushhight-1)/brushhight;
    return presswid*presshight;
}
int main(){
    int wallwidth, wallhigh, brushwid, brushhight;
    cout<<"enter the width of wall";
    cin>>wallwidth;
    cout<<"enter the height of wall";
    cin>>wallhigh;
    cout<<"enter the width of brush";
    cin>> brushwid;
    cout<<"enter the height of brush";
    cin>> brushhight;
    int total=countpress(wallwidth, wallhigh, brushwid, brushhight);
    cout<<total;
    return 0;
}