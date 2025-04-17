/*Applications of Binary Search Algorithm
- Binary search can be used as a building block for more complex algorithms
  used in machine learning, such as algorithms for training neural networks
  or finding the optimal hyperparameters for a model.
- It can be used for searching in computer graphics such as algorithms for
  ray tracing or texture mapping.
- It can be used for searching a database.
*/

#include <stdio.h>

int binary_search(int arr[], int n, int ele);

int main(void) {
    int arr[] = {2, 5, 8, 12, 16, 23, 38, 56, 72, 91};
    int n = sizeof(arr) / sizeof(arr[0]);
    int ret = binary_search(arr, n, 23);
    if (ret == -1)
        printf("Element not found with error code %d\n", ret);
    else
	printf("Element found at index %d\n", ret);
    return 0;
}

int binary_search(int arr[], int n, int ele) {
    int low = 0;
    int high = n - 1;
    int mid;

    while (low <= high) {
        mid = (low + high) / 2; /* arr size 10, high = 9, low = 0, if element is at last also then also (9+9)/2 = 9 only index won't go out of range or we can also use mid = low + (high - low) / 2; */
	if (ele < arr[mid])
	    high = mid - 1;
	else if (ele > arr[mid])
	    low = mid + 1;
	else
	    return mid;
	    
    }
    return -1;
}

