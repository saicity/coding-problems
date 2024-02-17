/*
Problem: Write a recursive function to calculate the sum of digits of a non-negative integer. For example, the sum of digits of 1234 is 1 + 2 + 3 + 4 = 10.
*/
#include <iostream>

int function(int digits){
    if(digits < 10){
        return digits;
    }
    else{
        return function(digits % 10) + function(digits / 10);
    }
}

int main() {
    std::cout << function(1234);
}
