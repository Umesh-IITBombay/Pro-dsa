#include<iostream>
using namespace std; 

class Rectangle
{
    private:
        float length;
        int breadth;
    public:
        Rectangle(){
            length,breadth = 1;
        }
        Rectangle(int l,int b){
            length = l;
            breadth = b;
        };
        int area(){
            return length*breadth;
        };
        int perimeter(){
            return 2*(length + breadth);
        };
        int getlength(){
            return length;
        } 
        void setlength(int l){
            length = l;
        }
        ~Rectangle(){
            cout << "destructor" << endl;
        };
};

int main(){
    Rectangle r(10,5);
    cout << "Area:" << r.area()<<endl;
    cout << "perimeter:" << r.perimeter()<<endl;
    return 0;
}
