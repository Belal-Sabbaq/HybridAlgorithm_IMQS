#include "SortingAlgos.h"

void insertionSort(int List[], int size){
    int i,inserted,j;
    for(i=0;i<size;i++){
        inserted = List[i];
        j=i-1;
        while(j>=0 && List[j]>inserted){
            List[j+1]=List[j];
            j--;
        }
        List[j+1]=inserted;
    }

}