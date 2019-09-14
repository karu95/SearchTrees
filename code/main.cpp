#include "BST.h"
#include "RBTree.h"
#include "SplayTree.h"
#include <iterator>
#include <vector>
#include <fstream>
#include <iostream>


using namespace std;

int main(int argc, char* argv[]) {
    
    int operation;
    int dataset;

    if (argc != 3) {
        cerr<<"Invalid input argements!\nInput arguments: <operation(1-Insert, 2-Search)> <dataset>!";
        exit(1);
    }

    operation = strtol(argv[1], NULL, 10);
    dataset = strtol(argv[2], NULL, 10);

    cout<<operation<<endl;
    cout<<dataset<<endl;

    string file = "../data/data_"+to_string(dataset)+".txt";

    cout<<file<<endl;

    ifstream data_file(file);
    vector<int> data = {istream_iterator<int>(data_file), {}};

    cout<<data.size()<<endl;

    return 0;
}


