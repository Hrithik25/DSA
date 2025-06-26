#include <bits/stdc++.h>
using namespace std;

/* In C++, there are 3 ways of passing parameters
    1. Pass by value
    2. Pass by address
    3. Pass by reference
*/

void callByValue (int a, int b){
    a = 100;  // In call by value, changing the formal parameters does not change the values of actual parameters
    b = 200;
}

void callByAddress(int *a, int *b){
    *a = 100;  // In call by address, changing the formal parameters changes the values of actual parameters
    *b = 200;
}

void callByReference(int &a, int &b){
    a = 300;  // In call by reference, changing the formal parameters changes the values of actual parameters
    b = 400;
}

int main(){
    int num1 = 10, num2 = 20;
    cout<<"Before function call "<<endl;
    cout<<"num1: "<<num1<<" num2: "<<num2<<endl;

    callByValue(num1, num2);
    cout<<"After call by value"<<endl;
    cout<<"num1: "<<num1<<" num2: "<<num2<<endl;

    callByAddress(&num1, &num2);
    cout<<"After call by address"<<endl;
    cout<<"num1: "<<num1<<" num2: "<<num2<<endl;

    callByReference(num1, num2);
    cout<<"After call by reference"<<endl;
    cout<<"num1: "<<num1<<" num2: "<<num2<<endl;

}