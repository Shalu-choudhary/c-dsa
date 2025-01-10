#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int formstring(const string &mainstr, vector<Substring>&substr){
  int sz=mainstr.size();
  int totalcoat=0;
  int i=0;
  while(i<sz){
    int cost=INT_MAX;
    int len=0;
    for(auto it:substr){
      const string &sub=substr[i].sub;
      int cost=substr[i].cost;
      int len=sub.size();
      if(i+len<=sz&& mainstr.substr(i,len)==sub){
        if(cost<bextcost){
          bextcost=cost;
          bextlen=len;
          i=i;
        }
      
    }
    
  }
}

int main(){
  formstring(mainstr,substr)
  return 0;
}
