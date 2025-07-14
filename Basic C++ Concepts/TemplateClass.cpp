#include <bits/stdc++.h>
using namespace std;

/*
If we want to create a class whic is independent of data type, i.e. can work for all data types(this is called generic programming),
we can create template classes.
*/

template<class T>
class Arithmetic{
    T a;
    T b;
    
public:
    Arithmetic(T a, T b){
        this->a = a;  // in C++ this contains the address of current object, that's why using '->' operator instead of '.' operator
        this->b = b;
    }
    T add(){
        T c;
        c = a + b;
        return c;
    }
    T sub(){
        T c;
        c = a - b;
        return c;
    }
    
};

int main() {
    Arithmetic<int> r1(10, 20);
    Arithmetic<float> r2(1.78, 2.66);
    cout<<r1.add()<<endl;
    cout<<r1.sub()<<endl;
    cout<<r2.add()<<endl;
    cout<<r2.sub()<<endl;

    return 0;
}

