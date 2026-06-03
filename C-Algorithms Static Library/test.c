#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "algorithm.h"

void print_array(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void copy_array(int *src, int *dest, int n) {
    for(int i = 0; i < n; i++)
        dest[i] = src[i];
}

int is_sorted(int arr[], int n) {
    for(int i = 1; i < n; i++)
        if(arr[i] < arr[i-1])
            return 0;
    return 1;
}

void benchmark_all(int arr[], int n) {
    int *temp = malloc(n * sizeof(int));
    if(temp == NULL) {
        printf("Memory allocation failed\n");
        return;
    }

    clock_t start, end;
    double time_taken;

    printf("\nOriginal Array:\n");
    if(n <= 50)
        print_array(arr, n);
    else
        printf("Array too large to display.\n");

    printf("\nAlgorithm Benchmark Results\n");
    printf("-------------------------------------------\n");

    copy_array(arr, temp, n);
    start = clock();
    bubble_sort(temp, n);
    end = clock();
    time_taken = (double)(end - start) / CLOCKS_PER_SEC;
    printf("\nBubble Sort Result:\n");
    if(n <= 50) print_array(temp, n);
    printf("Time: %f sec\n", time_taken);

    copy_array(arr, temp, n);
    start = clock();
    selection_sort(temp, n);
    end = clock();
    time_taken = (double)(end - start) / CLOCKS_PER_SEC;
    printf("\nSelection Sort Result:\n");
    if(n <= 50) print_array(temp, n);
    printf("Time: %f sec\n", time_taken);

    copy_array(arr, temp, n);
    start = clock();
    insertion_sort(temp, n);
    end = clock();
    time_taken = (double)(end - start) / CLOCKS_PER_SEC;
    printf("\nInsertion Sort Result:\n");
    if(n <= 50) print_array(temp, n);
    printf("Time: %f sec\n", time_taken);

    copy_array(arr, temp, n);
    start = clock();
    merge_sort(temp, 0, n-1);
    end = clock();
    time_taken = (double)(end - start) / CLOCKS_PER_SEC;
    printf("\nMerge Sort Result:\n");
    if(n <= 50) print_array(temp, n);
    printf("Time: %f sec\n", time_taken);

    copy_array(arr, temp, n);
    start = clock();
    quick_sort(temp, 0, n-1);
    end = clock();
    time_taken = (double)(end - start) / CLOCKS_PER_SEC;
    printf("\nQuick Sort Result:\n");
    if(n <= 50) print_array(temp, n);
    printf("Time: %f sec\n", time_taken);

    free(temp);
}

int main() {
    int n, choice, target;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    if(n <= 0) {
        printf("Invalid size\n");
        return 1;
    }

    int *arr = malloc(n * sizeof(int));
    if(arr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    printf("\n1. Enter elements manually\n");
    printf("2. Generate random elements\n");
    printf("Choose option: ");
    scanf("%d", &choice);

    if(choice == 1) {
        printf("Enter %d elements:\n", n);
        for(int i = 0; i < n; i++)
            scanf("%d", &arr[i]);
    } else {
        srand(time(NULL));
        for(int i = 0; i < n; i++)
            arr[i] = rand() % 1000;
    }

    printf("\nOriginal Array:\n");
    if(n <= 50)
        print_array(arr, n);
    else
        printf("Array too large to display.\n");

    printf("\n1. Bubble Sort\n");
    printf("2. Selection Sort\n");
    printf("3. Insertion Sort\n");
    printf("4. Merge Sort\n");
    printf("5. Quick Sort\n");
    printf("6. Benchmark All\n");
    printf("Choose sorting method: ");
    scanf("%d", &choice);

    if(choice == 6) {
        benchmark_all(arr, n);
        free(arr);
        return 0;
    }

    clock_t start = clock();

    switch(choice) {
        case 1: bubble_sort(arr, n); break;
        case 2: selection_sort(arr, n); break;
        case 3: insertion_sort(arr, n); break;
        case 4: merge_sort(arr, 0, n-1); break;
        case 5: quick_sort(arr, 0, n-1); break;
        default:
            printf("Invalid choice\n");
            free(arr);
            return 1;
    }

    clock_t end = clock();
    double time_taken = (double)(end - start) / CLOCKS_PER_SEC;

    printf("\nSorted successfully? %s\n", is_sorted(arr, n) ? "YES" : "NO");

    printf("\nSorted Array:\n");
    if(n <= 50)
        print_array(arr, n);
    else
        printf("Array too large to display.\n");

    printf("Time taken: %f seconds\n", time_taken);

    printf("\nEnter element to search: ");
    scanf("%d", &target);

    int index = binary_search(arr, 0, n-1, target);
    if(index != -1)
        printf("Element found at index %d\n", index);
    else
        printf("Element not found\n");

    free(arr);
    return 0;
}