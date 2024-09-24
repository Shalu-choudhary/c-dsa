#include<iostream>
 using namespace std;

// int container(int height[], int size){
//     int maxwater=0;
//     for(int i=0;i<size;i++){
//         for(int j=i+1;j<size;j++){
//             int width=j-i;
//             int ht=min(height[i],height[j]);
//             int area=width*ht;
//             maxwater=max(maxwater,area);

//         }
//     }
//     return maxwater;
// }
// int main(){
//     int height[]={1,8,6,2,5,4,8,3,7};
//     int size=sizeof(height)/sizeof(height[0]);
//     cout<<"the max heigth for contain the water is : "<<container(height,size)<<endl;


//     return 0;
// }

int container(int height[], int size){
    int maxwater=0;
    int lp=0;
    int rp=size-1;
    while(lp<rp){
        int wt=rp-lp;
        int ht=min(height[lp], height[rp]);
        int area=wt*ht;
        maxwater=max(maxwater,area);
        height[lp]<height[rp]?lp++:rp--;
    }
    
    return maxwater;

}

int main(){
    int height[]={1,8,6,2,5,4,8,3,7};
   int size=sizeof(height)/sizeof(height[0]);
   cout<<"the max heigth for contain the water is : "<<container(height,size)<<endl;
    return 0;
}


