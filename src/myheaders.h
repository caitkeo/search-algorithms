// DO NOT forget to add the prototypes for your ASort, BSort, and other functions below!


#include <string>
#include <unistd.h>
#define MAXSIZE	 2100000

using namespace std;

void	printmenu();
void	printarray(long data[], long size);
int		readfile(string infilename, long data[]);
int		writefile(long data[], long size, string outfilename);
void	swap(long& x, long& y);


//functions for sorting algorithms
//Insertion sort function
void ASort(long data[], long size);
//Selection sort function
void BSort(long data[], long size);
//Bubble sort function
void CSort(long data[], long size);
//Heap sort function
void DSort(long data[], long size);
//Quicksort function
void ESort(long data[], long size);
//Counting sort function
void FSort(long data[], long size);
