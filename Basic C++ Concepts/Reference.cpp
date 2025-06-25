#include <bits/stdc++.h>
using namespace std;

// Reference is an alias or another name given to a variable

int main(){
    int a = 10, b = 20;
    int &r = a;  // now r is also a name of a, so we can use any of the two names to access the data

    cout<<r<<a;

    r = 50; // this will change the data and if we print a also it will be 50
}