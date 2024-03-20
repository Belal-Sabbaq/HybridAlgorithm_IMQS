#ifndef SORTINGALGOS_H
#define SORTINGALGOS_H

#include <iostream>
#include <vector>


#include <iostream>
using namespace std;

void selectionSort(int List[], int size);
void insertionSort(int List[], int size);
void quickSort(int List[], int low,int high);
void mergeSort(int List[],int const left,int const right, int const mid);
#endif