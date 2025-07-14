#include <iostream>
using namespace std;

struct Rectangle {
    int length;
    int breadth;
    int arr[5];
};

int callByValue(Rectangle r){
    cout<<"Inside callByValue "<<endl;
    for(int i=0; i<5; i++)
        cout<<r.arr[i]<<" ";   // array inside structure can be passed by value
    
    cout<<"End of callByValue "<<endl;
    return r.length * r.breadth;
}

int callByAddress(Rectangle *r){
    cout<<"Inside callByAddress "<<endl;
    for(int i=0; i<5; i++)
        cout<<r->arr[i]<<" ";  
    
    cout<<"End of callByAddress "<<endl;
    return r->length * r->breadth;
}

int callByReference(Rectangle &r){
    cout<<"Inside callByReference "<<endl;
    for(int i=0; i<5; i++)
        cout<<r.arr[i]<<" ";   
    
    cout<<"End of callByReference "<<endl;
    return r.length * r.breadth;
}

Rectangle* createRectangle(){
    Rectangle *p = new Rectangle;  // creating Rectangle variable in heap memory
    p->length = 100;
    p->breadth = 50;
    p->arr = {21,22,23,24,25};

    return p;
}

int main() {
    Rectangle r1 = {10, 5, {11,12,13,14,15}};
    cout<< callByValue(r1) <<endl;
    cout<< callByReference(r1) <<endl;
    cout<< callByAddress(&r1) <<endl;

    Rectangle *r2 = createRectangle();
}
