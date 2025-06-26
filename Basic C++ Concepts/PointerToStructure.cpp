#include <bits/stdc++.h>
using namespace std;

struct Student{
    string name;
    int roll;
};

int main(){

    Student s1 = {"Ram", 101}; // variable created in Stack memory
    Student *p1 = &s1;  // pointer to s1

    // creating variable in Heap memory
    Student *p2 = new Student; // C++ way of creating variable in Heap memory
    Student *p3 = (Student *) malloc(sizeof(Student));  // C way of creating variable in Heap memory

    // on creating a variable in Heap memory, it retuns the address of created variable

    // two ways of accessing name and roll of created variable in Heap memory
    p2->name = "Shyam"; // Way 1, using arrow operator
    (*p2).roll = 102; // Way 2, using dot operator

    cout<< (*p1).name <<endl;
    cout<< p1->roll <<endl;
    cout<< (*p2).name <<endl;
    cout<< p2->roll <<endl;
     

}