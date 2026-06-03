#ifndef ALGOLIB_H
#define ALGOLIB_H

// Sorting algorithms
void bubble_sort(int arr[], int n);
void selection_sort(int arr[], int n);
void insertion_sort(int arr[], int n);
void merge_sort(int arr[], int l, int r);
void quick_sort(int arr[], int low, int high);

// Searching algorithms
int linear_search(int arr[], int n, int target);
int binary_search(int arr[], int low, int high, int target);

#endif