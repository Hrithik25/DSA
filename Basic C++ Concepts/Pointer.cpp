#include <bits/stdc++.h>
using namespace std;
// Pointer stores address of another variable
int main() {
    int a = 10;
    cout<<"Value of a: "<<a<<endl;

    int *p;  // declaration of pointer
    p = &a; // &a returns the address of a

    cout<< p <<endl; // prints address of a stored in p
    cout<< *p <<endl; // prints data stored in the address
    cout << &a <<endl; // prints address of a
    cout << &p <<endl; // prints address of p
}
