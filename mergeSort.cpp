#include "SortingAlgos.h"

void merge(int List[],int const left,int const right, int const mid){
    int const SubList1 = mid - left + 1;
    int const SubList2 = right - mid; 
    int *leftList = new int[SubList1],
         *rightList = new int[SubList2];
    for (int i = 0; i < SubList1; i++)
        leftList[i] = List[left + i];
    for (int j = 0; j < SubList2; j++)
        rightList[j] = List[mid + 1 + j];
    int indSubList1 = 0, indSubList2 = 0;
    int indOfMergedList = left;
    while (indSubList1 < SubList1 && indSubList2 < SubList2) {
        if (leftList[indSubList1]
            <= rightList[indSubList2]) {
            List[indOfMergedList]
                = leftList[indSubList1];
            indSubList1++;
        }
        else {
            List[indOfMergedList]
                = rightList[indSubList2];
            indSubList2++;
        }
        indOfMergedList++;
    }
    while (indSubList1 < SubList1) {
        List[indOfMergedList]
            = leftList[indSubList1];
        indSubList1++;
        indOfMergedList
        ++;
    }
    while (indSubList2 < SubList2) {
        List[indOfMergedList]
            = rightList[indSubList2];
        indSubList2++;
        indOfMergedList++;
    }
    delete[] leftList;
    delete[] rightList;
}

void mergeSort(int List[], int const begin, int const end)
{
    if (begin >= end)
        return;
    int mid = begin + (end - begin) / 2;
    mergeSort(List, begin, mid);
    mergeSort(List, mid + 1, end);
    merge(List, begin, mid, end);
}