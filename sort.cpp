#include "SortingAlgos.h"
#include <fstream>
#include <vector>
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
    while (file >>temp ){
        List.push_back(temp);
    }
    vectorSize= List.size();
    int * ListArr = new int[vectorSize];
    for (int i = 0; i < vectorSize; i++) {
        ListArr[i] = List[i];
    }
    List.clear();
    for(int i = 0; i < vectorSize; i++){
        output << ListArr[i]<< '\n';
    }
    
    return 0;
}