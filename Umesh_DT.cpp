#include<bits/stdc++.h>
using namespace std;

struct dt{
    int num;
    float fnum;
    double dnum;
};

int main(){
    struct dt p={1,2.3,4.67};
    cout<<"umesh"<<endl;
    p.num=4;
    p.fnum=5.6;
    p.dnum=p.num*p.fnum;
    cout << p.dnum<<endl;        
}
