#include<iostream>
#include<stdio.h>
using namespace std;


struct rectangle
{
    int length;
    int bredth;
};

int main(){
    rectangle *p;
    p = new rectangle; 
    rectangle r={12,23};
    cout<<r.length;
    cout<<r.bredth;

    
    cout<<p->length<<endl;
    cout<<p->bredth<<endl;
    delete [] p;
    
}