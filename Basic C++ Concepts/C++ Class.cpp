#include <bits/stdc++.h>
using namespace std;

class Rectangle {
    int length;
    int breadth;

 public:
    Rectangle(int l, int b)  // Constructor
    {
        length = l;
        breadth = b;
    }

    int area()
    {
        return length * breadth;
    }

    void changeLength(int l)
    {
        length = l;
    }
};

int main() {
    Rectangle r1(10, 5);  // length and breadth gets initialised using constructor
    cout << "Area: " << r1.area();
    r1.changeLength(100);
    cout<<endl<< "New Area: " << r1.area();
}
