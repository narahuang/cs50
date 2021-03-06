/**
 * helpers.h
 *
 * Helper functions for Problem Set 3.
 */
 
#include <cs50.h>

/**
 * Returns true if value is in array of n values, else false.
 */
bool search(int value, int values[], int n);

/**
 * Sorts array of n values.
 */
void bubblesort(int values[], int n);
void countingsort(int values[], int n);
void mergesort(int values[], int n);
void merge(int values[], int left[], int leftl, int right[], int rightl);
