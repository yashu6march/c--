#include<iostream>
using namespace std;
int main(){

    // a pointer is a datatype which holds the ram address of other datastypes

    int a = 5;
    int* b = &a;  //here (int*) is a pointer which holds the value of adress of a
                  // here & is an address operator

                  float c = 3.14;
                float* d = &c;

                //& >> (address of ) operator
                //* >> (value at) / dereference operator

    cout<<b<<endl;// here it will print the adrerss of a
    cout<<&a<<endl; //here it will also print the address of a

    cout<<*b<<endl;  //here it will point what is the valuye at b(since it holds a it has value 5 as mentioned)

    cout<<&c<<endl;
    cout<<d<<endl;
  

    int** e= &b;// pointer to pointer, esa pointer joki pointer ka address store karta hai

    cout<<e<<endl;
    cout<<**e;
    return 0;
}