#include <stdio.h>

#define ARRAY_SIZE(a) sizeof(a)/sizeof(a[0])

/* Function to find the min and max element of the array */

void findMinimumMaximum(int arr[], int N) {
        int i;
        /* variable to store the min and max element */
        int min = arr[0], max = arr[0];

        /* Traverse the array */
        for (i = 0; i < N; i++) {
                /* If current element is smaller, update min*/
                if (arr[i] < min) {
                        min = arr[i];
                }
                /* If current element is bigger, update max */
                if (arr[i] > max) {
                        max = arr[i];
                }
        }

        printf("minimum element is %d\n", min);
        printf("maximum element is %d\n", max);
}

int main() {
        /* Given array */
        int arr[] = {5, 8, 4, -1};
        int N = ARRAY_SIZE(arr);

        findMinimumMaximum(arr, N);

        return 0;
}
