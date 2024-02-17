/*
Write a recursive function to calculate the factorial of a non-negative integer n. The factorial of n, denoted by n!, is the product of all positive integers less than or equal to n. For example, 5! = 5 * 4 * 3 * 2 * 1 = 120
*/
#include <iostream>

int recursiveFunction(int x){
    //Base case
    if(x == 0 || x == 1){
        return 1;
    }
    else{
        return x * recursiveFunction(x - 1);
    }
}

int main() {
    std::cout << recursiveFunction(5);
    return 0;
}
