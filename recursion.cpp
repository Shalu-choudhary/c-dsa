#include<iostream>
using namespace std;

// print name n time using recursion
 /*void printName(int i,int n){
    if(i>n){
        return ;
    }
    cout<<"shalu"<<endl;
    printName(i+1,n);
 }
int main(){
int n;
cout<<"enter the no of time "<<endl;
cin>>n;
printName(1,n);
    return 0;
}*/

// print linearly from 1 to n
/*void printnum(int i, int n){
    if(i>n)return;
    cout<<i<<endl;
    printnum(i+1,n);

}
int main(){
    int n;
    cout<<"enter the no"<<endl;
    cin>>n;
    printnum(1,n);

    return 0;
}*/

// print n to 1;
// void printnum(int i, int n){
//     if (i<1){
//         return ;
//     }
//     cout<<i<<endl;
//     printnum(i-1,n);
// }
// int main(){
//     int n;
//     cin>>n;
//     printnum(n,n);
//     return 0;

// }

// print 1 to n using backtracking:
// void fun(int i, int n){
//     if(i<1)return;
//     fun(i-1,n);
//     cout<<i<<endl;
// }
// int main(){
//     int n;
//     cin>>n;
//     fun(n,n);

//     return 0;
// }

// using backtracking n to 1
/*void printnum(int i, int n){
    if(i>n){
        return ;
    }
    printnum(i+1,n);
    cout<<i<<endl;
}
int main(){
    int n;
    cin>>n;
    printnum(1,n);


    return 0;
}*/

// sumession of n numbers
/*void sumOfNum(int i, int sum){
    if(i<1){
        cout<<sum;
        return;
    }
    sumOfNum(i-1,sum+i);
}
int main(){
    int n;
    cin>>n;
    sumOfNum(n,0);
    return 0;
}*/

// reverse an array using recursion(one variable)

// void fun(int i, int arr[],int n){
//     if(i>=n/2)
//     return ;

//     swap(arr[i],arr[n-i-1]);
//     fun(i+1,arr,n);
// }
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     fun(0,arr,n);
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<"";
//     }
//     return 0;
//}

// string is palindrom or not
// bool fun(int i,string &s){
//     if(i>=s.size()/2)
//     return true;
//     if(s[i]!=s[s.size()-i-1]){   // length of string==s.size()
//         return false;
//     }
//     return fun(i+1,s);
// }
// int main(){
// string s="madam";
// cout<<fun(0,s);

//     return 0;
// }

// fibonaccie series    0 1 1 2 3 5 8 13.............

int  fun(int n){
    if(n<=1){
        return n;
    }
    int last=fun(n-1);
    int seclast=fun(n-2);

    return last+seclast;
}
int main(){
int n=4;
cout<<"the no at position in the fib series is :"<<fun(n);
    return 0;
}