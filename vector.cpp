// vector is very important in this field
#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> myvector;
    for(int i = 0; i<=5; i++){
        int p;
        cout << "enter an amount: ";
        cin >> p;
        myvector.push_back(p);
    }
    cout<<"my vector contain : " ;
    for(int i = 0; i<=5 ; i++){
        cout<< myvector[i]<<endl;
    }
} 