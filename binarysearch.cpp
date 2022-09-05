// for binary search list of element must be sorted.
//for binary search we need three index variale.

#include<iostream>
#include<stdio.h>

using namespace std;

struct Array
{
    int A[20];
    int length;
    int size;
};

void Display(struct Array arr)
{
    for(int i =0;i<arr.length;i++){
        cout<<arr.A[i]<<endl;
        }
}

int Binarysearch(struct Array arr,int key)
{
    int l,mid,h;
    l=0;
    h=arr.length-1;

    while(l<=h)
    {
        mid = (l+h)/2;
        if(key == arr.A[mid])
            return mid;
        else if(key <arr.A[mid])
            h = mid-1;
        else 
            l = mid + 1;
    }

    return -1;
}


int main(){
    struct Array arr = {{1,2,3,5,7,8},6,10};
    Display(arr);
    cout<<Binarysearch(arr,7)<<endl;
    return 0;
}