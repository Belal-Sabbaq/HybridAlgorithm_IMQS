#include "SortingAlgos.h"
#include <fstream>
#include <chrono>
int main(int argc, char **argv){
    int selected = stoi(argv[1]);
    vector<int> List;
    int temp;
    int Size=0;
    string inputfilename = argv[2];
    string outputfilename = argv[3];
    string resultfilename = argv[4];
    ifstream file(inputfilename);
    ofstream output(outputfilename);
    ofstream result(resultfilename);
    // start reading from the inputfile 
    while (file >>temp ){
        List.push_back(temp);
        Size++;
    }
    int * ListArr = new int[Size];
    for (int i = 0; i < Size; i++) {
        ListArr[i] = List[i];
    }
    List.clear();
    //end reading from the inputfile

    auto start = std::chrono::high_resolution_clock::now();
    switch (selected) {
        case 0:
            selectionSort(ListArr , Size);
            break;
        case 1:
            insertionSort(ListArr, Size);
            break;
        case 2:
            mergeSortw(ListArr,Size);
            break;
        case 3:
            quickSort(ListArr,0,Size-1);
            break;
        case 4:
        hybridSort(ListArr,Size);
    }
    auto end = std::chrono::high_resolution_clock::now();

    auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(end - start).count();
    ///writing the sortedDataFile
    for(int i = 0; i < Size; i++){
        output << ListArr[i]<< '\n';
    }
    result << duration;
    delete[] ListArr;
    return 0;
}