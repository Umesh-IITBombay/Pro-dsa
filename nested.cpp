#include<stdio.h>

int fun(int n){
    if(n>100){
        return n-10;
    }
    return fun(fun(n+11));
}

int main(){
    int p;
    p = fun(10);
    printf("%d\n",p);
    return 0;
}