#include <bits/stdc++.h>
using namespace std;

/*  
 In C++, structure can also be written like classes(combination of variables and functions).
 Difference between stuctures and classes in C++ is that stuctures don't have option of 
 access specifier, everything is public inside structure.
 But classes have access specifier and variables and functions can be made public, private or protected.
*/

struct RectangleStructure{ 
    int length;
    int breadth;

    void initialise(int l, int b){
        length = l;
        breadth = b;
    }

    int area(){
        return length * breadth;
    }

    int perimeter(){
        return 2*(length + breadth);
    }
};

class RectangleClass{
    int length;
    int breadth;

    public:
    RectangleClass(){ // Default constructor
        length=0;
        breadth=0;
    }
    RectangleClass(int l, int b){ // Parameterised constructor
        length=l;
        breadth=b;
    }
    int area(){
        return length * breadth;
    }

    int perimeter(){
        return 2*(length + breadth);
    }
    int getLength(){ // getter
        return length;
    }
    int getBreadth(){
        return breadth;
    }
    void setLength(int l){ // setter
        length = l;
    }
    void setBreadth(int b){
        breadth = b;
    }
};


int main() {
    int l,b;
    cout<<"Enter length and breadth"<<endl;
    cin>>l>>b;

    RectangleStructure r1;
    RectangleClass r2(l,b);


    r1.initialise(l, b);
    cout<<"Area: "<<r1.area(r)<<endl;
    cout<<"Perimeter: "<<r1.perimeter(r)<<endl;


    return 0;
}

