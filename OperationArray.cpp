#include<iostream>
using namespace std;

struct array
{
    int A[20];
    int size;
    int length;
};

void Display(struct array arr)
{
    int i ;
    cout<<"Elements are:";
    for(i= 0;i<arr.length;i++)
        cout<<arr.A[i] << endl;
}
//for changing the size of an array we need to paas it by address

void Append(struct array *arr,int x)
{
    if(arr -> length < arr -> size)
        arr -> A[arr -> length++] = x;
        //arr -> length += 1;
}

void Insert(struct array *arr,int index,int x)
{
    int i;
    if(index>0 && index< arr->length)
        for(i=arr->length;i > index;i--){
            arr->A[i] = arr->A[i-1];
        }
        arr->A[index] = x;
        arr -> length++;
}

int Delete(struct array *arr,int index)
{
    int x=0;
    int i=0;
    if(index>=0 && index<arr->length)
        x=arr->A[index];
        for(i=index;i<arr->length-1;i++)
            arr->A[i]=arr->A[i+1];
        arr->length--;
        return x;
    return 0;
}

int Linearsearch(struct array arr,int key)
{
    int i;
    for(int i=0;i<arr.length;i++)
        if(key == arr.A[i])
            return i;
    return -1;
}
int main()
{
    struct array arr = {{2,3,4,5,6,7},20,6};
    // Append(&arr,9);
    // Display(arr);
    // Insert(&arr,0,19);
    // Display(arr);
    // cout<< Delete(&arr,4);
    // Display(arr);
    cout<<Linearsearch(arr,6)<<endl;
    return 0;
}