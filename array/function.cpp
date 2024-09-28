#include<iostream>
using namespace std;

// int addSum(int a,int b){
//     int sum=a+b;
//     return sum;
// }
// int main(){

// cout<<addSum(10,10)<<endl;


// factorail of n number

// int fact=1;
// int factN(int n){
//     for(int i=1;i<=n;i++){
//         fact=fact*i;
//     }
//     return fact;
// }
// int main(){
//     cout<<"factorail of a number is : "<<factN(4);
//     return  0;


//sum of digit of a number-->> 145====>>> 1+4+5-->10===>o/p (by modulo or qutiotient) num%10, num/10
// int sumDigit(int num){
//     int digitSum=0;

//     while(num>0){
//         int lastdigit=num%10;
//         num=num/10;

//         digitSum+=lastdigit;
//     }
//     return digitSum;
// }
// int main(){
// cout<<"sum of a digit number is : "<<sumDigit(2345)<<endl;

//     return 0;
// }


// calculate binomial coffiecient--->

// int factno(int n){
//     int fact=1;
//     for(int i=1;i<=n;i++){
//         fact=fact*i;
//     }
//     return fact;
// }

// int nCr(int n, int r){
//     int fact_n=factno(n);
//     int fact_r=factno(r);
//     int nminusr=factno(n-r);

//     return fact_n/(fact_r*nminusr);

// }
// int main(){

// int n=6,  r=3;
// cout<<nCr(n,r)<<endl;

//     return 0;
// }

// // prime no. , print all prime no 2 to n, fibonacci series

bool isprime(int n){
    if(n<=1){
        return false;
    }
    for(int i=2;i<n;i++){
        if(n%i==0){
             return false;  
        }
        return true; 
    }
}

int main(){
    if(isprime(5)){
        cout<<" the no is a prime no !"<<endl;
    }else{
        cout<<"not prime : "<<endl;
    }
    return 0;
}