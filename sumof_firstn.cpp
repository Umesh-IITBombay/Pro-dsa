#include<stdio.h>

int fun(int n){
    if(n > 0){
        int sum = 0;
        sum = fun(n-1) + n;
        return sum;
    }
    return 0;
}

int main(){
    int p;
    int r=3;
    p = fun(r);
    printf("%d\n",p);
    return 0;
}
 