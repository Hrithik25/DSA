#include <bits/stdc++.h>
using namespace std;

// Structure is a type of custom datatype

// defining a structure
struct Card  {
    string value; 
    string color;
    string category;
} c1;  // Global variable c1

struct Card c2; // Global variable c2

int main() {
    struct Card c3, c4={"4", "red", "spade"}, deck[52]; // local variables
    cout<<c4.value<<" "<<c4.color<<" "<<c4.category<<endl;

    c3.value = "3";  // accessing using dot(.) operator
    c3.color = "black";
    c3.category = "club";
    cout<<c3.value<<" "<<c3.color<<" "<<c3.category<<endl;

 }
