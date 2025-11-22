//This file contains our code for Quicksort.

#include "myheaders.h"
#include <iostream>

using namespace std;

// makes the middle number the pivot and moves it to data[first]
// Use two indices: lower (scanning right) and upper (scanning left)
// Moves lower forward while item < pivot
// Moves upper backward while item > pivot
// Swaps out-of-place items when lower < upper
// Recursively sort the left and right subarrays

template<class T>
void quicksort(T data[], int first, int last) {

    // lower = pivot index
    int lower = first + 1;
    // upper = end of the current array segment
    int upper = last;

    // moves  middle element to first
    swap(data[first], data[(first + last) / 2]);

    // store value
    T bound = data[first];

    // partitioning loop
    while (lower <= upper) {

        // move forward is less than comp
        while (data[lower] < bound)
            lower++;

        // move backward when greater than comp
        while (data[upper] > bound)
            upper--;

        // if out of place
        if (lower < upper) {
            // swap
            swap(data[lower], data[upper]);

            // move inward
            lower++;
            upper--;
        } else {
           // break loop
            lower++;
        }
    }

    swap(data[upper], data[first]);

    // sort elements before final position.
    if (first < upper - 1)
        quicksort(data, first, upper - 1);

 
    // sprt elements after final position.
    if (upper + 1 < last)
        quicksort(data, upper + 1, last);
}

// find largesst element + move to end of array
template<class T>
void quicksort(T data[], int n) {

    if (n < 2)
        return;   // because arrays of size 0 or 1 are already sorted

    // find largest item indix
    int maxIndex = 0;
    for (int i = 1; i < n; i++) // loop through array
        if (data[i] > data[maxIndex])
            maxIndex = i; // set as new highest

    // put largest element last
    swap(data[maxIndex], data[n - 1]);

    // sort every other item
    quicksort(data, 0, n - 2);
}
