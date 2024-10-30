#include<iostream>
#include <cmath>
using namespace std;

// int main(){
//     int s,r;
//     cout<<"enter the no. of sample : ";
//     cin>>s;
//     cout<<"enter the range : ";
//     cin>>r;
   
//     int a[1000];
//      cout<<"enter the numbers:";
//     for(int i=0;i<s;i++){
//         cin>>a[i];
//     }
//     for(int i=0;i<r;i++){
//         int count=0;
//         cout<<"enter the min and max value of the range : \n";
//         int left,right;
//         cin>>left>>right;
       
//         for(int j=0;j<s;j++){
//             if(a[j]>=left&&a[j]<=right){
//                 count++;
//             }
//         }
//         cout<<count;
//     }

//     return 0;
// }



// Function to calculate total payment for a bank
double calculateTotalPayment(double principal, int totalYears) {
    double sum = 0;
    int n1;
    cout << "Enter the number of slabs: ";
    cin >> n1;

    for (int i = 0; i < n1; i++) {
        cout << "Enter the interest rate (as a percentage, e.g., 5 for 5%): ";
        double interest; // Interest as a percentage
        cin >> interest;

        // Convert interest to decimal for calculation
        double monthlyRate = (interest / 100.0) / 12.0; 

        // Total number of monthly payments
        int totalPayments = totalYears * 12;

        // Calculate total payment using the provided formula
        double totalPayment = (principal * monthlyRate) / (1 - (1 / pow(1 + monthlyRate, totalPayments)));

        // Accumulate total payment for this slab
        sum += totalPayment * totalPayments; // Total payment over the entire period
    }

    return sum; // Return the total payment for this bank
}

int main() {
    double principal; // Principal amount
    int total_year; // Total number of years
    cout << "Enter principal amount: ";
    cin >> principal;
    cout << "Enter total years: ";
    cin >> total_year;

    // Calculate total payments for both banks
    double bankA = calculateTotalPayment(principal, total_year);
    double bankB = calculateTotalPayment(principal, total_year);

    // Output the bank with the lesser total payment
    if (bankA < bankB) {
        cout << "Bank A has a better total payment: " << bankA << endl;
    } else {
        cout << "Bank B has a better total payment: " << bankB << endl;
    }

    return 0;
}

