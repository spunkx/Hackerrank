#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

string ltrim(const string &);
string rtrim(const string &);
/*
    Int ("%d"): 32 Bit integer
    Long ("%ld"): 64 bit integer
    Char ("%c"): Character type
    Float ("%f"): 32 bit real value
    Double ("%lf"): 64 bit real value
*/


int solveMeFirst(int a, int b, int c) {
 return a+b+c;
}

int main() {
    //exercise 1
  /*int num1, num2;
  int sum;
  cin>>num1>>num2;
  sum = solveMeFirst(num1,num2);
  cout<<sum;*/

    //exercise 2
    /*int a,b,c;
    int sum;
    cin>>a>>b>>c;
    sum = solveMeFirst(a,b,c);
    cout << sum;*/

    //exercise 3
    /*int inputInt;
    long long inputLong;
    char inputChar;
    float inputFloat;
    double inputDouble;
    
    
    scanf("%d %llu %c %f %lf", &inputInt, &inputLong, &inputChar, &inputFloat, &inputDouble);    
    printf("%d\n%llu\n%c\n%.3f\n%.9lf",inputInt,inputLong,inputChar,inputFloat,inputDouble);*/


    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));

    // Write your code here
    printf("%d", n);
    return 0;

  
  return 0;
}


string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}