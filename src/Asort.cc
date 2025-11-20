//Sarah Watson
//This file contains our code for Insertion sort.
//Insertion sort takes the current value from the spot we are at in an array and 
//inserts it into the correct spot realtive to the other values we have already sorted.
#include "myheaders.h"

void ASort(long data[], long size){
	//define variables as data type long because we aren't sure of the size
	long i, sort_element, j;
	
	//start the loop at the second variable because the first variable is our starting point
	for(i = 1; i < size; i++){
		//define the element that we are currently sorting in the array
		sort_element = data[i];
		
		//define ana element that will represent the previous spot in the array
		j = i - 1;

		//loops through each element we have already sorted to see where to insert the current element at spot data[i]
		//runs when the previous element exists and when the previous element, j, is greater than element i
		while(j >= 0 && data[j] > sort_element){
			//move the element, j, up one spot in the array to make room for the insertion of element i
			data[j + 1] = data[j];
			
			//Move down to the element that was previous to element j
			j = j - 1;
		}
		
		//when the while loop fails, that means we can insert the element in the open spot we have created
		data[j+ 1] = sort_element;
	}
}