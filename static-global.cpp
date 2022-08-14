#include<stdio.h>
#include<iostream>
using namespace std;

int x=6;  // global variable
int fun(int n)
{
    if(n>0)
    {
        static int x = 5;   //static variable(1st priority)
        cout<<x<<endl;
        x++;
        return fun(n-1) + x;
    }
    return 0;
}



int main(){
    int r=5;
    int p;
    p = fun(r);
    cout<<p<<endl;
    return 0;
}