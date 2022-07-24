#include<iostream>
#include<stdio.h>

using namespace std;
//call by reference

void swap(int &x,int &y){
    int temp = x;
    x=y;
    y=temp;
}

//working is same as call by adress as well as call by reference

void swap(int &x,int *y){
    int temp = x;
    x=*y;
    *y=temp;
}


int main(){
    int num1=10,num2=15;
    swap(num1,num2);
    cout <<num1<<endl<<num2;

     
}

