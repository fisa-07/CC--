#include<stdio.h>

void merge(int arr[], int l, int mid, int r)
{
    int n1 = mid-l+1, n2 = r-mid, i, j, k;
    int a[n1], b[n2];

    for(i=0; i<n1; i++)
        a[i] = arr[l + i];
    for(i=0; i<n2; i++)
        b[i] = arr[mid+1 + i];

    i = 0, j = 0, k = l;
    while(i < n1 && j < n2){
        if(a[i] < b[j]){
            arr[k] = a[i];
            k++, i++;
        }
        else{
            arr[k] = b[j];
            k++, j++;
        }
    }
    while(i < n1){
        arr[k] = a[i];
        k++, i++;
    }
    while(j < n2){
        arr[k] = b[j];
        k++, j++;
    }
}

void mergeSort(int arr[], int l, int r)
{
    if(l < r){
        int mid = (l + r) / 2;
        mergeSort(arr, l, mid);
        mergeSort(arr, mid+1, r);

        merge(arr, l, mid, r);
    }
}

int main()
{
    int arr[20], n, i;
    printf("Enter size of array: ");
    scanf("%d", &n);
    printf("Enter array: ");
    for(i=0; i<n; i++)
        scanf("%d", &arr[i]);

    mergeSort(arr, 0, n-1);

    printf("Merge sorted array: ");
    for(i=0; i<n; i++)
        printf("%d ", arr[i]);
    printf("\n");

    return 0;
}