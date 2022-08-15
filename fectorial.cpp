#include<stdio.h>

int fun(int n){
    if(n == 0)
        return 1;
    return fun(n-1)*n;    
    }

int main(){
    int p;
    int r=5;
    p = fun(r);
    printf("%d\n",p);
    return 0;
}
