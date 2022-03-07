#include <cmath>
#include <cstdio>
#include <vector>
#include <array>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    vector<vector<int>> vectorVectors;

    int numberArrays;
    int numberQueries;

    cin >> numberArrays;
    cin >> numberQueries;
    
    int arrSize = 0;

    for(int i = 0; i < numberArrays; ++i){
        int arrElement = 0;
        cin >> arrSize;
        vectorVectors.push_back(vector<int>());
        //vectorVectors[i].push_back(arrSize);
        cout << "first elem " << arrSize << endl;
        for(int j = 0; j < arrSize; ++j){
            cin >> arrElement;
            vectorVectors[i].push_back(arrElement);
            cout << vectorVectors[i][j] << endl;
        }
    }

    vector<int> queries;
    int arr = 0;
    int arrAtIndex = 0;

    for(int i = 0; i < numberQueries; i++){
        cin >> arr;
        cin >> arrAtIndex;
        cout << vectorVectors[arr][arrAtIndex] << endl;
    }

    
    return 0;
}
