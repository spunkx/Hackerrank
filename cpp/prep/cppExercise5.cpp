/*#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void genNumbers(int *arr){
//*a = *a + *b
    for(int i = 1; i <= 1000; i++){
        arr[i] = i;
    }
}*/


#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void reverseArr(int numInts, int *arr){

    //initialse the swap function
    //set number of ints to be the same as the index (avoid buffer overflow)
    int intgerIndex = numInts-1;
    //create a temporary variable that will store the end value
    int temp = arr[intgerIndex];
    //swap end value and first values
    arr[intgerIndex] = arr[0];
    //put the end value back into first 
    arr[0] = temp;

    for(int i = 1; i <= intgerIndex/2; i++){
        temp = arr[intgerIndex-i];
        arr[intgerIndex-i] = arr[i];
        arr[i] = temp;
    }
}

int main() {
    int numInts;
    scanf("%d",&numInts);
    int arr[numInts];
    for(int i = 0; i < numInts; i++){
        scanf("%d", &arr[i]);
    }
    reverseArr(numInts,arr);
    for(int i = 0; i < numInts; i++){
        printf("%d ",arr[i]);
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    
    
    return 0;
}
