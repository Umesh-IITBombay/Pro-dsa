#include<iostream>
#include<stdio.h>

using namespace std;

class Rectangle
{
public:
    int length;
    int breadth;

void initialise(int l,int b)
{
    length = l;
    breadth = b;
}

int area()
{
    int ar = length * breadth;
    return ar;
}

int perimeter()
{
    int p;
    p = 2*(length + breadth);
    return p;
}

};


int main()
{
    Rectangle r;
    int l,b;
    cin>>l>>b;

    r.initialise(l,b);
    int a = r.area();
    int peri = r.perimeter();

    printf("Area = %d\nperimeter = %d\n",a,peri);
    return 0;
}