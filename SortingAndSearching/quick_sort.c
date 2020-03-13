#include <stdio.h>
#define N 100

void swap(int *a, int *b)
{
  int t = *a;
  *a = *b;
  *b = t;
}


int partition(int data[], int start, int end){
    int pivot = data[end];
    int i = start-1;
    for(int j=start; j<end; j++){
        if(data[j]<=pivot){
            i++;
            swap(&data[i], &data[j]);
        }
    }
    swap(&data[i + 1], &data[end]);
    return (i+1);
}

void display(int a[], int n){
    for (int i=0; i<n; i++)
    {
        printf("%d, ", a[i]);
    }
}

int quickSort(int data[], int start, int end){
    if(start < end){
        int pi = partition(data, start, end);
        // display(data, 3);
        // printf("Pivot Index: %d", pi); 
        quickSort(data, start, (pi-1));
        quickSort(data, pi+1, end);
    }
    return 0;
}

int main(){
    int a[N], n, i, pivot;
    printf("Array Len: ");
    scanf("%d", &n);

    for (i=0; i<n; i++)
    {
        printf("Enter value for a[%d]:", i);
        scanf("%d", &a[i]);
    }
    printf("Unsorted Array: \n");
    for (i=0; i<n; i++)
    {
        printf("%d, ", a[i]);
    }
    quickSort(a, 0, (n-1));
    printf("\nSorted Array:\n");
    for (i=0; i<n; i++)
    {
        printf("%d, ", a[i]);
    }
    printf("\n");
    return 0;

}