#include <stdio.h>

int * best_arr;

void print_array(int *arr, int size){
  for (int i=0; i<size; i++){
    printf("%d ",arr[i]);
  }
  printf("\n");
}

// Generating permutation using Heap Algorithm 
void heap_permutation(int a[], int size, int n) 
{ 
    // if size becomes 1 then do something with the obtained permutation   
    if (size == 1) 
    { 
        //TO DO - instead of printing, insert your code for evaluating the next candidate array
        print_array(a, n); 
        return; 
    } 
  
    for (int i=0; i<size; i++) 
    { 
        heap_permutation(a,size-1,n); 
  
        // if size is odd, swap first and last element 
        if (size%2==1) 
            swap(a[0], a[size-1]); 
  
        // If size is even, swap ith and last element 
        else
            swap(a[i], a[size-1]); 
    } 
} 
  
// Code to test permutations
int main() { 
    int a[] = {1, 2, 3, 4}; 
    int n = sizeof a/sizeof a[0]; 
    heap_permutation(a, n, n); 
    return 0; 
} 
