//3 method
//A[row][column]

#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;
int main()
{
    int A[3][4] = {{1,2,3,4},{2,3,5,6},{3,4,6,6}};
    int *B[3];
    int **C;
    B[0] = new int[4];
    B[1] = new int[4];
    B[2] = new int[4];
    C = new int*[3];
    C[0] = new int[4];
    C[1] = new int[4];
    C[2] = new int[4];


    // printing A
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cout<< A[i][j]<< endl;
        }
    }
    delete[] *B;
    delete[] C;
    return 0;
}
