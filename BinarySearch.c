#include <stdio.h>

int binarySearch(int arr[], int n, int target) {
    int low = 0, high = n - 1;
    while(low <= high){
        int mid = low + (high - low) / 2;
        if (arr[mid] == target){
            return mid;
        } else if(arr[mid] < target){
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return -1;
}        


int main(){
    int arr[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target;
    printf("\nEnter target number:");
    scanf("%d", &target);
    int result = binarySearch(arr, n, target);
    if (result != -1){
        printf("Element found at %d\n", result);
    } else {
        printf("Element not found.\n");
    }
    return 0;
}