#include<stdio.h>

void funA(int n);
void funB(int n){
    if(n>0){
    printf("%d\n", n);
    funA(n/2);
    }
}

void funA(int n){
    if(n>0){
    printf("%d\n",n);
    funB(n-1);
    }
}

int main(){
    funA(20);
    return 0;
}
