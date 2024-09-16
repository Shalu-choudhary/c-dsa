#include<iostream>
using namespace std;

// DECIMAL TO BINARY NO CONVERSION-->>>
// int decitobin(int decino){
//     int ans=0;
//     int pow=1;

//     while(decino>0){
//         int remender=decino%2;
//         decino/=2;
//         ans+=(remender*pow);
//         pow*=10;

//     }
//     return ans;
// }
// int main(){
//     int decino=50;
//     cout<<decitobin(decino);

//     for(int i=1;i<=10;i++){
//         cout<<decitobin(i)<<endl;
//     }
//     return 0;
//}

int bintodec(int binaryno){
    int ans=0,pow=1;
     while(binaryno>0){
        int remd=binaryno%10;
        ans+=(remd*pow);
        //updation
        binaryno/=10;
        pow*=2;
     }
     return ans;
}
int main(){
    int binaryno=110;
    cout<<bintodec(binaryno);
    return 0;
}