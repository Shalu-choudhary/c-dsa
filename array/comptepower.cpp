#include<iostream>
using namespace std;
double computePow(double x, int n){
    long binform=n;
    double ans=1;
    if(n==1){
        return 1.0;
    }
    if(x==0){
        return 0.0;
    }
    if(n<0){
        x=1/x;
        binform=-binform;
    }
    while(n>0){
        if(binform%2==1){
            ans*=x;
            x*=x;
            binform/=2;
        }
    }
    return ans;
}

int main(){
cout<<"power is "<<computePow(3,5);
    return 0;
}
