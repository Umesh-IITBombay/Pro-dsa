#include<iostream>
#include<stdio.h>
using namespace std;

struct Rectangle{
    int length;
    int breadth;
};

int main(){
    struct Rectangle r= {12,34};
    struct Rectangle *p=&r;

    r.length=45;
    p -> length = 20;
    cout<<"area of the rectangle: "<<r.length*r.breadth << endl;

}