#include "SortingAlgos.h"

int partitionQuickSort(int List[], int low , int high){
    int temp=0;
    int pivot = List[high];
    int i = (low - 1);
    for(int j = low; j < high; j++){
        if(List[j] <= pivot){
            i++;
            temp = List[i];
            List[i] = List[j];
            List[j] = temp;
        }
    }
    temp = List[i+1];
    List[i+1] = List[high];
    List[high] = temp;
    return (i + 1);
    
}
void quickSort(int List[], int low,int high){
    if(low<high){
        int pivot = partitionQuickSort(List, low, high);
        quickSort(List, low, pivot-1);
        quickSort(List, pivot+1, high);
    }
}

