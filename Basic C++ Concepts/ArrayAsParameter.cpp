#include <iostream>
using namespace std;

// Array can only be called by address

void arrayAsParam(int array1[], int *array2) // array can be passed using both [] and *
{
    cout<<"Array 1-> ";
    for(int i=0; i<5; i++)
    {
        cout<<array1[i]<<" ";
    }

    cout<<endl<<"Array 2-> ";
    for(int i=0; i<5; i++)
    {
        cout<<array2[i]<<" ";
    } 
}

int* createArray(int size){
    int *x = new int[size]; // creating array in heap memory

    for(int i=0; i<size; i++)
        x[i] = i+10; 
    return x;
}

int main() {
    int arr1[] = {1,2,5,4,3};
    int arr2[] = {6,7,8,9,10};
    arrayAsParam(arr1, arr2);

    int *arr3 = createArray(10);
    cout<<endl<<"Array 3-> ";
    for(int i=0; i<10; i++)
        cout<<arr3[i]<<" ";
}
