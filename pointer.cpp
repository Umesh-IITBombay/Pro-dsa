#include<iostream>
 
using namespace std;

int main(){
    int a=10;
    int A[]={1,2,3,4,5,6};
    int *p;
    int *q;
    p=&a;
    cout << a << endl;
    cout << *p << endl;
    cout << p <<endl << &a << endl;
    q=A;
    for(int i=0;i<6;i++){
        cout << q[i] << endl;
    }
} 
