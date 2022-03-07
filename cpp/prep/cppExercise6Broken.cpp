#include <cstdio>
#include <iostream>
using namespace std;


int main() {
    int numberOfArrays, numberOfQueries;
    int lengthOfK;

    //k number of elements in the array
    //n number of arrays
    //malloc k

    scanf("%d %d",&numberOfArrays,&numberOfQueries);

    int **kPtr = (int**)malloc(numberOfArrays * sizeof(int*));
    for(int i = 0; i < numberOfArrays; i++){
        scanf("%d ",&lengthOfK);
        kPtr[i] = (int*)malloc(lengthOfK * sizeof(int));
        for(int j=0; j < lengthOfK;j++){
            scanf("%d ", &kPtr[i][j]);
        }
    }
    int *qPtr = (int*)malloc(lengthOfK * sizeof(int));
    for(int i = 0; i < numberOfQueries; i++){
        scanf("%d %d", &qPtr[i], &qPtr[i+1]);
    }

    
    for(int i = 0; i < numberOfQueries; i++){
        printf("%d \n", kPtr[qPtr[i]][qPtr[i+1]]);
    }

    free(kPtr);
    free(qPtr);
    return 0;
}