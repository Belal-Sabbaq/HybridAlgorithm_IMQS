#include "SortingAlgos.h"

void selectionSort(int List[], int size){
    int i, j, min,temp;
    for(i = 0; i < size - 1; i++){
        min = i;
        for(j = i + 1; j < size; j++){
            if(List[j] < List[min]){
                min = j;
            }
        }
        if (min != i){
            temp = List[i];
            List[i] = List[min];
            List[min] = temp;
        }
    } 
}