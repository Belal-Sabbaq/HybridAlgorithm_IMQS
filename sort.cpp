#include "SortingAlgos.h"
#include <fstream>
#include <chrono>
int main(int argc, char **argv){
    int selected = stoi(argv[1]);
    vector<int> List;
    int temp;
    int vectorSize;
    string inputfilename = argv[2];
    string outputfilename = argv[3];
    string resultfilename = argv[4];
    ifstream file(inputfilename);
    ofstream output(outputfilename);
    ofstream result(resultfilename);
    // start reading from the inputfile 
    while (file >>temp ){
        List.push_back(temp);
    }
    vectorSize= List.size();
    int * ListArr = new int[vectorSize];
    for (int i = 0; i < vectorSize; i++) {
        ListArr[i] = List[i];
    }
    List.clear();
    //end reading from the inputfile

    auto start = std::chrono::high_resolution_clock::now();
    switch (selected) {
        case 0:
            selectionSort(ListArr , vectorSize);
            break;
        case 1:
            insertionSort(ListArr, vectorSize);
            break;
        case 2:
            mergeSort(ListArr,0,vectorSize-1);
            break;
        case 3:
            quickSort(ListArr,0,vectorSize-1);
            break;
    }
    auto end = std::chrono::high_resolution_clock::now();

    auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(end - start).count();
    ///writing the sortedDataFile
    for(int i = 0; i < vectorSize; i++){
        output << ListArr[i]<< '\n';
    }
    result << duration;
    
    return 0;
}