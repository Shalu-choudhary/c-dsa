#include<iostream>
#include<bits/stdc++.h>
#include <string>
using namespace std;

// class human{
//     public:
//   string name;
//   int age;
//   string loc;

//   // constructor--> special fun which take diffrent type of value and assign to the keys
//   // name of the constructor same as name of the class

//   human(string n, int a, string l){
//     name=n;
//     age=a;
//     loc=l;
//   }
// };
// int main(){
//     human obj("shalu","20","Ajmer");
//     cout<<obj.name<<endl;
//     cout<<obj.age<<endl;
//     cout<<obj.loc<<endl;

//     return 0;


// int main()
// {
// char s1[6] = "Hello";
// char s2[6] = "World";
// char s3[12] = s1 + " " + s2;
// cout<<s3;
// return 0;
// }

int fun(vector<int>&nums, int k){
    int n=nums.size();
    int maxlen=0;
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=i;j<n;j++){
            sum+=nums[i];
        if(sum<=k){
            maxlen=max(maxlen,j-i+1);
        }else break;
        }
        
    }return maxlen;

}
int main(){
    vector<int>nums={2,5,1,7,10};
    int k=14;
    cout<<fun(nums,k);

    return 0;

}