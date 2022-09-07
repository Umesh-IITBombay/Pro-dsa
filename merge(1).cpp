#include<bits/stdc++.h>
using namespace std

struct Array
{
    int A[20];
    int size;
    int length;
    
};

int main()
{
    struct Array arr1 = {{2,6,10,15,25},10,6};
    struct Array arr2 = {{3,6,7,9,15,24},10,6};
    struct Array *arr3;
    arr3 = Merge(&arr1,&arr2);
    return 0;
}