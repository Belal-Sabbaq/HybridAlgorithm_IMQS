#include "SortingAlgos.h"
#include <cmath>
void hybridSort(int List[],int size){
    bool Sorted = true;
    int jump = log2(size);
    for(int i=0;i<size;i+= jump){
        if(List[i]>List[i+1]){
            Sorted = false;
            break;
        }
    }
    if(Sorted){
        if(size<=16){
            selectionSort(List,size);
        }
        else{
            quickSort(List,0,size-1);
        }
    }
    else{
    
        if(size<=16){
                insertionSort(List,size);
            }
            else if (size < 62000){ 
                quickSort(List,0,size-1);
            }
            else{
                mergeSortw(List,size);
            }
    }
}