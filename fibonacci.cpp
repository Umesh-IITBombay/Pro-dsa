#include<stdio.h>

int feb(int n){
    int t0,t1,s;
    t0 = 0;
    t1 = 1;
    if(n<=1)
        return 0;
    for(int i=2;i<=n;i++){
        s = t0+t1;
        t0 = t1;
        t1 = s;
    }
    return s;
}

int main(){
    int p = 5;
    printf("%d\n",feb(p));
    return 0;
}