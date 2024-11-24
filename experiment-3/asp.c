//this the activity selection problem
#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int start, finish;
} Activity;

int compare(const void *a, const void *b) {
    return ((Activity *)a)->finish - ((Activity *)b)->finish;
}

void activitySelection(Activity arr[], int n) {
    qsort(arr, n, sizeof(Activity), compare);
    printf("Selected activities:\n");
    int i = 0;
    printf("Activity(%d, %d)\n", arr[i].start, arr[i].finish);
    for (int j = 1; j < n; j++) {
        if (arr[j].start >= arr[i].finish) {
            printf("Activity(%d, %d)\n", arr[j].start, arr[j].finish);
            i = j;
        }
    }
}

int main() {
    Activity arr[] = {{1, 3}, {2, 5}, {4, 7}, {1, 8}, {5, 9}, {8, 10}};
    int n = sizeof(arr) / sizeof(arr[0]);
    activitySelection(arr, n);
    return 0;
}
