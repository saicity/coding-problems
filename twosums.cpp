/*
  My implementation of a backtracking algorithm that returns the indicies of two numbers in
  an array that add up to each other given a target.
*/
#include <iostream>

int* returnTarget(int arr[], int target);

using namespace std;

int main() {
    int arr[] = {3, 3};
    int target = 6;
    returnTarget(arr, target);
}

int* returnTarget(int arr[], int target)
{
    int size = sizeof(arr)/sizeof(int);

    int i, j, holdFirst, holdSecond;
    
    for(i = 0; i <= size - 1; i++)
    {
        holdFirst = arr[i];
        
        for(j = i + 1; j <= size; j++)
        {
            holdSecond = arr[j];
            if(holdFirst + holdSecond == target)
            {
                cout << "Index 1 has a value of " << holdFirst << endl;
                cout << "Index 2 has a value of " << holdSecond << endl;
                int indicies[2] = {holdFirst, holdSecond};
                return indicies;
            }
        }
    }
}
