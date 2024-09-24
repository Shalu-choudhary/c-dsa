#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>

using namespace std;
// Function to convert a character to its numeric value (for the value which is above to 9)
int charToValue(char c) {
    if (c >= '0' && c <= '9') {
        return c - '0';
    } else if (c >= 'A' && c <= 'F') {
        return c - 'A' + 10;
    } else if (c >= 'a' && c <= 'f') {
        return c - 'a' + 10;
    }
    return -1; // Invalid character
}
// Function to convert a number from base x to decimal (base 10)
int toDecimal(string num, int baseX) {
    int len = num.length();
    int power = 1; // Initialize power of base
    int result = 0;
    // Convert the number starting from the least significant digit
    for (int i = len - 1; i >= 0; i--) {
        int value = charToValue(num[i]);
        if (value >= baseX || value == -1) {
            cout << "Invalid number for base " << baseX << endl;
            return -1;
        }
        result += value * power;
        power = power * baseX;
    }
    return result;
}

// Function to convert a decimal number to base y
string fromDecimal(int num, int baseY) {
    if (num == 0) return "0";
    
    string result = "";
    while (num > 0) {
        int remainder = num % baseY;
        if (remainder < 10) {
            result += (remainder + '0');
        } else {
            result += (remainder - 10 + 'A');
        }
        num = num / baseY;
    }
    reverse(result.begin(), result.end());
    return result;
}

int main() {
    string number;
    int baseX, baseY;
    
    cout << "Enter the number which you want to convert : ";
    cin >> number;
    cout << "Enter the base of the number (2, 8, 10, or 16) which you enter : ";
    cin >> baseX;
    cout << "Enter the base to which you want to convert (2, 8, 10, or 16): ";
    cin >> baseY;
    
    int decimalValue;
    
    switch (baseX) {
        case 2:
        case 8:
        case 10:
        case 16:
            decimalValue = toDecimal(number, baseX);
            if (decimalValue == -1) {
                return 1; // Exit if invalid number
            }
            break;
        default:
            cout << "Invalid base X!" << endl;
            return 1;
    }
    
    string result;
    
    switch (baseY) {
        case 2:
        case 8:
        case 10:
        case 16:
            result = fromDecimal(decimalValue, baseY);
            break;
        default:
            cout << "Invalid base Y!" << endl;
            return 1;
    }
    cout << "The number " << number << " in base " << baseX << " is " << result << " in base " << baseY << "." << endl;
    return 0;
}
