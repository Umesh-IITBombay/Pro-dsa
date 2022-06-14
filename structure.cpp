#include<iostream>
using namespace std;

struct  rectangle{
    int length;
    int breath;
};

struct complex{
    int real;
    int image;
};

int main(){
    struct rectangle r={12,23}; //declaration + initilization
    r.breath=13;
    struct complex c;
    c.real=12;
    c.image=45;
    cout<<c.real<< "+ i" << c.image<< endl;
    int p;
    p=r.length;
    cin >>  p ;
    cout << "area is:" << r.length*r.breath;
}