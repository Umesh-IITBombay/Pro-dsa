#include<iostream>
#include<stdio.h>

using namespace std;

int main(){
    int A[5];
    A[0]=12;
    A[1]=15;
    A[2]=25;
//we can intialise array just after declaration of array
    cout<<sizeof(A)<<endl;
    cout<<A[1]<<endl;
    printf("%d\n",A[2]);
}