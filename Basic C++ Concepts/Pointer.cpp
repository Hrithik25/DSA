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

    // Pointer to array
    int arr[5] = {10,20,30,40,50};
    int *p1, *p2;
    // both of below methods assign address of arr into pointer
    p1 = arr;      
    p2 = &arr[0];
    cout<<p1<<" "<<p2;
    for(int i=0; i<5; i++){
        cout<<p1[i]<<" ";
        cout<<p2[i]<<" ";
    }
        
    
    // creating array in heap memory
    int *p3 = new heapArr[5];
    p3[0] = 100;
    p3[1] = 200;
    cout<<p3[0]<<" "<<p3[1];

    delete []p; // deleting array in heap memory to free up space in heap memory
}
