#include <stdio.h>
void bubble_sort(int arr[], int size){
    if(size==1){
        return;
    }
    for(int i=0;i<size-1;i++){
        if(arr[i]>arr[i+1]){
            int temp = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = temp;
        }
    }
    bubble_sort(arr,size-1);
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
     bubble_sort(arr,size);
    for(int i=0;i<size;i++){
        printf("%d  ", arr[i]);
    }
}