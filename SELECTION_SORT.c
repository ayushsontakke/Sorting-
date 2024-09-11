#include <stdio.h>
void SelectionSort(int arr[],int size,int index){
    if(index>=size-1){
        return;
    }
    int min = index;
    for(int i=index+1;i<size;i++){
        if(arr[i]<arr[min]){
            min = i;
        }
    }
    if(min!=index){
        int temp = arr[min];
        arr[min] = arr[index];
        arr[index] = temp;
    }
    SelectionSort(arr,size,index+1);
}
int main(){
    int size;
    printf("enter the size of the array: ");
    scanf("%d", &size);
    int arr[size];
    printf("enter the %d element of the array: ",size);
    for(int i=0;i<size;i++){
        scanf("%d", &arr[i]);
    }
    SelectionSort(arr,size,0);
    for(int i=0;i<size;i++){
        printf("%d  ", arr[i]);
    }
}