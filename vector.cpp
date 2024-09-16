# include<iostream>
# include<vector>
using namespace std;
int main(){
// initliazation of vector in diffrent types
    // vector<int>vec;  // 0;
    // cout<<vec[0];

    // vector<int>vec={1,2,3};
    // cout<<vec[0]<<endl;

    // vector<int>vec(5,0);   // 5 is the size of the vector or 0 is the indexed value 
    // cout<<vec[0]<<endl;
    // cout<<vec[1]<<endl;
    // cout<<vec[2]<<endl;
    // cout<<vec[3]<<endl;
    // cout<<vec[4]<<endl;

    // // for each loop:  for(type iterator_name : vactorname),  there are iterator name is the indexed value not the index
    // for( int value:vec){
    //     cout<<value<<endl;}

    // cout<<"size => "<<vec.size()<<endl;

    // vector<int>vec;
    // vec.push_back(0);
    // vec.push_back(1);
    // vec.push_back(2);
    // vec.push_back(3); //after push back 3 it is contain in the existing vector bcz capacity is 4(before) 
    // vec.push_back(4); // for this the vector is full so new one is created and now the capacity is 8 (double of previous) and size is 5

    // cout<<vec.size()<<endl; // size is the number of element in a vector // 3 in this exp(before push 3 and 4)
    // cout<<vec.capacity()<<endl; // capacity is the whole length of the vector  // 4 in this exp
// size is 3 because 3 elements are present and the capacity is  4 (before push 3 and 4)
    
    // problem: find Single number in a vector( solved by the XOR property because same elements are cancel out to each other only diffrent element is present in tha last) n^n=0,  n^0=n
    // logic:-
    // int singlenumber( vector<int>&nums){
    //     int answer=0;
    //     for(int value:nums){
    //         answer=answer^value;
    //     }
    //     return answer;
    // }
    
    return 0;
}