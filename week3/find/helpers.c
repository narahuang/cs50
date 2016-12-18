/**
 * helpers.c
 *
 * Helper functions for Problem Set 3.
 */
       
#include <cs50.h>
#include "helpers.h"
/**
 * Returns true if value is in array of n values, else false.
 */
// Binary search, value is the target, values is the array, and n is the array size.
bool search(int value, int values[], int n)
{
    if(n==1) // When array size is 1, just compare the value
    {
        if(value != values[0])return false;
    }
    while(n>0)
    {
        if(values[n/2] == value) // Check the middle of array
        {
            return true;
        }
        else if(values[n/2] > value) // Target is in the left part (small part), search left part
        {
            if(search(value, values, n/2))
            {
                return true;
            }
            else return false;
        }
        else if(values[n/2] < value) // Target is in the right part (bigger part), search right part
        {
            if(search(value, values+(n/2), n-n/2))
            {
                return true;
            }
            else return false;
        }
    }
    return false; // Cannot find target T_T
}

/**
 * Sorts array of n values.
 */
void bubblesort(int values[], int n) // Bubble sort
{
    int i=0, swap, swapflag=1, sorti=n;
    while(sorti != 0)
    {
        swapflag = 1; // swapflag to check if there is no swap executed
        for(i=0;i<sorti-1;i++)
        {
            if(values[i] > values[i+1])
            {
                swap = values[i];
                values[i] = values[i+1];
                values[i+1] = swap;
                swapflag = 0;
            }
        }
        if(swapflag == 1)break;
        sorti--;
    }
    return;
}

void countingsort(int values[], int n) // Counting sort
{
    int count[65536]={0}, i,j,index=0; // For integers between 0 and 65536
    for (i=0 ; i<n ; i++)
    {
        count[values[i]]++; // Count how many values[i] exist
    }
    for (i=0 ; i<65536 ; i++) // From counting array count[], write result to values[]
    {
        if(count[i] == 0)
        {
            continue;
        }
        else 
        {
            for(j=0 ; j<count[i] ; j++)
            {
                values[index] = i;
                index++;
            }
        }
    }
    return;
}

void mergesort(int values[], int n)
{
    if(n > 1)
    {
        int q, *left, *right, leftl=n/2 ,rightl=n-n/2; // Init values, leftl: left part length
        left = (int*)malloc(leftl * sizeof(int)); // Generate memory space for left and right part
        right = (int*)malloc(rightl * sizeof(int));

        for(q=0; q<leftl; q++) left[q] = values[q]; // Copy left part from values[]
        for(q=0 ; q<rightl ; q++) right[q] = values[q+leftl];
        
        mergesort( left, leftl); // Sort left part
        mergesort( right, rightl);
        merge(values, left, leftl, right, rightl); // Merge sorted left part with right part
        free(left); // Free memeory to prevent memory leak
        free(right);
    }
    return;
}

void merge(int values[], int left[], int leftl, int right[], int rightl)
{
    int i=0, j=0 ,k=0;
    while(i < leftl && j < rightl)
    {
        if(left[i] < right[j])
        {
            values[k] = left[i];
            k++;
            i++;
        }
        else
        {
            values[k] = right[j];
            k++;
            j++;
        }
    }
    while(i < leftl)
    {
        values[k] = left[i];
        k++;
        i++;
    }
    while(j < rightl)
    {
        values[k] = right[j];
        k++;
        j++;
    }
}
