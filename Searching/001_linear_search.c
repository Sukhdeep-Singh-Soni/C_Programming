/* Applications of Linear Search Algorithm:
- Unsorted Lists: When we have an unsorted array or list, linear search is 
  most commonly used to find any element in the collection.
- Small Data Sets: Linear Search is preferred over binary search when we have
  small data sets.
- Searching Linked Lists: In linked list implementations, linear search is
  commonly used to find elements within the list. Each node is checked
  sequentially until the desired element is found.
- Simple Implementation: Linear Search is much easier to understand and
  implement as compared to Binary Search or Ternary Search.
*/
#include <stdio.h>

int linear_search(int arr[], int n, int ele);

int main(void) {
    int arr[] = {12, 45, 1, 500, 15, 6};

    int n = sizeof(arr) / sizeof(arr[0]);
    int ret = linear_search(arr, n, 15);
    (ret == -1) ? printf("element not found with return code %d\n",ret) :
	    	  printf("element found at index %d\n", ret);
    return 0;
}

int linear_search(int arr[], int n, int ele) {
    for (int i = 0; i < n; i++)
        if (arr[i] == ele)
	    return i;
    return -1;
}
