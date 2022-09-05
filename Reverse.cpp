#include<iostream>
#include<stdio.h>

using namespace std;


struct Array{
    int A[20];
    int length;
    int size;
};

void Reverse(struct Array *arr)

{
    int i,j;
    int *B;
    B = new int[arr->length];
    for(i=arr->length - 1,j = 0;i>0;i--,j++){
        B[j] = arr -> A[i];
    }
    for(int i =0 ;i<arr->length;i++){
        arr->A[i] = B[i];
    }
    delete[] B; 
}


void Display(struct Array arr)
{
    for(int i = 0; i < arr.length;i++)
        cout<< arr.A[i] << endl;
}

void InsertSort(struct Array *arr,int x)
{
    int i=arr->length-1;
    if(arr->length == arr->size)
        return;
    while(i>=0 && arr->A[i] > x)
    {
        arr->A[i+1]=arr->A[i];
        i--;
    }
    arr->A[i+1] = x;
    arr->length++;
}

int isSorted(struct Array arr)
{
     int i=0;
     while(arr.A[i]>arr.A[i+1])
     {
        return false;
     }
     return true;
}
int main()
{
    struct Array arr = {{2,3,6,7,16,56},6,20};
    //Reverse(&arr);
    InsertSort(&arr,4);
    cout<<isSorted(arr)<<endl;
    Display(arr);
    return 0;
}