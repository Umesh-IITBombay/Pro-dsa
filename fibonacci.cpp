#include<stdio.h>

int feb(int n){
    int s=0;
    int d=1;
    int z;
    printf("%d\n",s);
    printf("%d\n",d);
    z=d+s;
    for(int i=0;i<n;i++){
        int w;
        w = z;
        printf("%d\n",z);
        z+=w;
    }
}

int main(){
    int p = 5;
    feb(p);
    return 0;
}