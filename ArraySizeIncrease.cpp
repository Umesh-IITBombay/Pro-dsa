// we can not increse array of larger size
// means array is immutable in naturee

// we are using dynamic memory allocation for tranfering element from one array to larger size array


 
#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

int main(){
    int *p;
    int *q;
    p = new int[5];
    p[0] = 1;
    p[1] = 2;
    p[3] = 34;
    p[4] = 23;
    p[2] = 12;
     
    q = new int[10];
    q = p;
    for(int i=0;i<10; i++){
        cout<<q[i]<<endl;
        //delete[] q;
    }
    delete[] p;
    return 0;
}