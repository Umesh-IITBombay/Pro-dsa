#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;

void print(char *c){
    c[3] = 'r';
    while(*c != '\0'){
        cout<<*c;
        c++;
    }    
}
 
int main(){
    char c[20] = "hello";
    print(c);
    return 0;
}

