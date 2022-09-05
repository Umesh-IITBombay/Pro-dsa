#include<iostream>
#include<stdio.h>
using namespace std;


int array_A(int p){
    int A[p];
    int B[p];
    int r;
    int t;
    cout << "enter the element for A"<<endl;
    for(int i=0;i<p;i++){
        cin>>A[i];
    }
    cout << "enter the element for B"<<endl;
    for(int i=0;i<p;i++){
        cin>>B[i];
    }

    if(B[1] > B[2]){
        if(B[1] > B[3]){
            r = B[1];
        }
        else
            r = B[3];
    }
    else 
        r = B[2];
    
    cout << r << endl;

    if(A[1] > A[2]){
        if(A[1] > A[3]){
            t = A[1];
            cout<< A[1] << endl;
            A[1] = t*r;
            cout<< A[1] << endl;
        }
        else
            t = A[3];
            cout<< A[3] << endl;
            A[3] = t*r;
            cout << A[3] << endl;
    }
    else 
        t = A[2];
        cout<< A[2] << endl;
        A[2] = t*r;
        cout << A[2] << endl;
    
}

int main(){
    int n;
    cout << "enter the number for test cases:";
    cin >> n ;
    int p;
    cout << "enter the number for array element:";
    cin >> p;
    array_A(p);
    return 0;
}