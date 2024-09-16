#include <stdio.h>

void insertion_sort(int arr[],int size){
    if(size<=1){
        return;
    }
    insertion_sort(arr,size-1);
    int last = arr[size-1];
    int j = size-2;
    while(j>=0 && arr[j]>last){
        arr[j+1] = arr[j];
        j--;
    }
    arr[j+1] = last;
}
int main(){
    int size;
    printf("enter the size of array: ");
    scanf("%d", &size);
    int arr[size];
    printf("enter %d element of array: ",size);
    for(int i=0;i<size;i++){
        scanf("%d", &arr[i]);
    }
    insertion_sort(arr,size);
    for(int i=0;i<size;i++){
        printf("%d  ", arr[i]);
    }
}