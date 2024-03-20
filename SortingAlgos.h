#ifndef SORTINGALGOS_H
#define SORTINGALGOS_H

#include <iostream>
#include <vector>
using namespace std;

void selectionSort(int List[], int size);
void insertionSort(int List[], int size);
void quickSort(int List[], int low,int high);
void mergeSort(int array[], int const begin, int const end);
#endif