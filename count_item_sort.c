#include <stdio.h>

/*
 * 在排序数组中，找出给定数字的出现次数，比如[1,2,3,3,3,5,6]中3的出现次数是3次.
 */
int count_item(int a[], int v, int n) {
    int mid, i = 0, j = n - 1;
    int low, high;

    while (i < j - 1) {
        mid = i + (j - i) / 2;
        if (a[mid] >= v) 
            j = mid;
        else
            i = mid;
    }

    if (a[i] == v)
        low = i;
    else if (a[j] == v)
        low = j;
    else
        return 0;

    i = 0;
    j = n - 1;
    while (i < j - 1) {
        mid = i + (j - i) / 2;
        if (a[mid] <= v) 
            i = mid;
        else
            j = mid;
    }

    if (a[j] == v)
        high = j;
    else if (a[i] == v)
        high = i;
    else
        return 0;

    return high - low + 1;
}

int main(void) {
    int a[10] = {1, 2, 3, 3, 3, 3, 5, 6, 6, 9};

    printf("%d\n", count_item(a, 3, 10));

    return 0;
}
