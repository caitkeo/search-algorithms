//This file contains our code for Counting sort.
#include "myheaders.h"
#include <iostream>

using namespace std;

void countingSort(long data[], const long n) {
    long i;


    // 1. Find the largest number in data[]
    long largest = data[0];
    for(i = 1; i < n; i++){
        if(largest < data[i]){
            largest = data[i];
        }
    }


    // 2. Allocate counting array
    unsigned long* count = new unsigned long[largest + 1];
    for(i = 0; i <= largest; i++){
        count[i] = 0;
    }


    // 3. Count occurrences of each number
    for(i = 0; i < n; i++){
        count[data[i]]++;
    }


    // 4. Convert counts to cumulative counts
    for(i = 1; i <= largest; i++){
        count[i] += count[i - 1];
    }
 

    // 5. Place elements into temporary sorted array (stable)
    long* tmp = new long[n];
    for(i = n - 1; i >= 0; i--){
        tmp[count[data[i]] - 1] = data[i];
        count[data[i]]--;
    }

 
    // 6. Copy temp array back to original
    for(i = 0; i < n; i++){
        data[i] = tmp[i];
    }

 
    // 7. Clean up memory
    delete[] tmp;
    delete[] count;
}