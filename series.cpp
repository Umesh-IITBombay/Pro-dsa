#include<iostream>
#include<stdlib.h>
using namespace std;

int solve(int A, int B) { 
    int X=A;
    cout << "value of X: " << X << endl;
    for (int i = 0; i < B-1; i++) { 
        if(X%2 == 0)
            X=X/2; 
       else 
            X=3*X + 1;
    }
    return X;
}

int main (){
    int A,X,B;
    cin>>A;
    cin>>B;
    X=solve(A,B);
    cout<<X;
    return 0;
}

