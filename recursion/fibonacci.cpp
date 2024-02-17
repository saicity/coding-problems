/*
Write a recursive function to calculate the nth term of the Fibonacci sequence. The Fibonacci sequence is a series of numbers in which each number is the sum of the two preceding ones, typically starting with 0 and 1. For example, the Fibonacci sequence up to the 6th term is 0, 1, 1, 2, 3, 5.
*/
#include <iostream>

int fibonacci(int n){
    if (n == 0){
        return 0;
    }
    else if(n == 1){
        return 1;
    }
    else{
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main() {
    std::cout << fibonacci(6);
}
